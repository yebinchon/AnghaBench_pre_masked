
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_4__ {struct TYPE_4__* const fib_data; int node; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__* const,int ) ;

__attribute__((used)) static int
FUNC_4(node_p VAR_1)
{
 const priv_p VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1, ((void*)0));
 FUNC_2(VAR_2->node);

 FUNC_3(VAR_2->fib_data, VAR_0);
 FUNC_3(VAR_2, VAR_0);

 return (0);
}
