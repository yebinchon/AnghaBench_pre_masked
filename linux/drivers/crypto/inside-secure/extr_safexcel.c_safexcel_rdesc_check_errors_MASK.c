
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error_code; } ;
struct safexcel_result_desc {TYPE_1__ result_data; scalar_t__ buffer_overflow; scalar_t__ descriptor_overflow; } ;
struct safexcel_crypto_priv {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int) ;

inline int FUNC_3(struct safexcel_crypto_priv *VAR_3,
           struct safexcel_result_desc *VAR_4)
{
 if (FUNC_2((!VAR_4->descriptor_overflow) &&
     (!VAR_4->buffer_overflow) &&
     (!VAR_4->result_data.error_code)))
  return 0;

 if (VAR_4->descriptor_overflow)
  FUNC_1(VAR_3->dev, "Descriptor overflow detected");

 if (VAR_4->buffer_overflow)
  FUNC_1(VAR_3->dev, "Buffer overflow detected");

 if (VAR_4->result_data.error_code & 0x4066) {

  FUNC_1(VAR_3->dev,
   "result descriptor error (%x)",
   VAR_4->result_data.error_code);
  return -VAR_2;
 } else if (VAR_4->result_data.error_code &
     (FUNC_0(7) | FUNC_0(4) | FUNC_0(3) | FUNC_0(0))) {





  return -VAR_1;
 } else if (VAR_4->result_data.error_code & FUNC_0(9)) {

  return -VAR_0;
 }


 return -VAR_1;
}
