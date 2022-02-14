
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_config {int dummy; } ;
struct namedobj_instance {int dummy; } ;
struct named_object {int dummy; } ;
struct dump_table_args {int ch; int sd; } ;
typedef int ipfw_xtable_info ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct table_config*,int *) ;
 scalar_t__ FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(struct namedobj_instance *VAR_0, struct named_object *VAR_1,
    void *VAR_2)
{
 ipfw_xtable_info *VAR_3;
 struct dump_table_args *VAR_4;

 VAR_4 = (struct dump_table_args *)VAR_2;

 VAR_3 = (ipfw_xtable_info *)FUNC_2(VAR_4->sd, sizeof(*VAR_3));
 FUNC_0(VAR_3 != ((void*)0), ("previously checked buffer is not enough"));

 FUNC_1(VAR_4->ch, (struct table_config *)VAR_1, VAR_3);
 return (0);
}
