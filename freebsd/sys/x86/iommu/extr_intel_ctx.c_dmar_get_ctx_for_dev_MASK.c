
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct dmar_unit {int dummy; } ;
struct dmar_ctx {int dummy; } ;
typedef int device_t ;
typedef int ACPI_DMAR_PCI_PATH ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,int *,int) ;
 struct dmar_ctx* FUNC_2 (struct dmar_unit*,int ,int ,int,int,int *,int,int,int) ;
 int FUNC_3 (int ) ;

struct dmar_ctx *
FUNC_4(struct dmar_unit *VAR_0, device_t VAR_1, uint16_t VAR_2,
    bool VAR_3, bool VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 VAR_5 = FUNC_3(VAR_1);
 VAR_6 = FUNC_0(VAR_1);
 ACPI_DMAR_PCI_PATH VAR_8[VAR_6];
 FUNC_1(VAR_1, &VAR_7, VAR_8, VAR_6);
 return (FUNC_2(VAR_0, VAR_1, VAR_2, VAR_5, VAR_7,
     VAR_8, VAR_6, VAR_3, VAR_4));
}
