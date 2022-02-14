
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct shash_desc {int dummy; } ;
struct TYPE_2__ {int count; } ;
struct sha1_ce_state {int finalize; TYPE_1__ sst; } ;
typedef int sha1_block_fn ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct shash_desc*,int const*,unsigned int,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct shash_desc*,int *) ;
 int FUNC_5 (struct shash_desc*,int const*,unsigned int,int *) ;
 int FUNC_6 (struct shash_desc*,int *) ;
 scalar_t__ VAR_1 ;
 struct sha1_ce_state* FUNC_7 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_8(struct shash_desc *VAR_2, const u8 *VAR_3,
    unsigned int VAR_4, u8 *VAR_5)
{
 struct sha1_ce_state *VAR_6 = FUNC_7(VAR_2);
 bool VAR_7 = !VAR_6->sst.count && !(VAR_4 % VAR_0) && VAR_4;

 if (!FUNC_1())
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);





 VAR_6->finalize = VAR_7;

 FUNC_2();
 FUNC_5(VAR_2, VAR_3, VAR_4,
       (sha1_block_fn *)VAR_1);
 if (!VAR_7)
  FUNC_4(VAR_2, (sha1_block_fn *)VAR_1);
 FUNC_3();
 return FUNC_6(VAR_2, VAR_5);
}
