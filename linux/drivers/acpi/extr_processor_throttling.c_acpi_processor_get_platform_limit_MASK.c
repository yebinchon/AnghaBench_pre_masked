
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_processor {int throttling_platform_limit; int handle; } ;
typedef scalar_t__ acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,char*,int *,unsigned long long*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_3(struct acpi_processor *VAR_5)
{
 acpi_status VAR_6 = 0;
 unsigned long long VAR_7 = 0;

 if (!VAR_5)
  return -VAR_2;

 if (VAR_4)
  goto end;

 VAR_6 = FUNC_2(VAR_5->handle, "_TPC", ((void*)0), &VAR_7);
 if (FUNC_1(VAR_6)) {
  if (VAR_6 != VAR_1) {
   FUNC_0((VAR_0, VAR_6, "Evaluating _TPC"));
  }
  return -VAR_3;
 }

end:
 VAR_5->throttling_platform_limit = (int)VAR_7;
 return 0;
}
