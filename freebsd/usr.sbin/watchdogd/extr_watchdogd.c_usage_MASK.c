
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{
 if (VAR_1)
  FUNC_1(VAR_2, "usage:\n"
"  watchdogd [-dnSw] [-e cmd] [-I pidfile] [-s sleep] [-t timeout]\n"
"            [-T script_timeout] [-x exit_timeout]\n"
"            [--debug]\n"
"            [--pretimeout seconds] [-pretimeout-action action]\n"
"            [--softtimeout] [-softtimeout-action action]\n"
);
 else
  FUNC_1(VAR_2, "usage: watchdog [-d] [-t timeout]\n");
 FUNC_0(VAR_0);
}
