
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vmac_tfm_ctx {int * l3key; int * polykey; int nhkey; } ;
struct vmac_desc_ctx {unsigned int partial_size; scalar_t__ first_block_processed; int partial_words; int * partial; int * polytmp; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,unsigned int) ;
 int FUNC_3 (int ,int ,unsigned int,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 unsigned int FUNC_5 (unsigned int,int) ;

__attribute__((used)) static u64 FUNC_6(const struct vmac_tfm_ctx *VAR_1,
         struct vmac_desc_ctx *VAR_2)
{
 unsigned int VAR_3 = VAR_2->partial_size;
 u64 VAR_4 = VAR_2->polytmp[0];
 u64 VAR_5 = VAR_2->polytmp[1];


 if (VAR_3) {

  unsigned int VAR_6 = FUNC_5(VAR_3, 16);
  u64 VAR_7, VAR_8;

  FUNC_2(&VAR_2->partial[VAR_3], 0, VAR_6 - VAR_3);
  FUNC_3(VAR_2->partial_words, VAR_1->nhkey, VAR_6 / 8, VAR_7, VAR_8);
  VAR_7 &= VAR_0;
  if (VAR_2->first_block_processed)
   FUNC_4(VAR_4, VAR_5, VAR_1->polykey[0], VAR_1->polykey[1],
      VAR_7, VAR_8);
  else
   FUNC_0(VAR_4, VAR_5, VAR_7, VAR_8);
 }


 return FUNC_1(VAR_4, VAR_5, VAR_1->l3key[0], VAR_1->l3key[1], VAR_3 * 8);
}
