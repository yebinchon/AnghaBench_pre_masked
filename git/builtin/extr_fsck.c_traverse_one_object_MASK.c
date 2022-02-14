
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct object {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tree*) ;
 int FUNC_1 (struct object*,struct object*,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct object *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2, VAR_2, &VAR_1);

 if (VAR_2->type == VAR_0) {
  struct tree *VAR_4 = (struct tree *)VAR_2;
  FUNC_0(VAR_4);
 }
 return VAR_3;
}
