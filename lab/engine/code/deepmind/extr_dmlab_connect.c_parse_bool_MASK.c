
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* set_error_message ) (int ,int ) ;} ;
struct TYPE_5__ {int userdata; TYPE_1__ hooks; } ;
typedef TYPE_2__ DeepmindContext ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(const char* VAR_0, bool* VAR_1, DeepmindContext* VAR_2) {
  if (FUNC_0(VAR_0, "true") == 0) {
    *VAR_1 = 1;
    return 0;
  } else if (FUNC_0(VAR_0, "false") == 0) {
    *VAR_1 = 0;
    return 0;
  } else {
    VAR_2->hooks.set_error_message(VAR_2->userdata,
                                 FUNC_2("Invalid boolean arg must be either "
                                    "\"true\" or \"false\"; actual \"%s\"\n",
                                    VAR_0));
    return -1;
  }
}
