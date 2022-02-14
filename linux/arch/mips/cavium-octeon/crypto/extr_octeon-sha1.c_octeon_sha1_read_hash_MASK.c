
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef int u32 ;
struct sha1_state {int * state; } ;


 int FUNC_0 (void**,int) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct sha1_state *VAR_0)
{
 u64 *VAR_1 = (u64 *)VAR_0->state;
 union {
  u32 word[2];
  u64 dword;
 } VAR_2;

 VAR_1[0] = FUNC_1(0);
 VAR_1[1] = FUNC_1(1);
 VAR_2.dword = FUNC_1(2);
 VAR_0->state[4] = VAR_2.word[0];
 FUNC_0(&VAR_2.dword, sizeof(VAR_2.dword));
}
