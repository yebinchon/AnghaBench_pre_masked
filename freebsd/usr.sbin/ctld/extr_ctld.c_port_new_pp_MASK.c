
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {int t_ports; int t_name; } ;
struct pport {int pp_ports; int pp_name; } ;
struct port {char* p_name; struct pport* p_pport; struct target* p_target; struct conf* p_conf; } ;
struct conf {int conf_ports; } ;


 int FUNC_0 (int *,struct port*,int ) ;
 int FUNC_1 (char**,char*,int ,int ) ;
 struct port* FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_6 (struct conf*,char*) ;

struct port *
FUNC_7(struct conf *VAR_3, struct target *VAR_4, struct pport *VAR_5)
{
 struct port *VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(&VAR_7, "%d-%d", VAR_5->pp_name, VAR_4->t_name);
 if (VAR_8 <= 0)
  FUNC_4(1, "asprintf");
 if (FUNC_6(VAR_3, VAR_7) != ((void*)0)) {
  FUNC_5("duplicate port \"%s\"", VAR_7);
  FUNC_3(VAR_7);
  return (((void*)0));
 }
 VAR_6 = FUNC_2(1, sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  FUNC_4(1, "calloc");
 VAR_6->p_conf = VAR_3;
 VAR_6->p_name = VAR_7;
 FUNC_0(&VAR_3->conf_ports, VAR_6, VAR_0);
 FUNC_0(&VAR_4->t_ports, VAR_6, VAR_2);
 VAR_6->p_target = VAR_4;
 FUNC_0(&VAR_5->pp_ports, VAR_6, VAR_1);
 VAR_6->p_pport = VAR_5;
 return (VAR_6);
}
