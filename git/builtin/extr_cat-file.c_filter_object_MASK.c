
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {unsigned long len; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char const*,char*,unsigned long,struct strbuf*) ;
 int FUNC_3 (int ,int ,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct object_id const*) ;
 char* FUNC_6 (struct object_id const*,int*,unsigned long*) ;
 char* FUNC_7 (struct strbuf*,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(const char *VAR_3, unsigned VAR_4,
    const struct object_id *VAR_5,
    char **VAR_6, unsigned long *VAR_7)
{
 enum object_type VAR_8;

 *VAR_6 = FUNC_6(VAR_5, &VAR_8, VAR_7);
 if (!*VAR_6)
  return FUNC_3(FUNC_1("cannot read object %s '%s'"),
        FUNC_5(VAR_5), VAR_3);
 if ((VAR_8 == VAR_0) && FUNC_0(VAR_4)) {
  struct strbuf VAR_9 = VAR_1;
  if (FUNC_2(&VAR_2, VAR_3, *VAR_6, *VAR_7, &VAR_9)) {
   FUNC_4(*VAR_6);
   *VAR_7 = VAR_9.len;
   *VAR_6 = FUNC_7(&VAR_9, ((void*)0));
  }
 }

 return 0;
}
