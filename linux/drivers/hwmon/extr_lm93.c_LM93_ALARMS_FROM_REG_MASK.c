
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block1_t {int host_status_2; int host_status_4; int host_status_3; int fan_status; int p1_prochot_status; int p2_prochot_status; int host_status_1; } ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(struct block1_t VAR_1)
{
 unsigned VAR_2;
 VAR_2 = VAR_1 & 0x3f;

 if (VAR_0[0])
  VAR_2 |= (VAR_1 & 0x10) << 2;
 else
  VAR_2 |= VAR_1 & 0x40;

 if (VAR_0[1])
  VAR_2 |= (VAR_1 & 0x20) << 2;
 else
  VAR_2 |= VAR_1 & 0x80;

 VAR_2 |= VAR_1 << 8;
 VAR_2 |= (VAR_1 & 0x0f) << 16;
 VAR_2 |= (VAR_1 & 0x80) << 13;
 VAR_2 |= (VAR_1 & 0x80) << 14;
 VAR_2 |= (VAR_1 & 0xfc) << 20;
 VAR_2 |= (VAR_1 & 0x07) << 28;
 return VAR_2;
}
