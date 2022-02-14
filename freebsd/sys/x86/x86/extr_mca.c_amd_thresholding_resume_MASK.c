
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_et_state {int cur_threshold; scalar_t__ last_intr; } ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (int ) ;
 struct amd_et_state** VAR_0 ;
 int FUNC_2 (struct amd_et_state*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(int VAR_4)
{
 struct amd_et_state *VAR_5;

 FUNC_0(VAR_4 < VAR_3, ("CPU %d has more MC banks", FUNC_1(VAR_2)));


 if (!(FUNC_1(VAR_1) & 1 << VAR_4))
  return;

 VAR_5 = &VAR_0[FUNC_1(VAR_2)][VAR_4];
 VAR_5->last_intr = 0;
 VAR_5->cur_threshold = 1;
 FUNC_2(VAR_5, VAR_4);
}
