
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; char* param; char* desc; } ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 char* FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_3, const char *VAR_4)
{
 int VAR_5;

 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_3, "Usage: %s [-u /dev/ses<N>] <command> [options]\n",
      FUNC_2());
  FUNC_1(VAR_3, "Commands supported:\n");
 }
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_4 != ((void*)0)) {
   if (FUNC_3(VAR_4, VAR_1[VAR_5].name) == 0) {
    FUNC_1(VAR_3, "Usage: %s %s [-u /dev/ses<N>] "
        "%s\n\t%s\n", FUNC_2(), VAR_4,
        VAR_1[VAR_5].param, VAR_1[VAR_5].desc);
    break;
   }
   continue;
  }
  FUNC_1(VAR_3, "    %-12s%s\n\t\t%s\n\n", VAR_1[VAR_5].name,
      VAR_1[VAR_5].param, VAR_1[VAR_5].desc);
 }

 FUNC_0(VAR_0);
}
