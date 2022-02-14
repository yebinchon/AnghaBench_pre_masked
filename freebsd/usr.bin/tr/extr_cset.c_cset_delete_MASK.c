
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct csnode {struct csnode* csn_right; struct csnode* csn_left; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct csnode*,int ) ;
 struct csnode* FUNC_2 (struct csnode*,int ) ;
 int FUNC_3 (struct csnode*) ;

__attribute__((used)) static struct csnode *
FUNC_4(struct csnode *VAR_0, wchar_t VAR_1)
{
 struct csnode *VAR_2;

 FUNC_0(VAR_0 != ((void*)0));
 VAR_0 = FUNC_2(VAR_0, VAR_1);
 FUNC_0(FUNC_1(VAR_0, VAR_1) == 0);
 if (VAR_0->csn_left == ((void*)0))
  VAR_2 = VAR_0->csn_right;
 else {
  VAR_2 = FUNC_2(VAR_0->csn_left, VAR_1);
  VAR_2->csn_right = VAR_0->csn_right;
 }
 FUNC_3(VAR_0);
 return VAR_2;
}
