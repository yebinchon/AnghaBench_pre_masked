
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sackblk {int dummy; } ;
struct sack_filter {int sf_bits; int * sf_blks; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct sack_filter*,int) ;
 int FUNC_2 (struct sack_filter*,int) ;
 scalar_t__ FUNC_3 (struct sack_filter*,int) ;

__attribute__((used)) static void
FUNC_4(struct sack_filter *VAR_1, uint32_t VAR_2)
{
 int32_t VAR_3, VAR_4;

 VAR_3 = (VAR_2 + 1) % VAR_0;
 for (VAR_4=0; VAR_4 <(VAR_0-1); VAR_4++) {
  if (FUNC_3(VAR_1, VAR_3) == 0) {
   FUNC_0(&VAR_1->sf_blks[VAR_3], &VAR_1->sf_blks[VAR_2], sizeof(struct sackblk));
   VAR_1->sf_bits = FUNC_1(VAR_1, VAR_2);
   VAR_1->sf_bits = FUNC_2(VAR_1, VAR_3);
   return;
  }
  VAR_3++;
  VAR_3 %= VAR_0;
 }
}
