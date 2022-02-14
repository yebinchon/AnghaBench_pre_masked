
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct cmc_state {scalar_t__ last_intr; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int ) ;
 struct cmc_state** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(int VAR_6)
{
 struct cmc_state *VAR_7;
 uint64_t VAR_8;

 FUNC_0(VAR_6 < VAR_5, ("CPU %d has more MC banks", FUNC_2(VAR_4)));


 if (!(FUNC_2(VAR_3) & 1 << VAR_6))
  return;

 VAR_7 = &VAR_2[FUNC_2(VAR_4)][VAR_6];
 VAR_7->last_intr = 0;
 VAR_8 = FUNC_3(FUNC_1(VAR_6));
 VAR_8 &= ~VAR_1;
 VAR_8 |= VAR_0 | 1;
 FUNC_4(FUNC_1(VAR_6), VAR_8);
}
