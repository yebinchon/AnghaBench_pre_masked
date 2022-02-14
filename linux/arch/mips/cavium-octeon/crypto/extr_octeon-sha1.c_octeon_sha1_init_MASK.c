
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct sha1_state {scalar_t__ count; int * state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sha1_state* FUNC_0 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_1(struct shash_desc *VAR_5)
{
 struct sha1_state *VAR_6 = FUNC_0(VAR_5);

 VAR_6->state[0] = VAR_0;
 VAR_6->state[1] = VAR_1;
 VAR_6->state[2] = VAR_2;
 VAR_6->state[3] = VAR_3;
 VAR_6->state[4] = VAR_4;
 VAR_6->count = 0;

 return 0;
}
