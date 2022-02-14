
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stp_policy {TYPE_2__* stm; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* pdrv; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (char*,char*,char*) ;
 struct stp_policy* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0,
     char *VAR_1)
{
 struct stp_policy *VAR_2 = FUNC_1(VAR_0);
 ssize_t VAR_3;

 VAR_3 = FUNC_0(VAR_1, "%s\n",
   (VAR_2 && VAR_2->stm) ?
   VAR_2->stm->pdrv->name :
   "<none>");

 return VAR_3;
}
