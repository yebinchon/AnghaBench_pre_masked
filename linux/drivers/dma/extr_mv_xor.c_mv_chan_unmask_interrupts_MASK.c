
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_xor_chan {int idx; } ;


 int FUNC_0 (struct mv_xor_chan*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct mv_xor_chan *VAR_1)
{
 u32 VAR_2 = FUNC_1(FUNC_0(VAR_1));
 VAR_2 |= VAR_0 << (VAR_1->idx * 16);
 FUNC_2(VAR_2, FUNC_0(VAR_1));
}
