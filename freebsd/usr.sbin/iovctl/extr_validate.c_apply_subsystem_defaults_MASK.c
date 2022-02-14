
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;







 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *,char const*,void const*,size_t) ;
 int FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *,char const*,int ) ;
 int FUNC_4 (int *,char const*,int *) ;
 int FUNC_5 (int *,char const*,int ) ;
 scalar_t__ FUNC_6 (int *,char const*) ;
 void* FUNC_7 (int const*,char const*,size_t*) ;
 int FUNC_8 (int const*,char const*) ;
 int FUNC_9 (int const*,char const*) ;
 int * FUNC_10 (int const*,char const*) ;
 int FUNC_11 (int const*,char const*) ;
 int FUNC_12 (int *,char const*,int *) ;
 char* FUNC_13 (int const*,int*,void**) ;
 int * FUNC_14 (int *,char const*) ;

__attribute__((used)) static void
FUNC_15(nvlist_t *VAR_0, const char *VAR_1,
    const nvlist_t *VAR_2)
{
 nvlist_t *VAR_3;
 const nvlist_t *VAR_4;
 const char *VAR_5;
 void *VAR_6;
 size_t VAR_7;
 const void *VAR_8;
 int VAR_9;

 VAR_3 = FUNC_14(VAR_0, VAR_1);
 VAR_4 = FUNC_10(VAR_2, VAR_1);

 VAR_6 = ((void*)0);
 while ((VAR_5 = FUNC_13(VAR_4, &VAR_9, &VAR_6)) != ((void*)0)) {
  if (FUNC_6(VAR_3, VAR_5))
   continue;

  switch (VAR_9) {
  case 131:
   FUNC_2(VAR_3, VAR_5,
       FUNC_8(VAR_4, VAR_5));
   break;
  case 130:
   FUNC_3(VAR_3, VAR_5,
       FUNC_9(VAR_4, VAR_5));
   break;
  case 128:
   FUNC_5(VAR_3, VAR_5,
       FUNC_11(VAR_4, VAR_5));
   break;
  case 129:
   FUNC_4(VAR_3, VAR_5,
       FUNC_10(VAR_4, VAR_5));
   break;
  case 132:
   VAR_8 = FUNC_7(VAR_4, VAR_5, &VAR_7);
   FUNC_1(VAR_3, VAR_5, VAR_8, VAR_7);
   break;
  default:
   FUNC_0(1, "Unexpected type '%d'", VAR_9);
  }
 }
 FUNC_12(VAR_0, VAR_1, VAR_3);
}
