
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 char* FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ref_store*,char const*,char const*,struct object_id*,struct object_id*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct ref_store *VAR_1, const char **VAR_2)
{
 const char *VAR_3 = FUNC_3(*VAR_2++, "msg");
 const char *VAR_4 = FUNC_3(*VAR_2++, "refname");
 const char *VAR_5 = FUNC_3(*VAR_2++, "new-sha1");
 const char *VAR_6 = FUNC_3(*VAR_2++, "old-sha1");
 unsigned int VAR_7 = FUNC_0(*VAR_2++, "flags");
 struct object_id VAR_8;
 struct object_id VAR_9;

 if (FUNC_2(VAR_6, &VAR_8) ||
     FUNC_2(VAR_5, &VAR_9))
  FUNC_1("not sha-1");

 return FUNC_4(VAR_1, VAR_3, VAR_4,
          &VAR_9, &VAR_8,
          VAR_7, VAR_0);
}
