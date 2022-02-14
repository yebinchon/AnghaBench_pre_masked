
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int demod_address; } ;
struct drxd_state {int i2c; TYPE_1__ config; } ;


 scalar_t__ FUNC_0 (int ,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct drxd_state *VAR_0, u32 VAR_1, u16 VAR_2, u8 VAR_3)
{
 u8 VAR_4 = VAR_0->config.demod_address;
 u8 VAR_5[6] = { VAR_1 & 0xff, (VAR_1 >> 16) & 0xff,
  VAR_3 | ((VAR_1 >> 24) & 0xff), (VAR_1 >> 8) & 0xff,
  VAR_2 & 0xff, (VAR_2 >> 8) & 0xff
 };

 if (FUNC_0(VAR_0->i2c, VAR_4, VAR_5, 6) < 0)
  return -1;
 return 0;
}
