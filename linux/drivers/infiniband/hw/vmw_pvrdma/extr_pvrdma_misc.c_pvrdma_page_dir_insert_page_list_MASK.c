
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pvrdma_page_dir {int npages; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvrdma_page_dir*,int,int ) ;

int FUNC_1(struct pvrdma_page_dir *VAR_1,
         u64 *VAR_2,
         int VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (VAR_3 > VAR_1->npages)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_0(VAR_1, VAR_4, VAR_2[VAR_4]);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
