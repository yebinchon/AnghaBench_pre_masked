
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int bio; } ;
typedef int ide_drive_t ;
struct TYPE_4__ {struct request* special; } ;
struct TYPE_3__ {int sense_len; int sense; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int *,struct request*) ;
 scalar_t__ FUNC_4 (int *,struct request*,int ,int ) ;
 TYPE_2__* FUNC_5 (struct request*) ;
 int FUNC_6 (int ,void*,int) ;
 TYPE_1__* FUNC_7 (struct request*) ;

__attribute__((used)) static void FUNC_8(ide_drive_t *VAR_1, struct request *VAR_2)
{






 struct request *VAR_3 = FUNC_5(VAR_2)->special;
 void *VAR_4 = FUNC_1(VAR_2->bio);

 if (VAR_3) {




  FUNC_6(FUNC_7(VAR_3)->sense, VAR_4, 18);
  FUNC_7(VAR_3)->sense_len = FUNC_7(VAR_2)->sense_len;
  FUNC_3(VAR_1, VAR_3);

  if (FUNC_4(VAR_1, VAR_3, VAR_0, FUNC_2(VAR_3)))
   FUNC_0();
 } else
  FUNC_3(VAR_1, ((void*)0));
}
