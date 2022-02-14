
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isns {int i_addr; int i_ai; struct conf* i_conf; } ;
struct conf {int conf_isns; } ;


 int FUNC_0 (int *,struct isns*,int ) ;
 struct isns* FUNC_1 (int,int) ;
 int FUNC_2 (char const*) ;
 int VAR_0 ;
 int FUNC_3 (struct isns*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int ,char*,int *) ;

int
FUNC_7(struct conf *VAR_1, const char *VAR_2)
{
 struct isns *VAR_3;

 VAR_3 = FUNC_1(1, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  FUNC_4(1, "calloc");
 VAR_3->i_conf = VAR_1;
 FUNC_0(&VAR_1->conf_isns, VAR_3, VAR_0);
 VAR_3->i_addr = FUNC_2(VAR_2);

 if (FUNC_6(VAR_3->i_addr, "3205", &VAR_3->i_ai)) {
  FUNC_5("invalid iSNS address %s", VAR_3->i_addr);
  FUNC_3(VAR_3);
  return (1);
 }






 return (0);
}
