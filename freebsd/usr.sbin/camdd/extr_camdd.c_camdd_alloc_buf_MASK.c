
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct camdd_dev {int blocksize; } ;
struct camdd_buf_data {int alloc_len; int * buf; } ;
struct TYPE_2__ {struct camdd_buf_data data; } ;
struct camdd_buf {int buf_type; int src_list; TYPE_1__ buf_type_spec; struct camdd_dev* dev; } ;
typedef int camdd_buf_type ;




 int FUNC_0 (int *) ;
 struct camdd_buf* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static struct camdd_buf *
FUNC_5(struct camdd_dev *VAR_0, camdd_buf_type VAR_1)
{
 struct camdd_buf *VAR_2 = ((void*)0);
 uint8_t *VAR_3 = ((void*)0);




 switch (VAR_1) {
 case 129:
  VAR_3 = FUNC_3(VAR_0->blocksize);
  if (VAR_3 == ((void*)0)) {
   FUNC_4("unable to allocate %u bytes", VAR_0->blocksize);
   goto bailout_error;
  }
  break;
 default:
  break;
 }

 VAR_2 = FUNC_1(1, sizeof(*VAR_2));
 if (VAR_2 == ((void*)0)) {
  FUNC_4("unable to allocate %zu bytes", sizeof(*VAR_2));
  goto bailout_error;
 }

 VAR_2->buf_type = VAR_1;
 VAR_2->dev = VAR_0;
 switch (VAR_1) {
 case 129: {
  struct camdd_buf_data *VAR_4;

  VAR_4 = &VAR_2->buf_type_spec.data;

  VAR_4->alloc_len = VAR_0->blocksize;
  VAR_4->buf = VAR_3;
  break;
 }
 case 128:
  break;
 default:
  break;
 }
 FUNC_0(&VAR_2->src_list);

 return (VAR_2);

bailout_error:
 FUNC_2(VAR_3);

 return (((void*)0));
}
