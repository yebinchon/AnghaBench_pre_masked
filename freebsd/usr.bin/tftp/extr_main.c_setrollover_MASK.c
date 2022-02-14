
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* o_request; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 void* FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(int VAR_2, char *VAR_3[])
{

 if (VAR_2 == 2) {
  if (FUNC_2(VAR_3[1], "never") == 0 ||
      FUNC_2(VAR_3[1], "none") == 0) {
   FUNC_0(VAR_1[VAR_0].o_request);
   VAR_1[VAR_0].o_request = ((void*)0);
  }
  if (FUNC_2(VAR_3[1], "1") == 0) {
   FUNC_0(VAR_1[VAR_0].o_request);
   VAR_1[VAR_0].o_request = FUNC_3("1");
  }
  if (FUNC_2(VAR_3[1], "0") == 0) {
   FUNC_0(VAR_1[VAR_0].o_request);
   VAR_1[VAR_0].o_request = FUNC_3("0");
  }
 }
 FUNC_1("Support for the rollover options is %s.\n",
     VAR_1[VAR_0].o_request != ((void*)0) ? "enabled" : "disabled");
 if (VAR_1[VAR_0].o_request != ((void*)0))
  FUNC_1("Block rollover will be to block %s.\n",
      VAR_1[VAR_0].o_request);


 FUNC_1("\nThe following rollover options are available:\n"
     "\trollover 0	: rollover to block zero (default)\n"
     "\trollover 1	: rollover to block one\n"
     "\trollover never	: do not support the rollover option\n"
     "\trollover none	: do not support the rollover option\n"
 );
}
