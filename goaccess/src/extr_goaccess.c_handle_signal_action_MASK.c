
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stop_processing; int output_stdout; } ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4 (int VAR_5)
{
  switch (VAR_5) {
  case 128:
  case 130:
    FUNC_2 (VAR_4, "\nSIGINT caught!\n");
    FUNC_2 (VAR_4, "Closing GoAccess...\n");

    FUNC_3 (VAR_3, VAR_2);
    VAR_1.stop_processing = 1;

    if (!VAR_1.output_stdout) {
      FUNC_0(VAR_0);
      FUNC_1(VAR_0);
    }

    break;
  case 129:
    FUNC_2 (VAR_4, "SIGPIPE caught!\n");

    break;
  }
}
