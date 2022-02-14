
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sack_filter {size_t sf_cur; int * sf_blks; } ;
typedef size_t int32_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct sack_filter*,size_t) ;
 size_t FUNC_1 (struct sack_filter*,int *,size_t) ;
 int FUNC_2 (struct sack_filter*,size_t,size_t) ;

__attribute__((used)) static void
FUNC_3(struct sack_filter *VAR_1)
{
 int32_t VAR_2, VAR_3, VAR_4, VAR_5;

 for(VAR_2=0; VAR_2<VAR_0; VAR_2++) {
  if (FUNC_0(VAR_1, VAR_2) == 0)
   continue;





  VAR_3 = FUNC_1(VAR_1, &VAR_1->sf_blks[VAR_2], VAR_2);
  if (VAR_3 == -1) {

   continue;
  }




  if (VAR_1->sf_cur > VAR_2)
   VAR_4 = VAR_1->sf_cur - VAR_2;
  else
   VAR_4 = VAR_2 - VAR_1->sf_cur;
  if (VAR_1->sf_cur > VAR_3)
   VAR_5 = VAR_1->sf_cur - VAR_3;
  else
   VAR_5 = VAR_3 - VAR_1->sf_cur;
  if (VAR_5 > VAR_4) {
   FUNC_2(VAR_1, VAR_3, VAR_2);
  } else
   FUNC_2(VAR_1, VAR_2, VAR_3);
 }
}
