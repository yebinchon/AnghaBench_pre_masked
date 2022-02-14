
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_smb_hc {int done; int wait; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct acpi_smb_hc *VAR_1, int VAR_2)
{
 if (FUNC_1(VAR_1->wait, VAR_1->done, FUNC_0(VAR_2)))
  return 0;
 return -VAR_0;
}
