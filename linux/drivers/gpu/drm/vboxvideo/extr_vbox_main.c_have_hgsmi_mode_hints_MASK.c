
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vbox_private {int guest_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;

__attribute__((used)) static bool FUNC_1(struct vbox_private *VAR_3)
{
 u32 VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3->guest_pool,
          VAR_1,
          &VAR_4);
 if (VAR_6)
  return 0;

 VAR_6 = FUNC_0(VAR_3->guest_pool,
          VAR_0,
          &VAR_5);
 if (VAR_6)
  return 0;

 return VAR_4 == VAR_2 && VAR_5 == VAR_2;
}
