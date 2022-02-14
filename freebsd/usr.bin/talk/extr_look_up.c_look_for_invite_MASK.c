
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int id_num; } ;
struct TYPE_6__ {int answer; int id_num; } ;
typedef TYPE_1__ CTL_RESPONSE ;


 int VAR_0 ;

 int FUNC_0 (int ,TYPE_2__,int ,TYPE_1__*) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_3 ;

int
FUNC_2(CTL_RESPONSE *VAR_4)
{
 VAR_1 = "Checking for invitation on caller's machine";
 FUNC_0(VAR_2, VAR_3, VAR_0, VAR_4);

 switch (VAR_4->answer) {

 case 128:
  VAR_3.id_num = FUNC_1(VAR_4->id_num);
  return (1);

 default:

  return (0);
 }
}
