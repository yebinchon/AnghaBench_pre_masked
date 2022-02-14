
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gpio_handle_t ;
struct TYPE_4__ {int g_pin; char* g_name; int g_caps; int g_flags; } ;
typedef TYPE_1__ gpio_config_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,TYPE_1__**) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(gpio_handle_t VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 gpio_config_t *VAR_5;
 gpio_config_t *VAR_6;

 VAR_3 = FUNC_3(VAR_0, &VAR_5);
 if (VAR_3 < 0) {
  FUNC_4("gpio_pin_list");
  FUNC_0(1);
 }

 for (VAR_2 = 0; VAR_2 <= VAR_3; VAR_2++) {
  VAR_6 = VAR_5 + VAR_2;
  VAR_4 = FUNC_2(VAR_0, VAR_6->g_pin);
  FUNC_6("pin %02d:\t%d\t%s", VAR_6->g_pin, VAR_4,
      VAR_6->g_name);

  FUNC_5(VAR_6->g_flags);

  if (VAR_1) {
   FUNC_6(", caps:");
   FUNC_5(VAR_6->g_caps);
  }
  FUNC_6("\n");
 }
 FUNC_1(VAR_5);
}
