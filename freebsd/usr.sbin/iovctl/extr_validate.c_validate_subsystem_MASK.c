
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int ,int) ;
 int FUNC_1 (int,char*,char const*,char const*) ;
 int FUNC_2 (int const*,char const*) ;
 int * FUNC_3 (int const*,char const*) ;
 char* FUNC_4 (int const*,int*,void**) ;

__attribute__((used)) static void
FUNC_5(const nvlist_t *VAR_1, const nvlist_t *VAR_2,
    const char *VAR_3, const char *VAR_4)
{
 const nvlist_t *VAR_5, *VAR_6, *VAR_7;
 const char *VAR_8;
 void *VAR_9;
 int VAR_10;

 VAR_5 = FUNC_3(VAR_1, VAR_3);
 VAR_6 = FUNC_3(VAR_2, VAR_3);

 VAR_9 = ((void*)0);
 while ((VAR_8 = FUNC_4(VAR_6, &VAR_10, &VAR_9)) != ((void*)0)) {
  VAR_7 = FUNC_3(VAR_6, VAR_8);

  if (FUNC_0(VAR_7, VAR_0, 0)) {
   if (!FUNC_2(VAR_5, VAR_8))
    FUNC_1(1,
        "Required parameter '%s' not found in '%s'",
        VAR_8, VAR_4);
  }
 }
}
