
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct ref_transaction {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct object_id const*) ;
 int VAR_0 ;
 int FUNC_2 (struct ref_transaction*,char const*,int *,struct object_id const*,unsigned int,char const*,struct strbuf*) ;

int FUNC_3(struct ref_transaction *VAR_1,
      const char *VAR_2,
      const struct object_id *VAR_3,
      unsigned int VAR_4, const char *VAR_5,
      struct strbuf *VAR_6)
{
 if (VAR_3 && FUNC_1(VAR_3))
  FUNC_0("delete called with old_oid set to zeros");
 return FUNC_2(VAR_1, VAR_2,
          &VAR_0, VAR_3,
          VAR_4, VAR_5, VAR_6);
}
