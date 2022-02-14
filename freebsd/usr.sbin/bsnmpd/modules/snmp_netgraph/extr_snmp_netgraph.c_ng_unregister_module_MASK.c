
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msgreg {struct lmodule const* mod; } ;
struct lmodule {int dummy; } ;
struct datareg {struct lmodule const* mod; } ;


 struct msgreg* FUNC_0 (int *) ;
 struct msgreg* FUNC_1 (struct msgreg*,int ) ;
 int FUNC_2 (int *,struct msgreg*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct msgreg*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4(const struct lmodule *VAR_5)
{
 struct msgreg *VAR_6, *VAR_7;
 struct datareg *VAR_8, *VAR_9;

 VAR_6 = FUNC_0(&VAR_4);
 while (VAR_6 != ((void*)0)) {
  VAR_7 = FUNC_1(VAR_6, VAR_2);
  if (VAR_6->mod == VAR_5) {
   FUNC_2(&VAR_4, VAR_6, VAR_3, VAR_2);
   FUNC_3(VAR_6);
  }
  VAR_6 = VAR_7;
 }

 VAR_8 = FUNC_0(&VAR_1);
 while (VAR_8 != ((void*)0)) {
  VAR_9 = FUNC_1(VAR_8, VAR_2);
  if (VAR_8->mod == VAR_5) {
   FUNC_2(&VAR_1, VAR_8, VAR_0, VAR_2);
   FUNC_3(VAR_8);
  }
  VAR_8 = VAR_9;
 }
}
