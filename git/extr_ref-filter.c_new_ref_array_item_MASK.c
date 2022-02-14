
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_array_item {int objectname; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct ref_array_item*,char const*,char const*) ;
 int FUNC_1 (int *,struct object_id const*) ;

__attribute__((used)) static struct ref_array_item *FUNC_2(const char *VAR_0,
       const struct object_id *VAR_1)
{
 struct ref_array_item *VAR_2;

 FUNC_0(VAR_2, VAR_0, VAR_0);
 FUNC_1(&VAR_2->objectname, VAR_1);

 return VAR_2;
}
