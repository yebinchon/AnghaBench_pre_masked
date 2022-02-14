
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct mxt_data {scalar_t__ config_crc; int t6_status; int reset_completion; int crc_completion; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,int,...) ;

__attribute__((used)) static void FUNC_2(struct mxt_data *VAR_6, u8 *VAR_7)
{
 struct device *VAR_8 = &VAR_6->client->dev;
 u8 VAR_9 = VAR_7[1];
 u32 VAR_10 = VAR_7[2] | (VAR_7[3] << 8) | (VAR_7[4] << 16);

 if (VAR_10 != VAR_6->config_crc) {
  VAR_6->config_crc = VAR_10;
  FUNC_1(VAR_8, "T6 Config Checksum: 0x%06X\n", VAR_10);
 }

 FUNC_0(&VAR_6->crc_completion);


 if (VAR_9 & VAR_4)
  FUNC_0(&VAR_6->reset_completion);


 if (VAR_9 != VAR_6->t6_status)
  FUNC_1(VAR_8, "T6 Status 0x%02X%s%s%s%s%s%s%s\n",
   VAR_9,
   VAR_9 == 0 ? " OK" : "",
   VAR_9 & VAR_4 ? " RESET" : "",
   VAR_9 & VAR_3 ? " OFL" : "",
   VAR_9 & VAR_5 ? " SIGERR" : "",
   VAR_9 & VAR_0 ? " CAL" : "",
   VAR_9 & VAR_1 ? " CFGERR" : "",
   VAR_9 & VAR_2 ? " COMSERR" : "");


 VAR_6->t6_status = VAR_9;
}
