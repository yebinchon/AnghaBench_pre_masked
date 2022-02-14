
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct argv_array {int argv; } ;
struct am_state {int dummy; } ;
typedef int FILE ;


 struct argv_array VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct argv_array*) ;
 int FUNC_2 (struct argv_array*,int ) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char const*,char*) ;
 int FUNC_10 (int ,struct am_state*,int ,int) ;
 int VAR_2 ;
 int FUNC_11 (struct strbuf*,int *) ;
 int FUNC_12 (struct strbuf*) ;
 char* FUNC_13 (char const*) ;

__attribute__((used)) static int FUNC_14(struct am_state *VAR_3, const char **VAR_4,
     int VAR_5)
{
 const char *VAR_6;
 char *VAR_7;
 FILE *VAR_8;
 struct argv_array VAR_9 = VAR_0;
 struct strbuf VAR_10 = VAR_1;
 int VAR_11;

 if (!VAR_4[0] || VAR_4[1])
  return FUNC_4(FUNC_0("Only one StGIT patch series can be applied at once"));

 VAR_7 = FUNC_13(*VAR_4);
 VAR_6 = FUNC_3(VAR_7);

 VAR_8 = FUNC_7(*VAR_4, "r");
 if (!VAR_8)
  return FUNC_5(FUNC_0("could not open '%s' for reading"), *VAR_4);

 while (!FUNC_11(&VAR_10, VAR_8)) {
  if (*VAR_10.buf == '#')
   continue;

  FUNC_2(&VAR_9, FUNC_9("%s/%s", VAR_6, VAR_10.buf));
 }

 FUNC_6(VAR_8);
 FUNC_12(&VAR_10);
 FUNC_8(VAR_7);

 VAR_11 = FUNC_10(VAR_2, VAR_3, VAR_9.argv, VAR_5);

 FUNC_1(&VAR_9);
 return VAR_11;
}
