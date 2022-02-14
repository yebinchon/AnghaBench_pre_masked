
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* mon_grouping; } ;


 int FUNC_0 (char**,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

void
FUNC_3(int VAR_2)
{
 char *VAR_3 = ((void*)0);

 if (VAR_0.mon_grouping == ((void*)0)) {
  (void) FUNC_0(&VAR_3, "%d", VAR_2);
 } else {
  (void) FUNC_0(&VAR_3, "%s;%d", VAR_0.mon_grouping, VAR_2);
 }
 if (VAR_3 == ((void*)0))
  FUNC_1(VAR_1, "out of memory");

 FUNC_2((char *)VAR_0.mon_grouping);
 VAR_0.mon_grouping = VAR_3;
}
