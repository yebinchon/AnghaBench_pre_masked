
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_5,
    unsigned long VAR_6,
    void *VAR_7)
{
 u32 VAR_8;


 VAR_8 = FUNC_1(VAR_4 + VAR_1);
 VAR_8 &= ~VAR_3;
 VAR_8 |= VAR_2;
 FUNC_0("force-enabling MXTALO\n");
 FUNC_2(VAR_8, VAR_4 + VAR_1);
 return VAR_0;
}
