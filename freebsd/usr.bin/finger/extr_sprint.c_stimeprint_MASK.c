
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tm {int tm_yday; int tm_hour; int tm_min; } ;
struct TYPE_3__ {int idletime; } ;
typedef TYPE_1__ WHERE ;


 struct tm* FUNC_0 (int*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(WHERE *VAR_0)
{
 struct tm *VAR_1;

 if (VAR_0->idletime == -1) {
  (void)FUNC_1("     ");
  return;
 }

 VAR_1 = FUNC_0(&VAR_0->idletime);
 if (!VAR_1->tm_yday)
  if (!VAR_1->tm_hour)
   if (!VAR_1->tm_min)
    (void)FUNC_1("     ");
   else
    (void)FUNC_1("%5d", VAR_1->tm_min);
  else
   (void)FUNC_1("%2d:%02d",
       VAR_1->tm_hour, VAR_1->tm_min);
 else
  (void)FUNC_1("%4dd", VAR_1->tm_yday);
}
