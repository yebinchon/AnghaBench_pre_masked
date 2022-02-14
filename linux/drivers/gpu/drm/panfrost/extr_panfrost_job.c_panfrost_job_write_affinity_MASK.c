
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int shader_present; } ;
struct panfrost_device {TYPE_1__ features; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct panfrost_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct panfrost_device *VAR_0,
     u32 VAR_1,
     int VAR_2)
{
 u64 VAR_3;






 VAR_3 = VAR_0->features.shader_present;

 FUNC_2(VAR_0, FUNC_1(VAR_2), VAR_3 & 0xFFFFFFFF);
 FUNC_2(VAR_0, FUNC_0(VAR_2), VAR_3 >> 32);
}
