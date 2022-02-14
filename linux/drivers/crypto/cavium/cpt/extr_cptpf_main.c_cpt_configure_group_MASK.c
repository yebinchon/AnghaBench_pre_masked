
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct cpt_device {int max_se_cores; int reg_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct cpt_device *VAR_2, u8 VAR_3,
    u64 VAR_4, u8 VAR_5)
{
 u64 VAR_6 = 0;

 if (VAR_5 == VAR_0)
  VAR_4 = (VAR_4 << VAR_2->max_se_cores);

 VAR_6 = FUNC_1(VAR_2->reg_base, FUNC_0(0, VAR_3));
 FUNC_2(VAR_2->reg_base, FUNC_0(0, VAR_3),
   (VAR_6 | VAR_4));
 FUNC_3(VAR_1);
}
