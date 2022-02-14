
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {int dummy; } ;
struct add_alternate_refs_data {int revs; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct object*,char const*) ;
 int FUNC_1 (int ,struct object*,char const*,int ,int ) ;
 struct object* FUNC_2 (int ,char const*,struct object_id const*,int ) ;

__attribute__((used)) static void FUNC_3(const struct object_id *VAR_1,
      void *VAR_2)
{
 const char *VAR_3 = ".alternate";
 struct add_alternate_refs_data *VAR_4 = VAR_2;
 struct object *VAR_5;

 VAR_5 = FUNC_2(VAR_4->revs, VAR_3, VAR_1, VAR_4->flags);
 FUNC_1(VAR_4->revs, VAR_5, VAR_3, VAR_0, VAR_4->flags);
 FUNC_0(VAR_4->revs, VAR_5, VAR_3);
}
