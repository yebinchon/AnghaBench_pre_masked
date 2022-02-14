
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct img_i2c {int at_cur_cmd; int at_cur_data; scalar_t__ mode; int at_t_done; int at_slave_event; scalar_t__ line_status; TYPE_2__ adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct img_i2c*) ;
 int FUNC_3 (struct img_i2c*,int ) ;
 int FUNC_4 (struct img_i2c*,int ) ;
 int FUNC_5 (struct img_i2c*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct img_i2c *VAR_13, int VAR_14, u8 VAR_15)
{
 VAR_13->at_cur_cmd = VAR_14;
 VAR_13->at_cur_data = VAR_15;


 if (VAR_14 == VAR_0 && VAR_13->mode == VAR_4) {
  u32 VAR_16 = FUNC_3(VAR_13, VAR_12);

  if (VAR_16 & VAR_3 && !(VAR_15 & 0x80)) {

   FUNC_4(VAR_13, VAR_5);
   FUNC_2(VAR_13);
   return;
  }
 }

 FUNC_0(VAR_13->adap.dev.parent,
  "atomic cmd=%s (%d) data=%#x\n",
  FUNC_1(VAR_14), VAR_14, VAR_15);
 VAR_13->at_t_done = (VAR_14 == VAR_2 || VAR_14 == VAR_1);
 VAR_13->at_slave_event = 0;
 VAR_13->line_status = 0;

 FUNC_5(VAR_13, VAR_11,
  ((VAR_14 & VAR_6) << VAR_7) |
  VAR_10 |
  VAR_9 |
  (VAR_15 << VAR_8));
}
