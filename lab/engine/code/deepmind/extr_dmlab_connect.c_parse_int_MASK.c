
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* set_error_message ) (int ,int ) ;} ;
struct TYPE_5__ {int userdata; TYPE_1__ hooks; } ;
typedef TYPE_2__ DeepmindContext ;


 scalar_t__ VAR_0 ;
 long FUNC_0 (char const*,char**,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(const char* VAR_1, long int* VAR_2, DeepmindContext* VAR_3) {
  VAR_0 = 0;
  char* VAR_4;
  long int VAR_5 = FUNC_0(VAR_1, &VAR_4, 0);
  if (VAR_4 != VAR_1 && *VAR_4 == '\0' && VAR_0 == 0) {
    *VAR_2 = VAR_5;
    return 0;
  } else {
    VAR_3->hooks.set_error_message(VAR_3->userdata,
                                 FUNC_2("Invalid int setting %s\n", VAR_1));
    return -1;
  }
}
