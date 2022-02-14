
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int has_dma; int has_dualbuff; int has_sha224; int has_sha_384_512; int has_uihv; int has_hmac; } ;
struct atmel_sha_dev {int hw_version; int dev; TYPE_1__ caps; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct atmel_sha_dev *VAR_0)
{

 VAR_0->caps.has_dma = 0;
 VAR_0->caps.has_dualbuff = 0;
 VAR_0->caps.has_sha224 = 0;
 VAR_0->caps.has_sha_384_512 = 0;
 VAR_0->caps.has_uihv = 0;
 VAR_0->caps.has_hmac = 0;


 switch (VAR_0->hw_version & 0xff0) {
 case 0x510:
  VAR_0->caps.has_dma = 1;
  VAR_0->caps.has_dualbuff = 1;
  VAR_0->caps.has_sha224 = 1;
  VAR_0->caps.has_sha_384_512 = 1;
  VAR_0->caps.has_uihv = 1;
  VAR_0->caps.has_hmac = 1;
  break;
 case 0x420:
  VAR_0->caps.has_dma = 1;
  VAR_0->caps.has_dualbuff = 1;
  VAR_0->caps.has_sha224 = 1;
  VAR_0->caps.has_sha_384_512 = 1;
  VAR_0->caps.has_uihv = 1;
  break;
 case 0x410:
  VAR_0->caps.has_dma = 1;
  VAR_0->caps.has_dualbuff = 1;
  VAR_0->caps.has_sha224 = 1;
  VAR_0->caps.has_sha_384_512 = 1;
  break;
 case 0x400:
  VAR_0->caps.has_dma = 1;
  VAR_0->caps.has_dualbuff = 1;
  VAR_0->caps.has_sha224 = 1;
  break;
 case 0x320:
  break;
 default:
  FUNC_0(VAR_0->dev,
    "Unmanaged sha version, set minimum capabilities\n");
  break;
 }
}
