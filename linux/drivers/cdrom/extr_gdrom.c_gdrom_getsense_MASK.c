
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct packet_command {int* cmd; int buflen; } ;
struct TYPE_5__ {int pending; int cd_info; } ;
struct TYPE_4__ {int text; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_1 (int ,struct packet_command*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,short**,int) ;
 int FUNC_4 (struct packet_command*) ;
 struct packet_command* FUNC_5 (int,int ) ;
 int FUNC_6 (short*,short*,int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,...) ;
 TYPE_1__* VAR_8 ;
 int FUNC_9 (int ,int,int ) ;

__attribute__((used)) static int FUNC_10(short *VAR_9)
{
 struct packet_command *VAR_10;
 short VAR_11[5];
 int VAR_12;
 int VAR_13 = -VAR_1;

 VAR_10 = FUNC_5(sizeof(struct packet_command), VAR_5);
 if (!VAR_10)
  return -VAR_2;
 VAR_10->cmd[0] = 0x13;
 VAR_10->cmd[4] = 10;
 VAR_10->buflen = 10;


 if (VAR_7.pending && !FUNC_2()) {
  VAR_13 = -VAR_0;
  goto cleanup_sense_final;
 }
 VAR_7.pending = 1;
 FUNC_1(VAR_7.cd_info, VAR_10);
 FUNC_9(VAR_6, VAR_7.pending == 0,
  VAR_4);
 if (VAR_7.pending)
  goto cleanup_sense;
 FUNC_3(VAR_3, &VAR_11, VAR_10->buflen/2);
 if (VAR_11[1] & 40) {
  FUNC_8("Drive not ready - command aborted\n");
  goto cleanup_sense;
 }
 VAR_12 = VAR_11[1] & 0x0F;
 if (VAR_12 < FUNC_0(VAR_8))
  FUNC_8("%s\n", VAR_8[VAR_12].text);
 else
  FUNC_7("Unknown sense key: %d\n", VAR_12);
 if (VAR_9)
  FUNC_6(VAR_9, &VAR_11[4], 2);
 if (VAR_12 < 2)
  VAR_13 = 0;

cleanup_sense:
 VAR_7.pending = 0;
cleanup_sense_final:
 FUNC_4(VAR_10);
 return VAR_13;
}
