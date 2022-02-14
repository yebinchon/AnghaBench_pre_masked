
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct request {int timeout; int * cmd; } ;
struct ide_cmd {struct request* rq; int tf_flags; } ;
typedef scalar_t__ sector_t ;
typedef int ide_startstop_t ;
struct TYPE_10__ {int debug_mask; } ;
typedef TYPE_1__ ide_drive_t ;
typedef int cmd ;
struct TYPE_11__ {int type; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_1 (struct request*,char*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 unsigned int FUNC_4 (struct request*) ;
 int FUNC_5 (TYPE_1__*,struct request*) ;
 int FUNC_6 (TYPE_1__*,struct request*) ;
 int FUNC_7 (TYPE_1__*,int ,unsigned int) ;
 int FUNC_8 (int,char*,int ,unsigned long long) ;
 int FUNC_9 (struct ide_cmd*,scalar_t__) ;
 int FUNC_10 (TYPE_1__*,struct ide_cmd*) ;
 int FUNC_11 (TYPE_1__*,struct ide_cmd*) ;
 int FUNC_12 (TYPE_1__*,struct request*) ;
 TYPE_2__* FUNC_13 (struct request*) ;
 int VAR_5 ;
 int FUNC_14 (struct ide_cmd*,int ,int) ;
 int FUNC_15 (struct request*) ;
 scalar_t__ FUNC_16 (struct request*) ;

__attribute__((used)) static ide_startstop_t FUNC_17(ide_drive_t *VAR_6, struct request *VAR_7,
     sector_t VAR_8)
{
 struct ide_cmd VAR_9;
 int VAR_10 = 0;
 unsigned int VAR_11;

 FUNC_8(VAR_3, "cmd: 0x%x, block: %llu",
      VAR_7->cmd[0], (unsigned long long)VAR_8);

 if (VAR_6->debug_mask & VAR_3)
  FUNC_1(VAR_7, "ide_cd_do_request");

 switch (FUNC_15(VAR_7)) {
 default:
  if (FUNC_6(VAR_6, VAR_7) == VAR_5)
   goto out_end;
  break;
 case 129:
 case 128:
 handle_pc:
  if (!VAR_7->timeout)
   VAR_7->timeout = VAR_0;
  FUNC_5(VAR_6, VAR_7);
  break;
 case 131:
 case 130:
  switch (FUNC_13(VAR_7)->type) {
  case 134:

   VAR_10 = 1;
   goto out_end;
  case 132:
  case 133:
   goto handle_pc;
  default:
   FUNC_0();
  }
 }


 FUNC_12(VAR_6, VAR_7);

 FUNC_14(&VAR_9, 0, sizeof(VAR_9));

 if (FUNC_16(VAR_7))
  VAR_9.tf_flags |= VAR_4;

 VAR_9.rq = VAR_7;

 if (!FUNC_3(VAR_7) || FUNC_2(VAR_7)) {
  FUNC_9(&VAR_9, FUNC_2(VAR_7));
  FUNC_11(VAR_6, &VAR_9);
 }

 return FUNC_10(VAR_6, &VAR_9);
out_end:
 VAR_11 = FUNC_4(VAR_7);

 if (VAR_11 == 0)
  VAR_11 = 1;

 FUNC_7(VAR_6, VAR_10 ? VAR_2 : VAR_1, VAR_11 << 9);

 return VAR_5;
}
