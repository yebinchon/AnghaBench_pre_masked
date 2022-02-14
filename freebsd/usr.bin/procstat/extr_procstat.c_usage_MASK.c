
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cmd; int cmp; int * usage; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void)
{
 size_t VAR_3, VAR_4;
 int VAR_5;

 FUNC_2("usage: procstat [--libxo] [-h] [-M core] [-N system]"
     " [-w interval] command\n"
     "                [pid ... | core ...]\n"
     "       procstat [--libxo] -a [-h] [-M core] [-N system] "
     " [-w interval] command\n"
     "       procstat [--libxo] [-h] [-M core] [-N system]"
     " [-w interval]\n"
     "                [-S | -b | -c | -e | -f [-C] | -i [-n] | "
     "-j [-n] | -k [-k] |\n"
     "                 -l | -r [-H] | -s | -t | -v | -x] "
     "[pid ... | core ...]\n"
     "       procstat [--libxo] -a [-h] [-M core] [-N system]"
     " [-w interval]\n"
     "                [-S | -b | -c | -e | -f [-C] | -i [-n] | "
     "-j [-n] | -k [-k] |\n"
     "                 -l | -r [-H] | -s | -t | -v | -x]\n"
     "       procstat [--libxo] -L [-h] [-M core] [-N system] core ...\n"
     "Available commands:\n");
 for (VAR_3 = 0, VAR_4 = FUNC_1(VAR_2); VAR_3 < VAR_4; VAR_3++) {
  VAR_5 = VAR_3 + 1 < VAR_4 && VAR_2[VAR_3].cmd == VAR_2[VAR_3 + 1].cmd;
  FUNC_2("       %s%s%s", VAR_5 ? "[" : "",
      VAR_2[VAR_3].command, (VAR_2[VAR_3].cmp & VAR_1) ?
      "(s)" : "");
  for (; VAR_3 + 1 < VAR_4 && VAR_2[VAR_3].cmd == VAR_2[VAR_3 + 1].cmd;
      VAR_3++)
   FUNC_2(" | %s%s", VAR_2[VAR_3 + 1].command,
       (VAR_2[VAR_3].cmp & VAR_1) ? "(s)" : "");
  if (VAR_5)
   FUNC_2("]");
  if (VAR_2[VAR_3].usage != ((void*)0))
   FUNC_2(" %s", VAR_2[VAR_3].usage);
  FUNC_2("\n");
 }
 FUNC_3();
 FUNC_0(VAR_0);
}
