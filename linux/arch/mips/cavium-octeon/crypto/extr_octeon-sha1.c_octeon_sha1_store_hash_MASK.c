
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sha1_state {int * state; } ;
struct TYPE_2__ {int member_0; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct sha1_state *VAR_0)
{
 u64 *VAR_1 = (u64 *)VAR_0->state;
 union {
  u32 word[2];
  u64 dword;
 } VAR_2 = { { VAR_0->state[4], } };

 FUNC_1(VAR_1[0], 0);
 FUNC_1(VAR_1[1], 1);
 FUNC_1(VAR_2.dword, 2);
 FUNC_0(&VAR_2.word[0], sizeof(VAR_2.word[0]));
}
