
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_config {scalar_t__ rejectable; int cmdlist; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3(struct event_config *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_1(VAR_1->cmdlist);
 if (VAR_2 && VAR_1->rejectable) {
  FUNC_2(VAR_0, "canceled");
  FUNC_0(((void*)0));
 }
 return VAR_2;
}
