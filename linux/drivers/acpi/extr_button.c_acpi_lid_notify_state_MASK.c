
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;
struct acpi_button {int last_state; int last_time; int input; } ;
typedef int ktime_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct acpi_button* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_4 ;
 int FUNC_2 (int *,int,struct acpi_device*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct acpi_device *VAR_7, int VAR_8)
{
 struct acpi_button *VAR_9 = FUNC_0(VAR_7);
 int VAR_10;
 ktime_t VAR_11;
 bool VAR_12;
 if (VAR_5 != VAR_0 ||
     VAR_9->last_state != !!VAR_8)
  VAR_12 = 1;
 else
  VAR_12 = 0;

 VAR_11 = FUNC_5(VAR_9->last_time,
    FUNC_8(VAR_6));
 if (VAR_9->last_state == !!VAR_8 &&
     FUNC_6(FUNC_7(), VAR_11)) {

  FUNC_9("The lid device is not compliant to SW_LID.\n");
  if (VAR_5 == VAR_0) {
   VAR_12 = 1;
   if (!VAR_8) {
    FUNC_3(VAR_9->input,
          VAR_3, VAR_8);
    FUNC_4(VAR_9->input);
   }
  }
 }

 if (VAR_12) {
  FUNC_1(VAR_7->handle, "ACPI LID %s\n",
      VAR_8 ? "open" : "closed");
  FUNC_3(VAR_9->input, VAR_3, !VAR_8);
  FUNC_4(VAR_9->input);
  VAR_9->last_state = !!VAR_8;
  VAR_9->last_time = FUNC_7();
 }

 VAR_10 = FUNC_2(&VAR_4, VAR_8, VAR_7);
 if (VAR_10 == VAR_1)
  VAR_10 = FUNC_2(&VAR_4, VAR_8,
         VAR_7);
 if (VAR_10 == VAR_1 || VAR_10 == VAR_2) {




  VAR_10 = 0;
 }
 return VAR_10;
}
