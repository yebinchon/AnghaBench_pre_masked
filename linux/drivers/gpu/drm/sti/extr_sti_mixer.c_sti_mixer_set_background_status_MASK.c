
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sti_mixer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sti_mixer*,int ) ;
 int FUNC_1 (struct sti_mixer*,int ,int) ;

void FUNC_2(struct sti_mixer *VAR_2, bool VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2, VAR_1);

 VAR_4 &= ~VAR_0;
 VAR_4 |= VAR_3;
 FUNC_1(VAR_2, VAR_1, VAR_4);
}
