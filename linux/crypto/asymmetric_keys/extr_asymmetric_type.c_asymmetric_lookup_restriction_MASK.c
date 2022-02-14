
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_restriction {int dummy; } ;
typedef struct key_restriction key ;
typedef scalar_t__ key_serial_t ;
typedef int key_restrict_link_func_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct key_restriction* FUNC_0 (struct key_restriction*) ;
 struct key_restriction* FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct key_restriction*) ;
 int VAR_3 ;
 struct key_restriction* FUNC_3 (int ,struct key_restriction*) ;
 struct key_restriction* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct key_restriction*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char const*,int ,int ) ;
 scalar_t__ FUNC_8 (char*,int ,scalar_t__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (char*,char const*) ;
 char* FUNC_10 (char**,char*) ;

__attribute__((used)) static struct key_restriction *FUNC_11(
 const char *VAR_8)
{
 char *VAR_9;
 char *VAR_10;
 char *VAR_11;
 struct key_restriction *VAR_12 = FUNC_1(-VAR_0);

 if (FUNC_9("builtin_trusted", VAR_8) == 0)
  return FUNC_3(
   VAR_5, ((void*)0));

 if (FUNC_9("builtin_and_secondary_trusted", VAR_8) == 0)
  return FUNC_3(
   VAR_4, ((void*)0));

 VAR_10 = FUNC_7(VAR_8, VAR_3, VAR_2);
 if (!VAR_10)
  return FUNC_1(-VAR_1);

 VAR_11 = VAR_10;
 VAR_9 = FUNC_10(&VAR_11, ":");

 if ((FUNC_9(VAR_9, "key_or_keyring") == 0) && VAR_11) {
  char *VAR_13;
  key_serial_t VAR_14;
  struct key *VAR_15;
  key_restrict_link_func_t VAR_16 =
   VAR_6;
  bool VAR_17 = 0;

  VAR_13 = FUNC_10(&VAR_11, ":");

  if (VAR_11) {
   if (FUNC_9(VAR_11, "chain") != 0)
    goto out;

   VAR_16 = VAR_7;
   VAR_17 = 1;
  }

  if (FUNC_8(VAR_13, 0, &VAR_14) < 0)
   goto out;

  if ((VAR_14 == 0) && VAR_17) {
   VAR_15 = ((void*)0);
  } else {
   VAR_15 = FUNC_4(VAR_14);
   if (FUNC_2(VAR_15)) {
    VAR_12 = FUNC_0(VAR_15);
    goto out;
   }
  }

  VAR_12 = FUNC_3(VAR_16, VAR_15);
  if (FUNC_2(VAR_12))
   FUNC_5(VAR_15);
 }

out:
 FUNC_6(VAR_10);
 return VAR_12;
}
