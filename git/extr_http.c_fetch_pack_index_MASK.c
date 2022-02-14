
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_1 (struct strbuf*,char const*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (unsigned char*) ;
 scalar_t__ FUNC_6 (char*,char*,int *) ;
 scalar_t__ VAR_2 ;
 char* FUNC_7 (unsigned char*) ;
 int VAR_3 ;
 int FUNC_8 (struct strbuf*,char*,char*) ;
 char* FUNC_9 (struct strbuf*,int *) ;

__attribute__((used)) static char *FUNC_10(unsigned char *VAR_4, const char *VAR_5)
{
 char *VAR_6, *VAR_7;
 struct strbuf VAR_8 = VAR_1;

 if (VAR_2)
  FUNC_3(VAR_3, "Getting index for pack %s\n", FUNC_5(VAR_4));

 FUNC_1(&VAR_8, VAR_5);
 FUNC_8(&VAR_8, "objects/pack/pack-%s.idx", FUNC_5(VAR_4));
 VAR_6 = FUNC_9(&VAR_8, ((void*)0));

 FUNC_8(&VAR_8, "%s.temp", FUNC_7(VAR_4));
 VAR_7 = FUNC_9(&VAR_8, ((void*)0));

 if (FUNC_6(VAR_6, VAR_7, ((void*)0)) != VAR_0) {
  FUNC_2("Unable to get pack index %s", VAR_6);
  FUNC_0(VAR_7);
 }

 FUNC_4(VAR_6);
 return VAR_7;
}
