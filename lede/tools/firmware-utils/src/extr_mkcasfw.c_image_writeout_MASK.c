
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_desc {size_t file_size; size_t out_size; int csum; int padc; int file_name; } ;
struct csum_state {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,char*,size_t,...) ;
 int FUNC_1 (struct csum_state*) ;
 int FUNC_2 (struct csum_state*,int ) ;
 int FUNC_3 (int *,struct image_desc*,struct csum_state*) ;
 int FUNC_4 (int *,size_t,int ,struct csum_state*) ;

int
FUNC_5(FILE *VAR_1, struct image_desc *VAR_2)
{
 int VAR_3;
 struct csum_state VAR_4;
 size_t VAR_5;

 VAR_3 = 0;

 if (!VAR_2->file_size)
  return 0;

 FUNC_0(2, "writing image, file=%s, file_size=%d\n",
  VAR_2->file_name, VAR_2->file_size);

 FUNC_2(&VAR_4, VAR_0);

 VAR_3 = FUNC_3(VAR_1, VAR_2, &VAR_4);
 if (VAR_3)
  return VAR_3;


 VAR_5 = VAR_2->out_size - VAR_2->file_size;
 FUNC_0(1,"padding desc, length=%zu", VAR_5);
 VAR_3 = FUNC_4(VAR_1, VAR_5, VAR_2->padc, &VAR_4);

 VAR_2->csum = FUNC_1(&VAR_4);

 return VAR_3;
}
