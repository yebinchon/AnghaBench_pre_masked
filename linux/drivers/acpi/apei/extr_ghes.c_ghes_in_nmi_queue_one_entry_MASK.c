
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ghes_estatus_node {int llnode; int generic; struct ghes* ghes; } ;
struct ghes {int generic; } ;
struct acpi_hest_generic_status {int error_severity; } ;
typedef enum fixed_addresses { ____Placeholder_fixed_addresses } fixed_addresses ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct acpi_hest_generic_status* FUNC_0 (struct ghes_estatus_node*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ghes*,struct acpi_hest_generic_status*) ;
 int FUNC_4 (struct ghes*,struct acpi_hest_generic_status*,int ,int) ;
 int FUNC_5 (struct ghes*,struct acpi_hest_generic_status*,int *,int) ;
 scalar_t__ FUNC_6 (struct acpi_hest_generic_status*,int ,int,int ) ;
 int FUNC_7 (struct acpi_hest_generic_status*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,unsigned long,int ) ;
 int FUNC_10 (struct ghes*,struct acpi_hest_generic_status*,int ,int) ;
 scalar_t__ FUNC_11 (struct acpi_hest_generic_status*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int *) ;

__attribute__((used)) static int FUNC_15(struct ghes *VAR_7,
           enum fixed_addresses VAR_8)
{
 struct acpi_hest_generic_status *VAR_9, VAR_10;
 struct ghes_estatus_node *VAR_11;
 u32 VAR_12, VAR_13;
 u64 VAR_14;
 int VAR_15, VAR_16;

 if (!FUNC_2(VAR_0))
  return -VAR_3;

 VAR_16 = FUNC_5(VAR_7, &VAR_10, &VAR_14, VAR_8);
 if (VAR_16) {
  FUNC_10(VAR_7, &VAR_10, VAR_14, VAR_8);
  return VAR_16;
 }

 VAR_16 = FUNC_3(VAR_7, &VAR_10);
 if (VAR_16) {
  FUNC_10(VAR_7, &VAR_10, VAR_14, VAR_8);
  return VAR_16;
 }

 VAR_12 = FUNC_7(&VAR_10);
 VAR_13 = FUNC_1(VAR_12);
 VAR_11 = (void *)FUNC_8(VAR_6, VAR_13);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->ghes = VAR_7;
 VAR_11->generic = VAR_7->generic;
 VAR_9 = FUNC_0(VAR_11);

 if (FUNC_6(VAR_9, VAR_14, VAR_8, VAR_12)) {
  FUNC_10(VAR_7, VAR_9, VAR_14, VAR_8);
  VAR_16 = -VAR_1;
  goto no_work;
 }

 VAR_15 = FUNC_13(VAR_9->error_severity);
 if (VAR_15 >= VAR_4) {
  FUNC_12();
  FUNC_4(VAR_7, VAR_9, VAR_14, VAR_8);
 }

 FUNC_10(VAR_7, &VAR_10, VAR_14, VAR_8);


 if (FUNC_11(VAR_9))
  goto no_work;

 FUNC_14(&VAR_11->llnode, &VAR_5);

 return VAR_16;

no_work:
 FUNC_9(VAR_6, (unsigned long)VAR_11,
        VAR_13);

 return VAR_16;
}
