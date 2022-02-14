
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct apei_exec_context {int var2; scalar_t__ dst_base; scalar_t__ src_base; } ;
struct acpi_whea_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_whea_header*,scalar_t__*) ;
 scalar_t__ FUNC_1 () ;
 void* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,void*,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct apei_exec_context *VAR_2,
          struct acpi_whea_header *VAR_3)
{
 int VAR_4;
 u64 VAR_5;
 void *VAR_6, *VAR_7;


 if (FUNC_1()) {
  FUNC_5("MOVE_DATA can not be used in interrupt context.\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_6 = FUNC_2(VAR_2->src_base + VAR_5, VAR_2->var2);
 if (!VAR_6)
  return -VAR_1;
 VAR_7 = FUNC_2(VAR_2->dst_base + VAR_5, VAR_2->var2);
 if (!VAR_7) {
  FUNC_3(VAR_6);
  return -VAR_1;
 }

 FUNC_4(VAR_7, VAR_6, VAR_2->var2);

 FUNC_3(VAR_6);
 FUNC_3(VAR_7);

 return 0;
}
