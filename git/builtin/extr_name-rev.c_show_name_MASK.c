
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;
struct object {struct object_id oid; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (struct object_id const*,int ) ;
 char* FUNC_2 (struct object const*,struct strbuf*) ;
 char* FUNC_3 (struct object_id const*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(const struct object *VAR_2,
        const char *VAR_3,
        int VAR_4, int VAR_5, int VAR_6)
{
 const char *VAR_7;
 const struct object_id *VAR_8 = &VAR_2->oid;
 struct strbuf VAR_9 = VAR_1;

 if (!VAR_6)
  FUNC_4("%s ", VAR_3 ? VAR_3 : FUNC_3(VAR_8));
 VAR_7 = FUNC_2(VAR_2, &VAR_9);
 if (VAR_7)
  FUNC_4("%s\n", VAR_7);
 else if (VAR_5)
  FUNC_4("undefined\n");
 else if (VAR_4)
  FUNC_4("%s\n", FUNC_1(VAR_8, VAR_0));
 else
  FUNC_0("cannot describe '%s'", FUNC_3(VAR_8));
 FUNC_5(&VAR_9);
}
