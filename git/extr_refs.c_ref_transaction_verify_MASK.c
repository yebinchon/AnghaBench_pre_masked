
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct ref_transaction {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ref_transaction*,char const*,int *,struct object_id const*,unsigned int,int *,struct strbuf*) ;

int FUNC_2(struct ref_transaction *VAR_0,
      const char *VAR_1,
      const struct object_id *VAR_2,
      unsigned int VAR_3,
      struct strbuf *VAR_4)
{
 if (!VAR_2)
  FUNC_0("verify called with old_oid set to NULL");
 return FUNC_1(VAR_0, VAR_1,
          ((void*)0), VAR_2,
          VAR_3, ((void*)0), VAR_4);
}
