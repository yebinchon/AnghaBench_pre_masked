
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int dummy; } ;
struct object_id {int dummy; } ;
struct object {int flags; } ;


 int VAR_0 ;
 struct object* FUNC_0 (int ,struct object_id const*) ;
 int FUNC_1 (struct rev_info*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const struct object_id *VAR_2,
          struct rev_info *VAR_3)
{
 struct object *VAR_4;

 FUNC_1(VAR_3);

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 return VAR_4 && (VAR_4->flags & VAR_0);
}
