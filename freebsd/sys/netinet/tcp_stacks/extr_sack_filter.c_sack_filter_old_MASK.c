
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sackblk {int dummy; } ;
struct sack_filter {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sack_filter*,struct sackblk*) ;
 int FUNC_1 (struct sackblk*,struct sackblk*,int) ;

__attribute__((used)) static int32_t
FUNC_2(struct sack_filter *VAR_3, struct sackblk *VAR_4, int VAR_5)
{
 int32_t VAR_6, VAR_7;
 struct sackblk VAR_8[VAR_0];
 for( VAR_7 = 0, VAR_6 = 0; VAR_7<VAR_5; VAR_7++ ) {
  if (FUNC_0(VAR_3, &VAR_4[VAR_7])) {

   VAR_1++;

   continue;
  }




  FUNC_1(&VAR_8[VAR_6], &VAR_4[VAR_7], sizeof(struct sackblk));

  VAR_2++;

  VAR_6++;
 }
 if (VAR_6) {
  FUNC_1(VAR_4, VAR_8, (VAR_6 * sizeof(struct sackblk)));
 }
 return (VAR_6);
}
