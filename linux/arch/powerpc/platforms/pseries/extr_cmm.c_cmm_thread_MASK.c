
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(void *VAR_6)
{
 unsigned long VAR_7;

 while (1) {
  VAR_7 = FUNC_5(VAR_0 * 1000);

  if (FUNC_4() || VAR_7)
   break;

  if (FUNC_6(&VAR_2)) {
   if (VAR_3) {
    VAR_3 = 0;
    FUNC_7(&VAR_2);
    FUNC_1("Hotplug operation has occurred, "
      "loaning activity suspended "
      "for %d seconds.\n",
      VAR_1);
    VAR_7 = FUNC_5(VAR_1 *
      1000);
    if (FUNC_4() || VAR_7)
     break;
    continue;
   }
   FUNC_7(&VAR_2);
  } else {
   FUNC_1("Hotplug operation in progress, activity "
     "suspended\n");
   continue;
  }

  FUNC_3();

  if (VAR_5 > VAR_4) {
   if (FUNC_0(VAR_5 - VAR_4))
    VAR_5 = VAR_4;
  } else if (VAR_5 < VAR_4)
   FUNC_2(VAR_4 - VAR_5);
 }
 return 0;
}
