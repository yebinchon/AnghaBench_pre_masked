
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lz_range_decoder {int dummy; } ;
struct lz_len_model {int bm_high; int * bm_mid; int choice2; int * bm_low; int choice1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct lz_range_decoder*,int *) ;
 int FUNC_1 (struct lz_range_decoder*,int ,int ) ;

__attribute__((used)) static unsigned
FUNC_2(struct lz_range_decoder *VAR_5, struct lz_len_model *VAR_6,
    int VAR_7)
{
 if (FUNC_0(VAR_5, &VAR_6->choice1) == 0)
  return FUNC_1(VAR_5, VAR_6->bm_low[VAR_7], VAR_1);

 if (FUNC_0(VAR_5, &VAR_6->choice2) == 0) {
  return VAR_2 +
      FUNC_1(VAR_5, VAR_6->bm_mid[VAR_7], VAR_3);
 }

 return VAR_2 + VAR_4 +
           FUNC_1(VAR_5, VAR_6->bm_high, VAR_0);
}
