
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statinfo {TYPE_1__* dinfo; } ;
struct TYPE_2__ {int generation; int numdevs; } ;


 int FUNC_0 (char*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct statinfo*) ;
 int FUNC_2 (int,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_3(struct statinfo* VAR_3)
{
 switch (FUNC_1(((void*)0), VAR_3)) {
 case -1:
  FUNC_2(1, "%s", VAR_0);
  break;
 case 1:
  VAR_2 = VAR_3->dinfo->numdevs;
  VAR_1 = VAR_3->dinfo->generation;
  FUNC_0("refresh", ((void*)0));
  break;
 default:
  break;
 }
}
