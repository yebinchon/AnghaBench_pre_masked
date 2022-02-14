
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ SINK_SELF_REFRESH_STATUS; } ;
union psr_sink_psr_status {unsigned char raw; TYPE_3__ bits; } ;
struct TYPE_5__ {scalar_t__ RFB_STORAGE_ERROR; scalar_t__ LINK_CRC_ERROR; } ;
union psr_error_status {unsigned char raw; TYPE_2__ bits; } ;
struct TYPE_4__ {scalar_t__ ENABLE; } ;
union dpcd_psr_configuration {unsigned char raw; TYPE_1__ bits; } ;
struct dc_link {int ctx; int psr_enabled; } ;
typedef int dpcdbuf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dc_link const*,int,int) ;
 int FUNC_1 (int ,struct dc_link const*,int,unsigned char*,int) ;
 int FUNC_2 (int ,struct dc_link const*,int,unsigned char*,int) ;

__attribute__((used)) static bool FUNC_3(const struct dc_link *VAR_1)
{
 union dpcd_psr_configuration VAR_2;

 if (!VAR_1->psr_enabled)
  return 0;

 FUNC_1(
  VAR_1->ctx,
  VAR_1,
  368,
  &VAR_2.raw,
  sizeof(VAR_2.raw));


 if (VAR_2.bits.ENABLE) {
  unsigned char VAR_3[3] = {0};
  union psr_error_status VAR_4;
  union psr_sink_psr_status VAR_5;

  FUNC_1(
   VAR_1->ctx,
   VAR_1,
   0x2006,
   (unsigned char *) VAR_3,
   sizeof(VAR_3));


  VAR_4.raw = VAR_3[0];

  VAR_5.raw = VAR_3[2];

  if (VAR_4.bits.LINK_CRC_ERROR ||
    VAR_4.bits.RFB_STORAGE_ERROR) {

   FUNC_2(
    VAR_1->ctx,
    VAR_1,
    8198,
    &VAR_4.raw,
    sizeof(VAR_4.raw));


   FUNC_0(VAR_1, 0, 1);
   FUNC_0(VAR_1, 1, 1);

   return 1;
  } else if (VAR_5.bits.SINK_SELF_REFRESH_STATUS ==
    VAR_0){





   return 1;
  }
 }
 return 0;
}
