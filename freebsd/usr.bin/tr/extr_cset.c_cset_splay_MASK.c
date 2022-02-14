
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct csnode {struct csnode* csn_left; struct csnode* csn_right; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct csnode*,int ) ;

__attribute__((used)) static struct csnode *
FUNC_2(struct csnode *VAR_0, wchar_t VAR_1)
{
 struct csnode VAR_2, *VAR_3, *VAR_4, *VAR_5;





 FUNC_0(VAR_0 != ((void*)0));

 VAR_2.csn_left = VAR_2.csn_right = ((void*)0);
 VAR_3 = VAR_4 = &VAR_2;
 for (;;) {
  if (FUNC_1(VAR_0, VAR_1) < 0) {
   if (VAR_0->csn_left != ((void*)0) &&
       FUNC_1(VAR_0->csn_left, VAR_1) < 0) {
    VAR_5 = VAR_0->csn_left;
    VAR_0->csn_left = VAR_5->csn_right;
    VAR_5->csn_right = VAR_0;
    VAR_0 = VAR_5;
   }
   if (VAR_0->csn_left == ((void*)0))
    break;
   VAR_4->csn_left = VAR_0;
   VAR_4 = VAR_0;
   VAR_0 = VAR_0->csn_left;
  } else if (FUNC_1(VAR_0, VAR_1) > 0) {
   if (VAR_0->csn_right != ((void*)0) &&
       FUNC_1(VAR_0->csn_right, VAR_1) > 0) {
    VAR_5 = VAR_0->csn_right;
    VAR_0->csn_right = VAR_5->csn_left;
    VAR_5->csn_left = VAR_0;
    VAR_0 = VAR_5;
   }
   if (VAR_0->csn_right == ((void*)0))
    break;
   VAR_3->csn_right = VAR_0;
   VAR_3 = VAR_0;
   VAR_0 = VAR_0->csn_right;
  } else
   break;
 }
 VAR_3->csn_right = VAR_0->csn_left;
 VAR_4->csn_left = VAR_0->csn_right;
 VAR_0->csn_left = VAR_2.csn_right;
 VAR_0->csn_right = VAR_2.csn_left;
 return (VAR_0);
}
