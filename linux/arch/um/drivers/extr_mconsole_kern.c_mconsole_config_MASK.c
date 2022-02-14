
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* data; } ;
struct mc_request {TYPE_1__ request; } ;
struct mc_device {char* name; int (* config ) (char*,char**) ;int get_config; } ;


 struct mc_device* FUNC_0 (char*) ;
 int FUNC_1 (int ,struct mc_request*,char*) ;
 int FUNC_2 (struct mc_request*,char*,int,int ) ;
 char* FUNC_3 (char*) ;
 size_t FUNC_4 (char*) ;
 int FUNC_5 (char*,char**) ;

void FUNC_6(struct mc_request *VAR_0)
{
 struct mc_device *VAR_1;
 char *VAR_2 = VAR_0->request.data, *VAR_3, *VAR_4 = "";
 int VAR_5;

 VAR_2 += FUNC_4("config");
 VAR_2 = FUNC_3(VAR_2);
 VAR_1 = FUNC_0(VAR_2);
 if (VAR_1 == ((void*)0)) {
  FUNC_2(VAR_0, "Bad configuration option", 1, 0);
  return;
 }

 VAR_3 = &VAR_2[FUNC_4(VAR_1->name)];
 VAR_2 = VAR_3;
 while ((*VAR_2 != '=') && (*VAR_2 != '\0'))
  VAR_2++;

 if (*VAR_2 == '=') {
  VAR_5 = (*VAR_1->config)(VAR_3, &VAR_4);
  FUNC_2(VAR_0, VAR_4, VAR_5, 0);
 }
 else FUNC_1(VAR_1->get_config, VAR_0, VAR_3);
}
