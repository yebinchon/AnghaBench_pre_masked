
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct flexcop_i2c_adapter {int port; int fc; scalar_t__ no_base_addr; } ;
struct TYPE_5__ {int chipaddr; int total_bytes; int baseaddr; int twoWS_port_reg; scalar_t__ twoWS_rw; } ;
struct TYPE_6__ {TYPE_1__ tw_sm_c_100; scalar_t__ raw; } ;
typedef TYPE_2__ flexcop_ibi_value ;
typedef scalar_t__ flexcop_access_op_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,char*,int,int,int) ;
 int FUNC_1 (char*,int ,char*,int,int,int,int*) ;
 int FUNC_2 (struct flexcop_i2c_adapter*,TYPE_2__,int*) ;
 int FUNC_3 (int ,TYPE_2__,int*) ;

int FUNC_4(struct flexcop_i2c_adapter *VAR_2,
   flexcop_access_op_t VAR_3, u8 VAR_4,
   u8 VAR_5, u8 *VAR_6, u16 VAR_7)
{
 int VAR_8;
 int VAR_9 = VAR_7;
 u8 *VAR_10;
 u8 VAR_11 = VAR_5;

 u16 VAR_12;
 flexcop_ibi_value VAR_13;

 FUNC_0("port %d %s(%02x): register %02x, size: %d\n",
  VAR_2->port,
  VAR_3 == VAR_0 ? "rd" : "wr",
  VAR_4, VAR_5, VAR_7);
 VAR_13 = 0;
 VAR_13 = VAR_4;
 VAR_13 = VAR_3;
 VAR_13 = VAR_2->port;




 if (VAR_2->no_base_addr && VAR_9 == 0 && VAR_3 == VAR_1) {
  VAR_6 = &VAR_5;
  VAR_9 = 1;
 }

 VAR_10 = VAR_6;

 while (VAR_9 != 0) {
  VAR_12 = VAR_9 > 4 ? 4 : VAR_9;

  VAR_13 = VAR_12 - 1;
  VAR_13 = VAR_11;

  if (VAR_3 == VAR_0)
   VAR_8 = FUNC_2(VAR_2, VAR_13, VAR_10);
  else
   VAR_8 = FUNC_3(VAR_2->fc, VAR_13, VAR_10);

  if (VAR_8 < 0)
   return VAR_8;

  VAR_10 += VAR_12;
  VAR_11 += VAR_12;
  VAR_9 -= VAR_12;
 }
 FUNC_1("port %d %s(%02x): register %02x: %*ph\n",
  VAR_2->port,
  VAR_3 == VAR_0 ? "rd" : "wr",
  VAR_4, VAR_5, VAR_7, VAR_6);

 return 0;
}
