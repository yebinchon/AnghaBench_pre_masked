
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr2_dst {int initialized; int fd; int sysenv_var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char const*,int ) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (struct tr2_dst*,char const*) ;
 int FUNC_9 (struct tr2_dst*) ;
 int FUNC_10 (struct tr2_dst*,char const*) ;
 int FUNC_11 (struct tr2_dst*,char const*) ;
 int FUNC_12 (struct tr2_dst*,char const*) ;
 char* FUNC_13 (int ) ;

int FUNC_14(struct tr2_dst *VAR_2)
{
 const char *VAR_3;


 if (VAR_2->initialized)
  return VAR_2->fd;

 VAR_2->initialized = 1;

 VAR_3 = FUNC_13(VAR_2->sysenv_var);

 if (!VAR_3 || !FUNC_6(VAR_3, "") || !FUNC_6(VAR_3, "0") ||
     !FUNC_5(VAR_3, "false")) {
  VAR_2->fd = 0;
  return VAR_2->fd;
 }

 if (!FUNC_6(VAR_3, "1") || !FUNC_5(VAR_3, "true")) {
  VAR_2->fd = VAR_1;
  return VAR_2->fd;
 }

 if (FUNC_7(VAR_3) == 1 && FUNC_3(*VAR_3)) {
  VAR_2->fd = FUNC_0(VAR_3);
  return VAR_2->fd;
 }

 if (FUNC_1(VAR_3)) {
  if (FUNC_2(VAR_3))
   return FUNC_10(VAR_2, VAR_3);
  else
   return FUNC_11(VAR_2, VAR_3);
 }


 if (FUNC_4(VAR_3, VAR_0))
  return FUNC_12(VAR_2, VAR_3);



 FUNC_8(VAR_2, VAR_3);
 FUNC_9(VAR_2);
 return 0;
}
