
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_smb_hc {int context; int (* callback ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(void *VAR_0)
{
 struct acpi_smb_hc *VAR_1 = VAR_0;
 if (VAR_1->callback)
  VAR_1->callback(VAR_1->context);
}
