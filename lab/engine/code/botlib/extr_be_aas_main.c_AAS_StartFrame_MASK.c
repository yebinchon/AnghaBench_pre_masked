
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {float time; int numframes; scalar_t__ frameroutingupdates; } ;
struct TYPE_3__ {scalar_t__ value; } ;


 int FUNC_0 (float) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_2__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

int FUNC_9(float VAR_4)
{
 VAR_1.time = VAR_4;

 FUNC_3();

 FUNC_1();

 FUNC_0(VAR_4);

 VAR_1.frameroutingupdates = 0;

 if (VAR_2)
 {
  if (FUNC_5("showcacheupdates"))
  {
   FUNC_2();
   FUNC_6("showcacheupdates", "0");
  }
  if (FUNC_5("showmemoryusage"))
  {
   FUNC_8();
   FUNC_6("showmemoryusage", "0");
  }
  if (FUNC_5("memorydump"))
  {
   FUNC_7();
   FUNC_6("memorydump", "0");
  }
 }

 if (VAR_3->value)
 {
  FUNC_4();
  FUNC_6("saveroutingcache", "0");
 }

 VAR_1.numframes++;
 return VAR_0;
}
