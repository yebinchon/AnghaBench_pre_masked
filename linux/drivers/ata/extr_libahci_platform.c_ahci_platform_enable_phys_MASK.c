
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_host_priv {int nports; int * phys; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ahci_host_priv *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nports; VAR_3++) {
  VAR_2 = FUNC_1(VAR_1->phys[VAR_3]);
  if (VAR_2)
   goto disable_phys;

  VAR_2 = FUNC_4(VAR_1->phys[VAR_3], VAR_0);
  if (VAR_2) {
   FUNC_0(VAR_1->phys[VAR_3]);
   goto disable_phys;
  }

  VAR_2 = FUNC_3(VAR_1->phys[VAR_3]);
  if (VAR_2) {
   FUNC_0(VAR_1->phys[VAR_3]);
   goto disable_phys;
  }
 }

 return 0;

disable_phys:
 while (--VAR_3 >= 0) {
  FUNC_2(VAR_1->phys[VAR_3]);
  FUNC_0(VAR_1->phys[VAR_3]);
 }
 return VAR_2;
}
