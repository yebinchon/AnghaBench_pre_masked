
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pxa_platdata {int dummy; } ;
struct pxa_device_desc {int dummy; } ;


 int VAR_0 ;
 struct pxa_device_desc VAR_1 ;
 struct pxa_device_desc VAR_2 ;
 struct pxa_device_desc VAR_3 ;
 struct pxa_device_desc VAR_4 ;
 int FUNC_0 (struct pxa_device_desc*,struct sdhci_pxa_platdata*,int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_5, struct sdhci_pxa_platdata *VAR_6)
{
 struct pxa_device_desc *VAR_7 = ((void*)0);

 switch (VAR_5) {
 case 0: VAR_7 = &VAR_1; break;
 case 1: VAR_7 = &VAR_2; break;
 case 2: VAR_7 = &VAR_3; break;
 case 3: VAR_7 = &VAR_4; break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_7, VAR_6, sizeof(*VAR_6));
}
