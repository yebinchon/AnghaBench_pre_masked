
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pport {int pp_ports; int pp_ctl_port; int pp_name; struct conf* pp_conf; } ;
struct conf {int conf_pports; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct pport*,int ) ;
 struct pport* FUNC_2 (int,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int,char*) ;
 int VAR_0 ;

struct pport *
FUNC_5(struct conf *VAR_1, const char *VAR_2, uint32_t VAR_3)
{
 struct pport *VAR_4;

 VAR_4 = FUNC_2(1, sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  FUNC_4(1, "calloc");
 VAR_4->pp_conf = VAR_1;
 VAR_4->pp_name = FUNC_3(VAR_2);
 VAR_4->pp_ctl_port = VAR_3;
 FUNC_0(&VAR_4->pp_ports);
 FUNC_1(&VAR_1->conf_pports, VAR_4, VAR_0);
 return (VAR_4);
}
