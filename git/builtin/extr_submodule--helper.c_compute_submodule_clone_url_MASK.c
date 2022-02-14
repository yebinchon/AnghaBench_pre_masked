
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,char**) ;
 char* FUNC_4 (char*,char const*,int *) ;
 int FUNC_5 (struct strbuf*,char*,char*) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (int ,int ) ;
 char* FUNC_8 () ;

__attribute__((used)) static char *FUNC_9(const char *VAR_1)
{
 char *VAR_2, *VAR_3;
 char *VAR_4 = FUNC_2();
 struct strbuf VAR_5 = VAR_0;

 FUNC_5(&VAR_5, "remote.%s.url", VAR_4);
 if (FUNC_3(VAR_5.buf, &VAR_2)) {
  FUNC_7(FUNC_0("could not look up configuration '%s'. Assuming this repository is its own authoritative upstream."), VAR_5.buf);
  VAR_2 = FUNC_8();
 }
 VAR_3 = FUNC_4(VAR_2, VAR_1, ((void*)0));

 FUNC_1(VAR_4);
 FUNC_1(VAR_2);
 FUNC_6(&VAR_5);

 return VAR_3;
}
