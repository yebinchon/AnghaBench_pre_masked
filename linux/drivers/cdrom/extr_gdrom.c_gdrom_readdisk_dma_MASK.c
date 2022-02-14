
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int bio; } ;
struct packet_command {int* cmd; } ;
typedef int blk_status_t ;
struct TYPE_2__ {int pending; int transfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct request*,int ) ;
 int FUNC_5 (struct request*) ;
 int FUNC_6 (struct request*) ;
 int FUNC_7 () ;
 TYPE_1__ VAR_23 ;
 scalar_t__ FUNC_8 () ;
 int VAR_24 ;
 int FUNC_9 (struct packet_command*) ;
 struct packet_command* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int**,int) ;
 int VAR_25 ;
 scalar_t__ FUNC_12 (int,unsigned long) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int,int ) ;

__attribute__((used)) static blk_status_t FUNC_15(struct request *VAR_26)
{
 int VAR_27, VAR_28;
 blk_status_t VAR_29;
 struct packet_command *VAR_30;
 unsigned long VAR_31;

 VAR_30 = FUNC_10(sizeof(struct packet_command), VAR_21);
 if (!VAR_30)
  return VAR_2;

 VAR_30->cmd[0] = 0x30;
 VAR_30->cmd[1] = 0x20;
 VAR_27 = FUNC_5(VAR_26)/VAR_20 + VAR_19;
 VAR_28 = FUNC_6(VAR_26)/VAR_20;
 FUNC_2(FUNC_13(FUNC_3(VAR_26->bio)), VAR_11);
 FUNC_2(VAR_28 * VAR_15, VAR_10);
 FUNC_2(1, VAR_8);
 FUNC_2(1, VAR_9);
 VAR_30->cmd[2] = (VAR_27 >> 16) & 0xFF;
 VAR_30->cmd[3] = (VAR_27 >> 8) & 0xFF;
 VAR_30->cmd[4] = VAR_27 & 0xFF;
 VAR_30->cmd[8] = (VAR_28 >> 16) & 0xFF;
 VAR_30->cmd[9] = (VAR_28 >> 8) & 0xFF;
 VAR_30->cmd[10] = VAR_28 & 0xFF;

 FUNC_1(1, VAR_14);

 FUNC_1(0, VAR_17);
 FUNC_1(0, VAR_4);
 FUNC_1(0, VAR_3);
 FUNC_1(0, VAR_13);
 FUNC_1(0, VAR_16);

 VAR_31 = VAR_24 + VAR_22 / 2;
 while (FUNC_8() && FUNC_12(VAR_24, VAR_31))
  FUNC_7();
 FUNC_1(VAR_5, VAR_18);
 VAR_31 = VAR_24 + VAR_22 / 2;

 while (FUNC_8() && FUNC_12(VAR_24, VAR_31))
  FUNC_7();
 VAR_23.pending = 1;
 VAR_23.transfer = 1;
 FUNC_11(VAR_6, &VAR_30->cmd, 6);
 VAR_31 = VAR_24 + VAR_22 / 2;

 while (FUNC_0(VAR_12) &&
  FUNC_12(VAR_24, VAR_31))
  FUNC_7();

 FUNC_1(1, VAR_12);
 FUNC_14(VAR_25,
  VAR_23.transfer == 0, VAR_7);
 VAR_29 = VAR_23.transfer ? VAR_0 : VAR_1;
 VAR_23.transfer = 0;
 VAR_23.pending = 0;

 FUNC_4(VAR_26, VAR_29);
 FUNC_9(VAR_30);
 return VAR_1;
}
