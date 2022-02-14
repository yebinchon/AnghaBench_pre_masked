
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max77693_led_device {int fled_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(struct max77693_led_device *VAR_3,
      int VAR_4)
{
 u8 VAR_5 = (VAR_4 == VAR_0) ? VAR_1 : VAR_2;

 return VAR_3->fled_mask & VAR_5;
}
