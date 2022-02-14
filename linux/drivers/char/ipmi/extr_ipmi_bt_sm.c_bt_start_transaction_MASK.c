
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si_sm_data {scalar_t__ state; unsigned int* write_data; unsigned int write_count; int BT_CAP_req2rsp; int timeout; scalar_t__ truncated; scalar_t__ nonzero_status; scalar_t__ error_retries; int seq; TYPE_1__* io; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct si_sm_data*,int ) ;
 int FUNC_2 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(struct si_sm_data *VAR_11,
    unsigned char *VAR_12,
    unsigned int VAR_13)
{
 unsigned int VAR_14;

 if (VAR_13 < 2)
  return VAR_9;
 if (VAR_13 > VAR_5)
  return VAR_8;

 if (VAR_11->state == VAR_2)
  return VAR_6;

 if (VAR_11->state != VAR_1)
  return VAR_7;

 if (VAR_10 & VAR_0) {
  FUNC_0(VAR_11->io->dev, "+++++++++++++++++ New command\n");
  FUNC_0(VAR_11->io->dev, "NetFn/LUN CMD [%d data]:", VAR_13 - 2);
  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14 ++)
   FUNC_3(" %02x", VAR_12[VAR_14]);
  FUNC_3("\n");
 }
 VAR_11->write_data[0] = VAR_13 + 1;
 VAR_11->write_data[1] = *VAR_12;
 VAR_11->write_data[2] = VAR_11->seq++;
 FUNC_2(VAR_11->write_data + 3, VAR_12 + 1, VAR_13 - 1);
 VAR_11->write_count = VAR_13 + 2;
 VAR_11->error_retries = 0;
 VAR_11->nonzero_status = 0;
 VAR_11->truncated = 0;
 VAR_11->state = VAR_3;
 VAR_11->timeout = VAR_11->BT_CAP_req2rsp;
 FUNC_1(VAR_11, VAR_4);
 return 0;
}
