
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;
struct object_id {int dummy; } ;


 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (struct object_id*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ref_store*,char const*,struct object_id*) ;

__attribute__((used)) static int FUNC_4(struct ref_store *VAR_0, const char **VAR_1)
{
 const char *VAR_2 = FUNC_0(*VAR_1++, "refname");
 struct object_id VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_2, &VAR_3);
 if (!VAR_4)
  FUNC_2(FUNC_1(&VAR_3));
 return VAR_4;
}
