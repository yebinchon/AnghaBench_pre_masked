
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdar {int options; int v_obj; } ;
struct ar_obj {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct ar_obj*,struct ar_obj*,int ) ;
 int FUNC_1 (struct ar_obj*,struct ar_obj*,int ) ;
 int FUNC_2 (int *,struct ar_obj*,int ) ;
 int FUNC_3 (struct bsdar*,int ,int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct bsdar *VAR_4, struct ar_obj *VAR_5, struct ar_obj *VAR_6)
{
 if (VAR_5 == ((void*)0))
  FUNC_3(VAR_4, VAR_2, 0, "try to insert a null obj");

 if (VAR_6 == ((void*)0) || VAR_5 == VAR_6)




  goto tail;

 if (VAR_4->options & VAR_1) {
  FUNC_1(VAR_6, VAR_5, VAR_3);
  return;
 }
 if (VAR_4->options & VAR_0) {
  FUNC_0(&VAR_4->v_obj, VAR_6, VAR_5, VAR_3);
  return;
 }

tail:
 FUNC_2(&VAR_4->v_obj, VAR_5, VAR_3);

}
