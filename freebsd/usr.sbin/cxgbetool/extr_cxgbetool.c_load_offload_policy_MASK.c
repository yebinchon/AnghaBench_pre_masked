
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_offload_policy {int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct t4_offload_policy*) ;
 int FUNC_1 (struct t4_offload_policy*) ;
 int FUNC_2 (char const*,struct t4_offload_policy*) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(int VAR_2, const char *VAR_3[])
{
 int VAR_4 = 0;
 const char *VAR_5 = VAR_3[0];
 struct t4_offload_policy VAR_6 = {0};

 if (VAR_2 != 1) {
  FUNC_4("incorrect number of arguments.");
  return (VAR_1);
 }

 if (!FUNC_3(VAR_5, "clear") || !FUNC_3(VAR_5, "none")) {

  return (FUNC_0(VAR_0, &VAR_6));
 }

 VAR_4 = FUNC_2(VAR_5, &VAR_6);
 if (VAR_4 != 0) {

  return (VAR_1);
 }

 VAR_4 = FUNC_0(VAR_0, &VAR_6);
 FUNC_1(&VAR_6);

 return (VAR_4);
}
