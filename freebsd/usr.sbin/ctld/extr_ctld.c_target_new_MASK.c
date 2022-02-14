
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {int t_ports; struct conf* t_conf; int * t_name; } ;
struct conf {int conf_targets; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct target*,int ) ;
 struct target* FUNC_2 (int,int) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*) ;
 int VAR_0 ;
 struct target* FUNC_7 (struct conf*,char const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char const*) ;

struct target *
FUNC_10(struct conf *VAR_1, const char *VAR_2)
{
 struct target *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = FUNC_7(VAR_1, VAR_2);
 if (VAR_3 != ((void*)0)) {
  FUNC_5("duplicated target \"%s\"", VAR_2);
  return (((void*)0));
 }
 if (FUNC_9(VAR_2) == 0) {
  FUNC_5("target name \"%s\" is invalid", VAR_2);
  return (((void*)0));
 }
 VAR_3 = FUNC_2(1, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  FUNC_4(1, "calloc");
 VAR_3->t_name = FUNC_3(VAR_2);




 VAR_5 = FUNC_6(VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  VAR_3->t_name[VAR_4] = FUNC_8(VAR_3->t_name[VAR_4]);

 VAR_3->t_conf = VAR_1;
 FUNC_0(&VAR_3->t_ports);
 FUNC_1(&VAR_1->conf_targets, VAR_3, VAR_0);

 return (VAR_3);
}
