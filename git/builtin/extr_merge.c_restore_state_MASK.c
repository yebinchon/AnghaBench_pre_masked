
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 scalar_t__ FUNC_0 (struct object_id const*) ;
 char* FUNC_1 (struct object_id const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct object_id const*,int) ;
 int FUNC_4 (char const**,int ) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(const struct object_id *VAR_3,
     const struct object_id *VAR_4)
{
 struct strbuf VAR_5 = VAR_2;
 const char *VAR_6[] = { "stash", "apply", ((void*)0), ((void*)0) };

 if (FUNC_0(VAR_4))
  return;

 FUNC_3(VAR_3, 1);

 VAR_6[2] = FUNC_1(VAR_4);





 FUNC_4(VAR_6, VAR_1);

 FUNC_5(&VAR_5);
 FUNC_2(VAR_0);
}
