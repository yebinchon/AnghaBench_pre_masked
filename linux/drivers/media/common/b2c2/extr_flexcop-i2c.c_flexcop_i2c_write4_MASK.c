
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u8 ;
struct flexcop_device {int (* write_ibi_reg ) (struct flexcop_device*,int ,TYPE_3__) ;} ;
struct TYPE_7__ {void* data4_reg; void* data3_reg; void* data2_reg; } ;
struct TYPE_8__ {int total_bytes; void* data1_reg; } ;
struct TYPE_9__ {scalar_t__ raw; TYPE_1__ tw_sm_c_104; TYPE_2__ tw_sm_c_100; } ;
typedef TYPE_3__ flexcop_ibi_value ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct flexcop_device*,TYPE_3__*) ;
 int FUNC_2 (struct flexcop_device*,int ,TYPE_3__) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct flexcop_device *VAR_1,
  flexcop_ibi_value VAR_2, u8 *VAR_3)
{
 flexcop_ibi_value VAR_4;
 int VAR_5 = VAR_2;
 VAR_4 = 0;


 VAR_2 = VAR_3[0];
 VAR_4 = VAR_5 > 0 ? VAR_3[1] : 0;
 VAR_4 = VAR_5 > 1 ? VAR_3[2] : 0;
 VAR_4 = VAR_5 > 2 ? VAR_3[3] : 0;

 FUNC_0("write: r100: %08x, r104: %08x\n", VAR_2, VAR_4);


 VAR_1->write_ibi_reg(VAR_1, VAR_0, VAR_4);
 return FUNC_1(VAR_1, &VAR_2);
}
