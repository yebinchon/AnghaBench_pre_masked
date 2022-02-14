
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reginit_item {int reg; int val; } ;
struct fs_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct fs_dev*,int,int) ;

__attribute__((used)) static int FUNC_3(struct fs_dev *VAR_2, struct reginit_item *VAR_3)
{
 int VAR_4;

 FUNC_0 ();
 while (VAR_3->reg != VAR_1) {
  if (VAR_3->reg == VAR_0) {

   for (VAR_4=0;VAR_4<VAR_3->val;VAR_4++) {
    FUNC_2 (VAR_2, VAR_4, 0);
   }
  } else {
   FUNC_2 (VAR_2, VAR_3->reg, VAR_3->val);
  }
  VAR_3++;
 }
 FUNC_1 ();
 return 0;
}
