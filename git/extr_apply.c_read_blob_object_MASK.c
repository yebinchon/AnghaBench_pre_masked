
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (struct object_id const*) ;
 char* FUNC_2 (struct object_id const*,int*,unsigned long*) ;
 int FUNC_3 (struct strbuf*,char*,int ) ;
 int FUNC_4 (struct strbuf*,char*,unsigned long,unsigned long) ;
 int FUNC_5 (struct strbuf*,int) ;

__attribute__((used)) static int FUNC_6(struct strbuf *VAR_0, const struct object_id *VAR_1, unsigned VAR_2)
{
 if (FUNC_0(VAR_2)) {
  FUNC_5(VAR_0, 100);
  FUNC_3(VAR_0, "Subproject commit %s\n", FUNC_1(VAR_1));
 } else {
  enum object_type VAR_3;
  unsigned long VAR_4;
  char *VAR_5;

  VAR_5 = FUNC_2(VAR_1, &VAR_3, &VAR_4);
  if (!VAR_5)
   return -1;

  FUNC_4(VAR_0, VAR_5, VAR_4, VAR_4 + 1);
 }
 return 0;
}
