
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hwrng {scalar_t__ priv; } ;
struct amd768_priv {int pcidev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct hwrng *VAR_0)
{
 struct amd768_priv *VAR_1 = (struct amd768_priv *)VAR_0->priv;
 u8 VAR_2;

 FUNC_1(VAR_1->pcidev, 0x40, &VAR_2);
 VAR_2 |= FUNC_0(7);
 FUNC_2(VAR_1->pcidev, 0x40, VAR_2);

 FUNC_1(VAR_1->pcidev, 0x41, &VAR_2);
 VAR_2 |= FUNC_0(7);
 FUNC_2(VAR_1->pcidev, 0x41, VAR_2);

 return 0;
}
