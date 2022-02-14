
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {struct i5100_priv* pvt_info; } ;
struct i5100_priv {int** dimm_numrank; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mem_ctl_info*) ;
 scalar_t__ FUNC_1 (struct mem_ctl_info*,int,int,int,int*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_2,
       struct mem_ctl_info *VAR_3)
{
 struct i5100_priv *VAR_4 = VAR_3->pvt_info;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   u8 VAR_7;

   if (FUNC_1(VAR_3, VAR_5, VAR_6, 5, &VAR_7) < 0)
    VAR_4->dimm_numrank[VAR_5][VAR_6] = 0;
   else
    VAR_4->dimm_numrank[VAR_5][VAR_6] = (VAR_7 & 3) + 1;
  }
 }

 FUNC_0(VAR_3);
}
