
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_list {int dummy; } ;
struct object {int flags; } ;
struct blob {struct object object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct object_list** FUNC_0 (struct object*,struct object_list**) ;

__attribute__((used)) static struct object_list **FUNC_1(struct blob *VAR_3,
      struct object_list **VAR_4)
{
 struct object *VAR_5 = &VAR_3->object;

 VAR_5->flags |= VAR_0;

 if (VAR_5->flags & (VAR_2 | VAR_1))
  return VAR_4;

 VAR_5->flags |= VAR_1;
 return FUNC_0(VAR_5, VAR_4);
}
