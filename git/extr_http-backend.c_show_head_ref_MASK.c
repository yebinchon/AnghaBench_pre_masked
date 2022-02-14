
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct object_id const*) ;
 char* FUNC_1 (char const*,int ,int *,int *) ;
 int FUNC_2 (struct strbuf*,char*,int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, const struct object_id *VAR_3,
    int VAR_4, void *VAR_5)
{
 struct strbuf *VAR_6 = VAR_5;

 if (VAR_4 & VAR_0) {
  const char *VAR_7 = FUNC_1(VAR_2,
       VAR_1,
       ((void*)0), ((void*)0));

  if (VAR_7)
   FUNC_2(VAR_6, "ref: %s\n", FUNC_3(VAR_7));
 } else {
  FUNC_2(VAR_6, "%s\n", FUNC_0(VAR_3));
 }

 return 0;
}
