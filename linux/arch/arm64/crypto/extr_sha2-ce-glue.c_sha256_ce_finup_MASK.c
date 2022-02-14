
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct shash_desc {int dummy; } ;
struct TYPE_2__ {int count; } ;
struct sha256_ce_state {int finalize; TYPE_1__ sst; } ;
typedef int sha256_block_fn ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct shash_desc*,int *) ;
 int FUNC_4 (struct shash_desc*,int const*,unsigned int,int *) ;
 int FUNC_5 (struct shash_desc*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sha256_ce_state* FUNC_6 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_7(struct shash_desc *VAR_3, const u8 *VAR_4,
      unsigned int VAR_5, u8 *VAR_6)
{
 struct sha256_ce_state *VAR_7 = FUNC_6(VAR_3);
 bool VAR_8 = !VAR_7->sst.count && !(VAR_5 % VAR_0) && VAR_5;

 if (!FUNC_0()) {
  if (VAR_5)
   FUNC_4(VAR_3, VAR_4, VAR_5,
    (sha256_block_fn *)VAR_1);
  FUNC_3(VAR_3,
    (sha256_block_fn *)VAR_1);
  return FUNC_5(VAR_3, VAR_6);
 }





 VAR_7->finalize = VAR_8;

 FUNC_1();
 FUNC_4(VAR_3, VAR_4, VAR_5,
         (sha256_block_fn *)VAR_2);
 if (!VAR_8)
  FUNC_3(VAR_3,
     (sha256_block_fn *)VAR_2);
 FUNC_2();
 return FUNC_5(VAR_3, VAR_6);
}
