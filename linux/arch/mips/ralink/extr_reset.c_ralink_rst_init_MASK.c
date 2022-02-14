
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; } ;


 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;

void FUNC_3(void)
{
 VAR_0.of_node = FUNC_0(((void*)0), ((void*)0),
      "ralink,rt2880-reset");
 if (!VAR_0.of_node)
  FUNC_1("Failed to find reset controller node");
 else
  FUNC_2(&VAR_0);
}
