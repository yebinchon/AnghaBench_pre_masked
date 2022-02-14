
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct conv_attrs {TYPE_1__* drv; } ;
struct TYPE_2__ {int required; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int *,int ,int,int *,TYPE_1__*,int ,int *) ;
 int FUNC_1 (struct index_state const*,struct conv_attrs*,char const*) ;

int FUNC_2(const struct index_state *VAR_1, const char *VAR_2)
{
 struct conv_attrs VAR_3;

 FUNC_1(VAR_1, &VAR_3, VAR_2);
 if (!VAR_3.drv)
  return 0;






 if (!VAR_3.drv->required)
  return 0;

 return FUNC_0(VAR_2, ((void*)0), 0, -1, ((void*)0), VAR_3.drv, VAR_0, ((void*)0));
}
