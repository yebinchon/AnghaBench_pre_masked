
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enum_pairs {int dummy; } ;
struct enum_pair {int enum_val; int * enum_str; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct enum_pairs*,struct enum_pair*,int ) ;
 struct enum_pair* FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (struct enum_pair*) ;
 int VAR_2 ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;

int32_t
FUNC_6(struct enum_pairs *VAR_3, int32_t VAR_4, char *VAR_5)
{
 struct enum_pair *VAR_6;

 if ((VAR_6 = FUNC_1(1, sizeof(struct enum_pair))) == ((void*)0)) {
  FUNC_5(VAR_0, "calloc() failed: %s", FUNC_4(VAR_1));
  return (-1);
 }

 if ((VAR_6->enum_str = FUNC_3(VAR_5)) == ((void*)0)) {
  FUNC_5(VAR_0, "strdup() failed: %s", FUNC_4(VAR_1));
  FUNC_2(VAR_6);
  return (-1);
 }

 VAR_6->enum_val = VAR_4;
 FUNC_0(VAR_3, VAR_6, VAR_2);

 return (1);

}
