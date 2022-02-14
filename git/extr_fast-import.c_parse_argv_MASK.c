
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 char** VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 () ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (char const*,char*,char const**) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void)
{
 unsigned int VAR_5;

 for (VAR_5 = 1; VAR_5 < VAR_1; VAR_5++) {
  const char *VAR_6 = VAR_2[VAR_5];

  if (*VAR_6 != '-' || !FUNC_6(VAR_6, "--"))
   break;

  if (!FUNC_5(VAR_6, "--", &VAR_6))
   FUNC_0("unknown option %s", VAR_6);

  if (FUNC_3(VAR_6))
   continue;

  if (FUNC_2(VAR_6, 0))
   continue;

  if (FUNC_5(VAR_6, "cat-blob-fd=", &VAR_6)) {
   FUNC_1(VAR_6);
   continue;
  }

  FUNC_0("unknown option --%s", VAR_6);
 }
 if (VAR_5 != VAR_1)
  FUNC_7(VAR_0);

 VAR_4 = 1;
 if (VAR_3)
  FUNC_4();
}
