
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ucl_object_t ;
typedef scalar_t__ u_long ;
typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,int ,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char const*,scalar_t__*,int) ;
 int FUNC_4 (char const*,int const*,char*) ;
 char* FUNC_5 (char const*) ;
 size_t FUNC_6 (char const*) ;
 char* FUNC_7 (char*,char*,char**) ;
 scalar_t__ FUNC_8 (char const*,char**,int) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int const*,char const**) ;

__attribute__((used)) static void
FUNC_11(const char *VAR_2, const ucl_object_t *VAR_3, nvlist_t *VAR_4)
{
 uint8_t VAR_5[VAR_0];
 const char *VAR_6, *VAR_7;
 char *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 size_t VAR_12;
 u_long VAR_13;
 int VAR_14;

 if (!FUNC_10(VAR_3, &VAR_6))
  FUNC_4(VAR_2, VAR_3, "unicast-mac");

 VAR_8 = FUNC_5(VAR_6);
 VAR_9 = VAR_8;

 VAR_14 = 0;
 while ((VAR_7 = FUNC_7(VAR_8, ":", &VAR_10)) != ((void*)0)) {
  VAR_8 = ((void*)0);

  VAR_12 = FUNC_6(VAR_7);
  if (VAR_12 < 1 || VAR_12 > 2)
   FUNC_4(VAR_2, VAR_3, "unicast-mac");

  VAR_13 = FUNC_8(VAR_7, &VAR_11, 16);

  if (*VAR_11 != '\0')
   FUNC_4(VAR_2, VAR_3, "unicast-mac");

  if (VAR_13 > VAR_1)
   FUNC_4(VAR_2, VAR_3, "unicast-mac");

  if (VAR_14 >= VAR_0)
   FUNC_4(VAR_2, VAR_3, "unicast-mac");

  VAR_5[VAR_14] = VAR_13;
  VAR_14++;
 }

 FUNC_2(VAR_9);

 if (VAR_14 != VAR_0)
  FUNC_4(VAR_2, VAR_3, "unicast-mac");

 if (FUNC_0(VAR_5))
  FUNC_1(1, "Value '%s' of key '%s' is a multicast address",
      FUNC_9(VAR_3), VAR_2);

 FUNC_3(VAR_4, VAR_2, VAR_5, VAR_0);
}
