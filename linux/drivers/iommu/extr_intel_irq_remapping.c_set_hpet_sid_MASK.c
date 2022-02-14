
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct irte {int dummy; } ;
struct TYPE_2__ {scalar_t__ id; int bus; int devfn; scalar_t__ iommu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (struct irte*,int ,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct irte *VAR_5, u8 VAR_6)
{
 int VAR_7;
 u16 VAR_8 = 0;

 if (!VAR_5)
  return -1;

 FUNC_0(&VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_4[VAR_7].iommu && VAR_4[VAR_7].id == VAR_6) {
   VAR_8 = (VAR_4[VAR_7].bus << 8) | VAR_4[VAR_7].devfn;
   break;
  }
 }
 FUNC_3(&VAR_3);

 if (VAR_8 == 0) {
  FUNC_1("Failed to set source-id of HPET block (%d)\n", VAR_6);
  return -1;
 }






 FUNC_2(VAR_5, VAR_2, VAR_1, VAR_8);

 return 0;
}
