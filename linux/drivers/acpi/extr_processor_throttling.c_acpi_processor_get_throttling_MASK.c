
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int throttling; } ;
struct acpi_processor {int id; TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct acpi_processor*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct acpi_processor *VAR_3)
{
 if (!VAR_3)
  return -VAR_0;

 if (!VAR_3->flags.throttling)
  return -VAR_1;







 if (!FUNC_1(VAR_3->id))
  return -VAR_1;

 return FUNC_0(VAR_3->id, VAR_2, VAR_3, 0);
}
