
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcblbgrouphead {int dummy; } ;
struct inpcblbgroup {int il_inpcnt; int il_inpsiz; int * il_inp; } ;


 int VAR_0 ;
 struct inpcblbgroup* FUNC_0 (struct inpcblbgrouphead*,struct inpcblbgroup*,int) ;

__attribute__((used)) static void
FUNC_1(struct inpcblbgrouphead *VAR_1, struct inpcblbgroup **VAR_2,
    int VAR_3)
{
 struct inpcblbgroup *VAR_4, *VAR_5;

 VAR_4 = *VAR_2;
 for (; VAR_3 + 1 < VAR_4->il_inpcnt; ++VAR_3)
  VAR_4->il_inp[VAR_3] = VAR_4->il_inp[VAR_3 + 1];
 VAR_4->il_inpcnt--;

 if (VAR_4->il_inpsiz > VAR_0 &&
     VAR_4->il_inpcnt <= VAR_4->il_inpsiz / 4) {

  VAR_5 = FUNC_0(VAR_1, VAR_4, VAR_4->il_inpsiz / 2);
  if (VAR_5 != ((void*)0))
   *VAR_2 = VAR_5;
 }
}
