
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct dmar_unit {struct dmar_msi_data* intrs; } ;
struct dmar_msi_data {int irq; int irq_rid; int * irq_res; int intr_handle; int msi_uaddr_reg; int msi_addr_reg; int msi_data_reg; int name; int handler; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int,int*,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int *,int ,char*,int ) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int ,int ,int ,int,int) ;
 int FUNC_8 (int ,int *,int ,int ,int *,struct dmar_unit*,int *) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int ,...) ;
 int FUNC_12 (struct dmar_unit*,int ,int) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_4, struct dmar_unit *VAR_5, int VAR_6)
{
 device_t VAR_7;
 struct dmar_msi_data *VAR_8;
 uint64_t VAR_9;
 uint32_t VAR_10;
 int VAR_11;

 VAR_8 = &VAR_5->intrs[VAR_6];
 VAR_7 = FUNC_10(FUNC_10(VAR_4));
 VAR_11 = FUNC_0(VAR_7, VAR_4, &VAR_8->irq);
 if (VAR_11 != 0) {
  FUNC_11(VAR_4, "cannot allocate %s interrupt, %d\n",
      VAR_8->name, VAR_11);
  goto err1;
 }
 VAR_11 = FUNC_7(VAR_4, VAR_3, VAR_8->irq_rid,
     VAR_8->irq, 1);
 if (VAR_11 != 0) {
  FUNC_11(VAR_4, "cannot set %s interrupt resource, %d\n",
      VAR_8->name, VAR_11);
  goto err2;
 }
 VAR_8->irq_res = FUNC_3(VAR_4, VAR_3,
     &VAR_8->irq_rid, VAR_2);
 if (VAR_8->irq_res == ((void*)0)) {
  FUNC_11(VAR_4,
      "cannot allocate resource for %s interrupt\n", VAR_8->name);
  VAR_11 = VAR_0;
  goto err3;
 }
 VAR_11 = FUNC_8(VAR_4, VAR_8->irq_res, VAR_1,
     VAR_8->handler, ((void*)0), VAR_5, &VAR_8->intr_handle);
 if (VAR_11 != 0) {
  FUNC_11(VAR_4, "cannot setup %s interrupt, %d\n",
      VAR_8->name, VAR_11);
  goto err4;
 }
 FUNC_5(VAR_4, VAR_8->irq_res, VAR_8->intr_handle, "%s", VAR_8->name);
 VAR_11 = FUNC_1(VAR_7, VAR_4, VAR_8->irq, &VAR_9, &VAR_10);
 if (VAR_11 != 0) {
  FUNC_11(VAR_4, "cannot map %s interrupt, %d\n",
      VAR_8->name, VAR_11);
  goto err5;
 }
 FUNC_12(VAR_5, VAR_8->msi_data_reg, VAR_10);
 FUNC_12(VAR_5, VAR_8->msi_addr_reg, VAR_9);

 FUNC_12(VAR_5, VAR_8->msi_uaddr_reg, VAR_9 >> 32);
 return (0);

err5:
 FUNC_9(VAR_4, VAR_8->irq_res, VAR_8->intr_handle);
err4:
 FUNC_6(VAR_4, VAR_3, VAR_8->irq_rid, VAR_8->irq_res);
err3:
 FUNC_4(VAR_4, VAR_3, VAR_8->irq_rid);
err2:
 FUNC_2(VAR_7, VAR_4, VAR_8->irq);
 VAR_8->irq = -1;
err1:
 return (VAR_11);
}
