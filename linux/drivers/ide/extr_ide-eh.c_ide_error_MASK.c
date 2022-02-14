
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct request {int dummy; } ;
struct ide_cmd {int dummy; } ;
typedef int ide_startstop_t ;
struct TYPE_12__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_14__ {struct ide_cmd* special; } ;
struct TYPE_13__ {int result; } ;
struct TYPE_11__ {struct request* rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,struct request*,int,int) ;
 scalar_t__ FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request*) ;
 int FUNC_5 (TYPE_2__*,struct ide_cmd*,int,int) ;
 int FUNC_6 (TYPE_2__*,struct request*) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 int FUNC_8 (TYPE_2__*,char const*,int) ;
 TYPE_4__* FUNC_9 (struct request*) ;
 int VAR_2 ;
 TYPE_3__* FUNC_10 (struct request*) ;

ide_startstop_t FUNC_11(ide_drive_t *VAR_3, const char *VAR_4, u8 VAR_5)
{
 struct request *VAR_6;
 u8 VAR_7;

 VAR_7 = FUNC_8(VAR_3, VAR_4, VAR_5);

 VAR_6 = VAR_3->hwif->rq;
 if (VAR_6 == ((void*)0))
  return VAR_2;


 if (FUNC_4(VAR_6)) {
  if (FUNC_2(VAR_6)) {
   struct ide_cmd *VAR_8 = FUNC_9(VAR_6)->special;

   if (VAR_8)
    FUNC_5(VAR_3, VAR_8, VAR_5, VAR_7);
  } else if (FUNC_1(VAR_6)) {
   FUNC_10(VAR_6)->result = 1;
   FUNC_6(VAR_3, VAR_6);
   return VAR_2;
  }
  FUNC_10(VAR_6)->result = VAR_7;
  FUNC_7(VAR_3, VAR_7 ? VAR_0 : VAR_1, FUNC_3(VAR_6));
  return VAR_2;
 }

 return FUNC_0(VAR_3, VAR_6, VAR_5, VAR_7);
}
