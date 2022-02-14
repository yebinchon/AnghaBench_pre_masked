
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct flexcop_device {int (* write_ibi_reg ) (struct flexcop_device*,int ,TYPE_3__) ;TYPE_3__ (* read_ibi_reg ) (struct flexcop_device*,int ) ;int has_32_hw_pid_filter; scalar_t__ skip_6_hw_pid_filter; } ;
struct TYPE_9__ {int PID; int PID_enable_bit; } ;
struct TYPE_8__ {int index_reg; } ;
struct TYPE_10__ {TYPE_2__ pid_n_reg_314; TYPE_1__ index_reg_310; } ;
typedef TYPE_3__ flexcop_ibi_value ;


 int FUNC_0 (char*,int,int,int,char*) ;
 int FUNC_1 (struct flexcop_device*,int,int) ;
 int FUNC_2 (struct flexcop_device*,int,int) ;
 int FUNC_3 (struct flexcop_device*,int,int) ;
 int FUNC_4 (struct flexcop_device*,int,int) ;
 int FUNC_5 (struct flexcop_device*,int,int) ;
 int FUNC_6 (struct flexcop_device*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ FUNC_7 (struct flexcop_device*,int ) ;
 int FUNC_8 (struct flexcop_device*,int ,TYPE_3__) ;
 TYPE_3__ FUNC_9 (struct flexcop_device*,int ) ;
 int FUNC_10 (struct flexcop_device*,int ,TYPE_3__) ;

__attribute__((used)) static void FUNC_11(struct flexcop_device *VAR_2,
  int VAR_3, u16 VAR_4, int VAR_5)
{
 if (VAR_4 == 0x2000)
  return;

 FUNC_0("setting pid: %5d %04x at index %d '%s'\n",
   VAR_4, VAR_4, VAR_3, VAR_5 ? "on" : "off");


 if (VAR_2->skip_6_hw_pid_filter)
  VAR_3 += 6;



 switch (VAR_3) {
 case 0:
  FUNC_5(VAR_2, VAR_4, VAR_5);
  break;
 case 1:
  FUNC_6(VAR_2, VAR_4, VAR_5);
  break;
 case 2:
  FUNC_3(VAR_2, VAR_4, VAR_5);
  break;
 case 3:
  FUNC_4(VAR_2, VAR_4, VAR_5);
  break;
 case 4:
  FUNC_2(VAR_2, VAR_4, VAR_5);
  break;
 case 5:
  FUNC_1(VAR_2, VAR_4, VAR_5);
  break;
 default:
  if (VAR_2->has_32_hw_pid_filter && VAR_3 < 38) {
   flexcop_ibi_value VAR_6, VAR_7;


   VAR_7 = VAR_2->read_ibi_reg(VAR_2, VAR_0);
   VAR_7.index_reg_310.index_reg = VAR_3 - 6;
   VAR_2->write_ibi_reg(VAR_2, VAR_0, VAR_7);

   VAR_6 = VAR_2->read_ibi_reg(VAR_2, VAR_1);
   VAR_6.pid_n_reg_314.PID = VAR_5 ? VAR_4 : 0x1fff;
   VAR_6.pid_n_reg_314.PID_enable_bit = VAR_5;
   VAR_2->write_ibi_reg(VAR_2, VAR_1, VAR_6);
  }
  break;
 }
}
