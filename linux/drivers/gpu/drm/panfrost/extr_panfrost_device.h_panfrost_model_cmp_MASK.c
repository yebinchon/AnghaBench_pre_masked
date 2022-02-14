
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct panfrost_device {TYPE_1__ features; } ;
typedef int s32 ;



__attribute__((used)) static inline int FUNC_0(struct panfrost_device *VAR_0, s32 VAR_1)
{
 s32 VAR_2 = VAR_0->features.id;

 if (VAR_2 & 0xf000)
  VAR_2 &= 0xf00f;
 return VAR_2 - VAR_1;
}
