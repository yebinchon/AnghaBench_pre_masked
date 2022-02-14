
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct amdgpu_gpio_rec {scalar_t__ reg; int mask; } ;
struct amdgpu_hpd {void* hpd; struct amdgpu_gpio_rec gpio; } ;
struct amdgpu_device {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_hpd*,int ,int) ;

__attribute__((used)) static struct amdgpu_hpd
FUNC_2(struct amdgpu_device *VAR_7,
           struct amdgpu_gpio_rec *VAR_8)
{
 struct amdgpu_hpd VAR_9;
 u32 VAR_10;

 FUNC_1(&VAR_9, 0, sizeof(struct amdgpu_hpd));

 VAR_10 = FUNC_0(VAR_7);

 VAR_9.gpio = *VAR_8;
 if (VAR_8->reg == VAR_10) {
  switch(VAR_8->mask) {
  case (1 << 0):
   VAR_9.hpd = VAR_0;
   break;
  case (1 << 8):
   VAR_9.hpd = VAR_1;
   break;
  case (1 << 16):
   VAR_9.hpd = VAR_2;
   break;
  case (1 << 24):
   VAR_9.hpd = VAR_3;
   break;
  case (1 << 26):
   VAR_9.hpd = VAR_4;
   break;
  case (1 << 28):
   VAR_9.hpd = VAR_5;
   break;
  default:
   VAR_9.hpd = VAR_6;
   break;
  }
 } else
  VAR_9.hpd = VAR_6;
 return VAR_9;
}
