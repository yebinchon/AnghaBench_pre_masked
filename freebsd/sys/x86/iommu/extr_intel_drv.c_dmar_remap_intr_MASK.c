
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct dmar_unit {struct dmar_msi_data* intrs; } ;
struct dmar_msi_data {scalar_t__ irq; int (* enable_intr ) (struct dmar_unit*) ;int msi_uaddr_reg; int msi_addr_reg; int msi_data_reg; int (* disable_intr ) (struct dmar_unit*) ;} ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (struct dmar_unit*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,scalar_t__,int*,int*) ;
 int FUNC_3 (int ) ;
 struct dmar_unit* FUNC_4 (int ) ;
 int FUNC_5 (struct dmar_unit*,int ,int) ;
 int FUNC_6 (struct dmar_unit*) ;
 int FUNC_7 (struct dmar_unit*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2, device_t VAR_3, u_int VAR_4)
{
 struct dmar_unit *VAR_5;
 struct dmar_msi_data *VAR_6;
 uint64_t VAR_7;
 uint32_t VAR_8;
 int VAR_9, VAR_10;

 VAR_5 = FUNC_4(VAR_2);
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_6 = &VAR_5->intrs[VAR_9];
  if (VAR_4 == VAR_6->irq) {
   VAR_10 = FUNC_2(FUNC_3(
       FUNC_3(VAR_2)),
       VAR_2, VAR_4, &VAR_7, &VAR_8);
   if (VAR_10 != 0)
    return (VAR_10);
   FUNC_0(VAR_5);
   (VAR_6->disable_intr)(VAR_5);
   FUNC_5(VAR_5, VAR_6->msi_data_reg, VAR_8);
   FUNC_5(VAR_5, VAR_6->msi_addr_reg, VAR_7);
   FUNC_5(VAR_5, VAR_6->msi_uaddr_reg, VAR_7 >> 32);
   (VAR_6->enable_intr)(VAR_5);
   FUNC_1(VAR_5);
   return (0);
  }
 }
 return (VAR_1);
}
