
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_command {int* cmd; int buflen; } ;
struct gdromtoc {int dummy; } ;
struct TYPE_2__ {int pending; int status; int cd_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 (int ,struct packet_command*) ;
 int FUNC_1 (int ,struct gdromtoc*,int) ;
 int FUNC_2 (struct packet_command*) ;
 struct packet_command* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct gdromtoc *VAR_8, int VAR_9)
{
 int VAR_10;
 struct packet_command *VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_3(sizeof(struct packet_command), VAR_5);
 if (!VAR_11)
  return -VAR_2;
 VAR_10 = sizeof(struct gdromtoc);
 VAR_11->cmd[0] = 0x14;
 VAR_11->cmd[1] = VAR_9;
 VAR_11->cmd[3] = VAR_10 >> 8;
 VAR_11->cmd[4] = VAR_10 & 0xff;
 VAR_11->buflen = VAR_10;
 if (VAR_7.pending) {
  VAR_12 = -VAR_0;
  goto cleanup_readtoc_final;
 }
 VAR_7.pending = 1;
 FUNC_0(VAR_7.cd_info, VAR_11);
 FUNC_4(VAR_6, VAR_7.pending == 0,
  VAR_4);
 if (VAR_7.pending) {
  VAR_12 = -VAR_1;
  goto cleanup_readtoc;
 }
 FUNC_1(VAR_3, VAR_8, VAR_10/2);
 if (VAR_7.status & 0x01)
  VAR_12 = -VAR_1;

cleanup_readtoc:
 VAR_7.pending = 0;
cleanup_readtoc_final:
 FUNC_2(VAR_11);
 return VAR_12;
}
