
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_3__ {int queue; } ;
typedef TYPE_1__ ide_drive_t ;


 int FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (struct request*) ;
 int FUNC_2 (int ,struct request*) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(ide_drive_t *VAR_0, struct request *VAR_1)
{
 if (!FUNC_0(VAR_1)) {
  FUNC_5(FUNC_4(VAR_1));

  return FUNC_2(VAR_0->queue, VAR_1);
 } else if (FUNC_1(VAR_1))
  return FUNC_3(VAR_1);

 return 1;
}
