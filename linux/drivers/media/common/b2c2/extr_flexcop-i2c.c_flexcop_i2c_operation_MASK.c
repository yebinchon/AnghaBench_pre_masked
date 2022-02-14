
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct flexcop_device {TYPE_2__ (* read_ibi_reg ) (struct flexcop_device*,int ) ;int (* write_ibi_reg ) (struct flexcop_device*,int ,TYPE_2__) ;} ;
struct TYPE_8__ {int working_start; scalar_t__ st_done; int no_base_addr_ack_error; } ;
struct TYPE_9__ {int raw; TYPE_1__ tw_sm_c_100; } ;
typedef TYPE_2__ flexcop_ibi_value ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (struct flexcop_device*,int ,TYPE_2__) ;
 int FUNC_2 (struct flexcop_device*,int ,TYPE_2__) ;
 TYPE_2__ FUNC_3 (struct flexcop_device*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct flexcop_device *VAR_4,
  flexcop_ibi_value *VAR_5)
{
 int VAR_6;
 flexcop_ibi_value VAR_7;

 VAR_5->tw_sm_c_100.working_start = 1;
 FUNC_0("r100 before: %08x\n",VAR_5->raw);

 VAR_4->write_ibi_reg(VAR_4, VAR_3, VAR_2);
 VAR_4->write_ibi_reg(VAR_4, VAR_3, *VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_7 = VAR_4->read_ibi_reg(VAR_4, VAR_3);

  if (!VAR_7.tw_sm_c_100.no_base_addr_ack_error) {
   if (VAR_7.tw_sm_c_100.st_done) {
    *VAR_5 = VAR_7;
    FUNC_0("i2c success\n");
    return 0;
   }
  } else {
   FUNC_0("suffering from an i2c ack_error\n");
   return -VAR_0;
  }
 }
 FUNC_0("tried %d times i2c operation, never finished or too many ack errors.\n",
  VAR_6);
 return -VAR_0;
}
