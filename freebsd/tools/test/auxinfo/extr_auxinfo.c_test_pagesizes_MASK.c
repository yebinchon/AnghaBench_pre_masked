
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intmax_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (size_t*,int) ;
 size_t* FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(void)
{
 size_t *VAR_0;
 int VAR_1, VAR_2;

 VAR_2 = FUNC_1(((void*)0), 0);
 if (VAR_2 == -1)
  FUNC_0(1, "getpagesizes(NULL, 0)");
 VAR_0 = FUNC_2(VAR_2 * sizeof(size_t));
 if (VAR_0 == ((void*)0))
  FUNC_0(1, "malloc");
 VAR_2 = FUNC_1(VAR_0, VAR_2);
 if (VAR_2 == -1)
  FUNC_0(1, "getpagesizes");
 FUNC_3("Supported page sizes:");
 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
  FUNC_3(" %jd", (intmax_t)VAR_0[VAR_1]);
 FUNC_3("\n");
}
