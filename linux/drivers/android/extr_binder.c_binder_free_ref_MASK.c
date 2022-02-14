
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_ref {struct binder_ref* death; scalar_t__ node; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct binder_ref*) ;

__attribute__((used)) static void FUNC_2(struct binder_ref *VAR_0)
{
 if (VAR_0->node)
  FUNC_0(VAR_0->node);
 FUNC_1(VAR_0->death);
 FUNC_1(VAR_0);
}
