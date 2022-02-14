
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wint_t ;
struct cmapnode {scalar_t__ cmn_from; struct cmapnode* cmn_left; struct cmapnode* cmn_right; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static struct cmapnode *
FUNC_1(struct cmapnode *VAR_0, wint_t VAR_1)
{
 struct cmapnode VAR_2, *VAR_3, *VAR_4, *VAR_5;





 FUNC_0(VAR_0 != ((void*)0));

 VAR_2.cmn_left = VAR_2.cmn_right = ((void*)0);
 VAR_3 = VAR_4 = &VAR_2;
 for (;;) {
  if (VAR_1 < VAR_0->cmn_from) {
   if (VAR_0->cmn_left != ((void*)0) &&
       VAR_1 < VAR_0->cmn_left->cmn_from) {
    VAR_5 = VAR_0->cmn_left;
    VAR_0->cmn_left = VAR_5->cmn_right;
    VAR_5->cmn_right = VAR_0;
    VAR_0 = VAR_5;
   }
   if (VAR_0->cmn_left == ((void*)0))
    break;
   VAR_4->cmn_left = VAR_0;
   VAR_4 = VAR_0;
   VAR_0 = VAR_0->cmn_left;
  } else if (VAR_1 > VAR_0->cmn_from) {
   if (VAR_0->cmn_right != ((void*)0) &&
       VAR_1 > VAR_0->cmn_right->cmn_from) {
    VAR_5 = VAR_0->cmn_right;
    VAR_0->cmn_right = VAR_5->cmn_left;
    VAR_5->cmn_left = VAR_0;
    VAR_0 = VAR_5;
   }
   if (VAR_0->cmn_right == ((void*)0))
    break;
   VAR_3->cmn_right = VAR_0;
   VAR_3 = VAR_0;
   VAR_0 = VAR_0->cmn_right;
  } else
   break;
 }
 VAR_3->cmn_right = VAR_0->cmn_left;
 VAR_4->cmn_left = VAR_0->cmn_right;
 VAR_0->cmn_left = VAR_2.cmn_right;
 VAR_0->cmn_right = VAR_2.cmn_left;
 return (VAR_0);
}
