
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct sha1_ce_state {scalar_t__ finalize; } ;
typedef int sha1_block_fn ;


 int FUNC_0 (struct shash_desc*,int *,int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct shash_desc*,int *) ;
 int FUNC_5 (struct shash_desc*,int *) ;
 scalar_t__ VAR_0 ;
 struct sha1_ce_state* FUNC_6 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_7(struct shash_desc *VAR_1, u8 *VAR_2)
{
 struct sha1_ce_state *VAR_3 = FUNC_6(VAR_1);

 if (!FUNC_1())
  return FUNC_0(VAR_1, ((void*)0), 0, VAR_2);

 VAR_3->finalize = 0;
 FUNC_2();
 FUNC_4(VAR_1, (sha1_block_fn *)VAR_0);
 FUNC_3();
 return FUNC_5(VAR_1, VAR_2);
}
