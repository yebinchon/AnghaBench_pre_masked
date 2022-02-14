
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {struct i5100_priv* pvt_info; } ;
struct i5100_priv {TYPE_1__** mtr; struct pci_dev* ch1mm; struct pci_dev* ch0mm; } ;
struct TYPE_2__ {int width; scalar_t__ numcol; scalar_t__ numrow; scalar_t__ numbank; int ethrottle; int present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pci_dev*,unsigned int const,int *) ;

__attribute__((used)) static void FUNC_7(struct mem_ctl_info *VAR_4)
{
 struct i5100_priv *VAR_5 = VAR_4->pvt_info;
 struct pci_dev *VAR_6[2] = { VAR_5->ch0mm, VAR_5->ch1mm };
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  int VAR_8;
  struct pci_dev *VAR_9 = VAR_6[VAR_7];

  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   const unsigned VAR_10 =
    (VAR_8 < 4) ? VAR_2 + VAR_8 * 2 :
       VAR_3 + (VAR_8 - 4) * 2;
   u16 VAR_11;

   FUNC_6(VAR_9, VAR_10, &VAR_11);

   VAR_5->mtr[VAR_7][VAR_8].present = FUNC_4(VAR_11);
   VAR_5->mtr[VAR_7][VAR_8].ethrottle = FUNC_0(VAR_11);
   VAR_5->mtr[VAR_7][VAR_8].width = 4 + 4 * FUNC_5(VAR_11);
   VAR_5->mtr[VAR_7][VAR_8].numbank = 2 + FUNC_1(VAR_11);
   VAR_5->mtr[VAR_7][VAR_8].numrow = 13 + FUNC_3(VAR_11);
   VAR_5->mtr[VAR_7][VAR_8].numcol = 10 + FUNC_2(VAR_11);
  }
 }
}
