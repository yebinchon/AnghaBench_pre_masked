
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct camdd_dev {int free_indirect_queue; int free_queue; } ;
struct camdd_buf_data {int alloc_len; int * buf; } ;
struct TYPE_2__ {struct camdd_buf_data data; } ;
struct camdd_buf {int buf_type; struct camdd_dev* dev; int src_list; TYPE_1__ buf_type_spec; } ;
typedef int camdd_buf_type ;




 struct camdd_buf* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct camdd_buf*,int) ;
 struct camdd_buf* FUNC_4 (struct camdd_dev*,int) ;
 int VAR_0 ;
 int FUNC_5 (char*,int) ;

struct camdd_buf *
FUNC_6(struct camdd_dev *VAR_1, camdd_buf_type VAR_2)
{
 struct camdd_buf *VAR_3 = ((void*)0);

 switch (VAR_2) {
 case 129:
  VAR_3 = FUNC_0(&VAR_1->free_queue);
  if (VAR_3 != ((void*)0)) {
   struct camdd_buf_data *VAR_4;
   uint8_t *VAR_5;
   uint32_t VAR_6;

   FUNC_2(&VAR_1->free_queue, VAR_0);
   VAR_4 = &VAR_3->buf_type_spec.data;
   VAR_5 = VAR_4->buf;
   VAR_6 = VAR_4->alloc_len;
   FUNC_3(VAR_3, sizeof(*VAR_3));
   VAR_4->buf = VAR_5;
   VAR_4->alloc_len = VAR_6;
  }
  break;
 case 128:
  VAR_3 = FUNC_0(&VAR_1->free_indirect_queue);
  if (VAR_3 != ((void*)0)) {
   FUNC_2(&VAR_1->free_indirect_queue, VAR_0);

   FUNC_3(VAR_3, sizeof(*VAR_3));
  }
  break;
 default:
  FUNC_5("Unknown buffer type %d requested", VAR_2);
  break;
 }


 if (VAR_3 == ((void*)0))
  return (FUNC_4(VAR_1, VAR_2));
 else {
  FUNC_1(&VAR_3->src_list);
  VAR_3->dev = VAR_1;
  VAR_3->buf_type = VAR_2;

  return (VAR_3);
 }
}
