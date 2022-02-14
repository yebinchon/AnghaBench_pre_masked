
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int addrbuf ;
struct TYPE_2__ {scalar_t__ type; int addr; } ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,struct sockaddr*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

void FUNC_2(void) {
 int VAR_5;
 char VAR_6[VAR_2];

 for(VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  FUNC_1(VAR_6, sizeof(VAR_6), (struct sockaddr *) &VAR_3[VAR_5].addr);

  if(VAR_3[VAR_5].type == VAR_0)
   FUNC_0( "IP: %s\n", VAR_6);
  else if(VAR_3[VAR_5].type == VAR_1)
   FUNC_0( "IP6: %s\n", VAR_6);
 }
}
