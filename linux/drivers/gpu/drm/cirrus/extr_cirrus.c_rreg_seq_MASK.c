
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cirrus_device {scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static u8 FUNC_2(struct cirrus_device *VAR_2, u8 VAR_3)
{
 FUNC_1(VAR_3, VAR_2->mmio + VAR_1);
 return FUNC_0(VAR_2->mmio + VAR_0);
}
