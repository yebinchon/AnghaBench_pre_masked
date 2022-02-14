
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct sha512_state {scalar_t__* count; void** state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct sha512_state*,int ,int) ;
 struct sha512_state* FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_8)
{
 struct sha512_state *VAR_9 = FUNC_2(VAR_8);

 FUNC_1(VAR_9, 0, sizeof *VAR_9);

 VAR_9->state[0] = FUNC_0(VAR_0);
 VAR_9->state[1] = FUNC_0(VAR_1);
 VAR_9->state[2] = FUNC_0(VAR_2);
 VAR_9->state[3] = FUNC_0(VAR_3);
 VAR_9->state[4] = FUNC_0(VAR_4);
 VAR_9->state[5] = FUNC_0(VAR_5);
 VAR_9->state[6] = FUNC_0(VAR_6);
 VAR_9->state[7] = FUNC_0(VAR_7);
 VAR_9->count[0] = 0;

 return 0;
}
