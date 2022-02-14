
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i3c_master_controller {int dummy; } ;
struct dw_i3c_xfer {int comp; struct dw_i3c_cmd* cmds; } ;
struct dw_i3c_master {int free_pos; int maxdevs; int* addrs; int datstartaddr; scalar_t__ regs; } ;
struct dw_i3c_cmd {int cmd_hi; int cmd_lo; int rx_len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct dw_i3c_xfer* FUNC_7 (struct dw_i3c_master*,int) ;
 int FUNC_8 (struct dw_i3c_master*,struct dw_i3c_xfer*) ;
 int FUNC_9 (struct dw_i3c_master*,struct dw_i3c_xfer*) ;
 int FUNC_10 (struct dw_i3c_xfer*) ;
 int FUNC_11 (struct dw_i3c_master*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct i3c_master_controller*,int) ;
 int FUNC_14 (struct i3c_master_controller*,int ,int) ;
 int FUNC_15 (struct i3c_master_controller*,int) ;
 struct dw_i3c_master* FUNC_16 (struct i3c_master_controller*) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_19(struct i3c_master_controller *VAR_11)
{
 struct dw_i3c_master *VAR_12 = FUNC_16(VAR_11);
 struct dw_i3c_xfer *VAR_13;
 struct dw_i3c_cmd *VAR_14;
 u32 VAR_15, VAR_16;
 u8 VAR_17, VAR_18 = 0;
 int VAR_19, VAR_20;

 VAR_15 = ~(VAR_12->free_pos);


 for (VAR_20 = 0; VAR_20 < VAR_12->maxdevs; VAR_20++) {
  if (VAR_15 & FUNC_0(VAR_20))
   continue;

  VAR_19 = FUNC_15(VAR_11, VAR_18 + 1);
  if (VAR_19 < 0)
   return -VAR_4;

  VAR_12->addrs[VAR_20] = VAR_19;
  VAR_17 = FUNC_12(VAR_19);
  VAR_18 = VAR_19;
  VAR_19 |= (VAR_17 << 7);

  FUNC_18(FUNC_4(VAR_19),
         VAR_12->regs +
         FUNC_5(VAR_12->datstartaddr, VAR_20));
 }

 VAR_13 = FUNC_7(VAR_12, 1);
 if (!VAR_13)
  return -VAR_3;

 VAR_20 = FUNC_11(VAR_12);
 VAR_14 = &VAR_13->cmds[0];
 VAR_14->cmd_hi = 0x1;
 VAR_14->cmd_lo = FUNC_2(VAR_12->maxdevs - VAR_20) |
        FUNC_3(VAR_20) |
        FUNC_1(VAR_6) |
        VAR_0 |
        VAR_2 |
        VAR_1;

 FUNC_9(VAR_12, VAR_13);
 if (!FUNC_17(&VAR_13->comp, VAR_10))
  FUNC_8(VAR_12, VAR_13);

 VAR_16 = FUNC_6(VAR_12->maxdevs - VAR_14->rx_len - 1, 0);
 VAR_16 &= ~VAR_15;

 for (VAR_20 = 0; VAR_20 < VAR_12->maxdevs; VAR_20++) {
  if (VAR_16 & FUNC_0(VAR_20))
   FUNC_13(VAR_11, VAR_12->addrs[VAR_20]);
 }

 FUNC_10(VAR_13);

 FUNC_14(VAR_11, VAR_5,
    VAR_7 |
    VAR_8 |
    VAR_9);

 return 0;
}
