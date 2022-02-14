
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_buffer {int pointer; } ;
struct acpi_battery {int full_charge_capacity; int design_capacity; int design_voltage; int design_capacity_warning; int capacity_now; int flags; scalar_t__ power_unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct acpi_battery*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(const int VAR_7,
    struct acpi_battery *VAR_8,
    const struct acpi_buffer *VAR_9)
{
 int VAR_10 = -VAR_3;

 if (VAR_7 && VAR_4)
  VAR_10 = FUNC_1(VAR_8, VAR_9->pointer,
    VAR_5 + 1,
    FUNC_0(VAR_5) - 1);
 else if (VAR_7)
  VAR_10 = FUNC_1(VAR_8, VAR_9->pointer,
    VAR_5,
    FUNC_0(VAR_5));
 else
  VAR_10 = FUNC_1(VAR_8, VAR_9->pointer,
    VAR_6, FUNC_0(VAR_6));
 if (FUNC_2(VAR_1, &VAR_8->flags))
  VAR_8->full_charge_capacity = VAR_8->design_capacity;
 if (FUNC_2(VAR_2, &VAR_8->flags) &&
     VAR_8->power_unit && VAR_8->design_voltage) {
  VAR_8->design_capacity = VAR_8->design_capacity *
      10000 / VAR_8->design_voltage;
  VAR_8->full_charge_capacity = VAR_8->full_charge_capacity *
      10000 / VAR_8->design_voltage;
  VAR_8->design_capacity_warning =
      VAR_8->design_capacity_warning *
      10000 / VAR_8->design_voltage;





 }
 if (FUNC_2(VAR_0, &VAR_8->flags) &&
     VAR_8->capacity_now > VAR_8->full_charge_capacity)
  VAR_8->capacity_now = VAR_8->full_charge_capacity;

 return VAR_10;
}
