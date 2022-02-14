
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct request {int dummy; } ;
typedef int ide_startstop_t ;
typedef int ide_drive_t ;
struct TYPE_2__ {int* cmd; } ;


 int FUNC_0 () ;




 int FUNC_1 (int *,struct request*) ;
 int FUNC_2 (int *,struct request*) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct request*) ;

__attribute__((used)) static ide_startstop_t FUNC_5(ide_drive_t *VAR_0, struct request *VAR_1)
{
 u8 VAR_2 = FUNC_4(VAR_1)->cmd[0];

 switch (VAR_2) {
 case 129:
 case 128:
  return FUNC_2(VAR_0, VAR_1);
 case 131:
  return FUNC_1(VAR_0, VAR_1);
 case 130:
  return FUNC_3(VAR_0);
 default:
  FUNC_0();
 }
}
