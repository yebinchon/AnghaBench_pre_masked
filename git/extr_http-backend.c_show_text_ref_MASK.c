
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;
struct object {scalar_t__ type; struct object_id const oid; } ;


 scalar_t__ VAR_0 ;
 struct object* FUNC_0 (int ,struct object*,char const*,int ) ;
 int FUNC_1 (struct object_id const*) ;
 struct object* FUNC_2 (int ,struct object_id const*) ;
 int FUNC_3 (struct strbuf*,char*,int ,char const*) ;
 char* FUNC_4 (char const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(const char *VAR_2, const struct object_id *VAR_3,
    int VAR_4, void *VAR_5)
{
 const char *VAR_6 = FUNC_4(VAR_2);
 struct strbuf *VAR_7 = VAR_5;
 struct object *VAR_8 = FUNC_2(VAR_1, VAR_3);
 if (!VAR_8)
  return 0;

 FUNC_3(VAR_7, "%s\t%s\n", FUNC_1(VAR_3), VAR_6);
 if (VAR_8->type == VAR_0) {
  VAR_8 = FUNC_0(VAR_1, VAR_8, VAR_2, 0);
  if (!VAR_8)
   return 0;
  FUNC_3(VAR_7, "%s\t%s^{}\n", FUNC_1(&VAR_8->oid),
       VAR_6);
 }
 return 0;
}
