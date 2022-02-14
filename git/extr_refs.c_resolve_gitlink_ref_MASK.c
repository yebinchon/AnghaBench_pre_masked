
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;
struct object_id {int dummy; } ;


 struct ref_store* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (struct object_id*) ;
 int FUNC_2 (struct ref_store*,char const*,int ,struct object_id*,int*) ;

int FUNC_3(const char *VAR_0, const char *VAR_1,
   struct object_id *VAR_2)
{
 struct ref_store *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_0);

 if (!VAR_3)
  return -1;

 if (!FUNC_2(VAR_3, VAR_1, 0, VAR_2, &VAR_4) ||
     FUNC_1(VAR_2))
  return -1;
 return 0;
}
