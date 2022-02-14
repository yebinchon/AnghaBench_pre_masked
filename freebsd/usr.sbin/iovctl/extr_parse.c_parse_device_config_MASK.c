
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
typedef int * ucl_object_iter_t ;
typedef int nvlist_t ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int const*,int *,int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,char const*,...) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 scalar_t__ FUNC_5 (int const*,char const*) ;
 int * FUNC_6 (int const*,char const*) ;
 int FUNC_7 (int *,char const*,int *) ;
 int * FUNC_8 (int const*,int **,int) ;
 char* FUNC_9 (int const*) ;

__attribute__((used)) static void
FUNC_10(const ucl_object_t *VAR_3, nvlist_t *VAR_4,
    const char *VAR_5, const nvlist_t *VAR_6)
{
 ucl_object_iter_t VAR_7;
 const ucl_object_t *VAR_8;
 nvlist_t *VAR_9, *VAR_10, *VAR_11;
 const nvlist_t *VAR_12, *VAR_13;
 const char *VAR_14;

 if (FUNC_4(VAR_4, VAR_5))
  FUNC_2(1, "Multiple definitions of '%s' in config file",
      VAR_5);

 VAR_12 = FUNC_6(VAR_6, VAR_0);
 VAR_13 = FUNC_6(VAR_6, VAR_1);

 VAR_10 = FUNC_3(VAR_2);
 if (VAR_10 == ((void*)0))
  FUNC_1(1, "Could not allocate config nvlist");

 VAR_11 = FUNC_3(VAR_2);
 if (VAR_11 == ((void*)0))
  FUNC_1(1, "Could not allocate config nvlist");

 VAR_9 = FUNC_3(VAR_2);
 if (VAR_9 == ((void*)0))
  FUNC_1(1, "Could not allocate config nvlist");

 VAR_7 = ((void*)0);
 while ((VAR_8 = FUNC_8(VAR_3, &VAR_7, 1)) != ((void*)0)) {
  VAR_14 = FUNC_9(VAR_8);

  if (FUNC_5(VAR_13, VAR_14))
   FUNC_0(VAR_14, VAR_8, VAR_11,
       FUNC_6(VAR_13, VAR_14));
  else if (FUNC_5(VAR_12, VAR_14))
   FUNC_0(VAR_14, VAR_8, VAR_10,
       FUNC_6(VAR_12, VAR_14));
  else
   FUNC_2(1, "%s: Invalid config key '%s'", VAR_5, VAR_14);
 }

 FUNC_7(VAR_9, VAR_0, VAR_10);
 FUNC_7(VAR_9, VAR_1, VAR_11);
 FUNC_7(VAR_4, VAR_5, VAR_9);
}
