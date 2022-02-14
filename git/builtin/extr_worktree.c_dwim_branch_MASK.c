
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct object_id {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 int FUNC_3 (struct strbuf*) ;
 char* FUNC_4 (char const*,struct object_id*,int *) ;
 char* FUNC_5 (char const*,int*) ;
 char* FUNC_6 (char const*,int) ;

__attribute__((used)) static const char *FUNC_7(const char *VAR_2, const char **VAR_3)
{
 int VAR_4;
 const char *VAR_5 = FUNC_5(VAR_2, &VAR_4);
 const char *VAR_6 = FUNC_6(VAR_5, VAR_4);
 struct strbuf VAR_7 = VAR_0;

 FUNC_0(VAR_6);
 if (!FUNC_2(&VAR_7, VAR_6) &&
     FUNC_1(VAR_7.buf)) {
  FUNC_3(&VAR_7);
  return VAR_6;
 }

 *VAR_3 = VAR_6;
 if (VAR_1) {
  struct object_id VAR_8;
  const char *VAR_9 =
   FUNC_4(*VAR_3, &VAR_8, ((void*)0));
  return VAR_9;
 }
 return ((void*)0);
}
