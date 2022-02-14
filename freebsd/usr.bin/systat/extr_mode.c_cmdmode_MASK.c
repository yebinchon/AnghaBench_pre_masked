
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* c_reset ) () ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 char const** VAR_7 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 () ;

int
FUNC_5(const char *VAR_8, const char *VAR_9)
{
 if (FUNC_2(VAR_8, "mode")) {
  if (VAR_9[0] == '\0') {
   FUNC_1(VAR_0, 0);
   FUNC_0();
   FUNC_3("%s", VAR_7[VAR_2]);
  } else if (FUNC_2(VAR_9, "rate")) {
   VAR_2 = VAR_5;
  } else if (FUNC_2(VAR_9, "delta")) {
   VAR_2 = VAR_4;
  } else if (FUNC_2(VAR_9, "since")) {
   VAR_2 = VAR_6;
  } else if (FUNC_2(VAR_9, "absolute")) {
   VAR_2 = VAR_3;
  } else {
   FUNC_3("unknown mode `%s'", VAR_9);
  }
  return 1;
 }
 if(FUNC_2(VAR_8, "reset")) {
  VAR_1->c_reset();
  return 1;
 }
 return 0;
}
