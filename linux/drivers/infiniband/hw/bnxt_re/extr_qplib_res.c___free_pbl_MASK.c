
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct bnxt_qplib_pbl {int pg_count; scalar_t__ pg_size; int ** pg_map_arr; int ** pg_arr; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,scalar_t__,void*,int *) ;
 int FUNC_2 (int **) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1, struct bnxt_qplib_pbl *VAR_2,
         bool VAR_3)
{
 int VAR_4;

 if (!VAR_3) {
  for (VAR_4 = 0; VAR_4 < VAR_2->pg_count; VAR_4++) {
   if (VAR_2->pg_arr[VAR_4])
    FUNC_1(&VAR_1->dev, VAR_2->pg_size,
        (void *)((unsigned long)
         VAR_2->pg_arr[VAR_4] &
        VAR_0),
        VAR_2->pg_map_arr[VAR_4]);
   else
    FUNC_0(&VAR_1->dev,
      "PBL free pg_arr[%d] empty?!\n", VAR_4);
   VAR_2->pg_arr[VAR_4] = ((void*)0);
  }
 }
 FUNC_2(VAR_2->pg_arr);
 VAR_2->pg_arr = ((void*)0);
 FUNC_2(VAR_2->pg_map_arr);
 VAR_2->pg_map_arr = ((void*)0);
 VAR_2->pg_count = 0;
 VAR_2->pg_size = 0;
}
