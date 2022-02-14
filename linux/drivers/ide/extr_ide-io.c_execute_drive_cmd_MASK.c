
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct request {int dummy; } ;
struct ide_cmd {scalar_t__ protocol; } ;
typedef int ide_startstop_t ;
struct TYPE_8__ {int name; } ;
typedef TYPE_1__ ide_drive_t ;
struct TYPE_10__ {struct ide_cmd* special; } ;
struct TYPE_9__ {scalar_t__ result; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (TYPE_1__*,struct ide_cmd*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (struct ide_cmd*,int) ;
 int FUNC_5 (TYPE_1__*,struct ide_cmd*) ;
 TYPE_3__* FUNC_6 (struct request*) ;
 int VAR_2 ;
 int FUNC_7 (char*,int ) ;
 TYPE_2__* FUNC_8 (struct request*) ;

__attribute__((used)) static ide_startstop_t FUNC_9 (ide_drive_t *VAR_3,
  struct request *VAR_4)
{
 struct ide_cmd *VAR_5 = FUNC_6(VAR_4)->special;

 if (VAR_5) {
  if (VAR_5->protocol == VAR_0) {
   FUNC_4(VAR_5, FUNC_1(VAR_4) << 9);
   FUNC_5(VAR_3, VAR_5);
  }

  return FUNC_2(VAR_3, VAR_5);
 }
 FUNC_8(VAR_4)->result = 0;
 FUNC_3(VAR_3, VAR_1, FUNC_0(VAR_4));

  return VAR_2;
}
