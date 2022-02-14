
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {int t_ports; int t_name; } ;
struct pport {int dummy; } ;
struct port {char* p_name; int p_ioctl_port; int p_ioctl_pp; int p_ioctl_vp; struct target* p_target; struct conf* p_conf; } ;
struct conf {int conf_ports; } ;


 int FUNC_0 (int *,struct port*,int ) ;
 int FUNC_1 (char**,char*,...) ;
 struct port* FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_6 (struct conf*,char*) ;
 struct port* FUNC_7 (struct conf*,struct target*,struct pport*) ;
 struct pport* FUNC_8 (struct conf*,char*) ;

struct port *
FUNC_9(struct conf *VAR_2, struct target *VAR_3, int VAR_4, int VAR_5)
{
 struct pport *VAR_6;
 struct port *VAR_7;
 char *VAR_8;
 char *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(&VAR_8, "ioctl/%d/%d", VAR_4, VAR_5);
 if (VAR_10 <= 0) {
  FUNC_4(1, "asprintf");
  return (((void*)0));
 }

 VAR_6 = FUNC_8(VAR_2, VAR_8);
 if (VAR_6 != ((void*)0)) {
  FUNC_3(VAR_8);
  return (FUNC_7(VAR_2, VAR_3, VAR_6));
 }

 VAR_10 = FUNC_1(&VAR_9, "%s-%d", VAR_8, VAR_3->t_name);
 FUNC_3(VAR_8);

 if (VAR_10 <= 0)
  FUNC_4(1, "asprintf");
 if (FUNC_6(VAR_2, VAR_9) != ((void*)0)) {
  FUNC_5("duplicate port \"%s\"", VAR_9);
  FUNC_3(VAR_9);
  return (((void*)0));
 }
 VAR_7 = FUNC_2(1, sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  FUNC_4(1, "calloc");
 VAR_7->p_conf = VAR_2;
 VAR_7->p_name = VAR_9;
 VAR_7->p_ioctl_port = 1;
 VAR_7->p_ioctl_pp = VAR_4;
 VAR_7->p_ioctl_vp = VAR_5;
 FUNC_0(&VAR_2->conf_ports, VAR_7, VAR_0);
 FUNC_0(&VAR_3->t_ports, VAR_7, VAR_1);
 VAR_7->p_target = VAR_3;
 return (VAR_7);
}
