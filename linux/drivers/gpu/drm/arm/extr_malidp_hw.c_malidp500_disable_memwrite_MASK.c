
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct malidp_hw_device {scalar_t__ mw_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct malidp_hw_device*,int ) ;
 int FUNC_1 (struct malidp_hw_device*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct malidp_hw_device *VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_8, VAR_1);

 if (VAR_8->mw_state == VAR_6 || VAR_8->mw_state == VAR_5)
  VAR_8->mw_state = VAR_7;
 FUNC_1(VAR_8, VAR_4, VAR_0);
 FUNC_1(VAR_8, VAR_3, VAR_9 + VAR_2);
}
