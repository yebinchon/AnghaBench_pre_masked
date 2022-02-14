
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
typedef int node_p ;
struct TYPE_6__ {int ifq_mtx; } ;
struct TYPE_5__ {TYPE_4__ outq; int node; } ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_4(node_p VAR_5)
{
 sc_p VAR_6;


 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1, VAR_2 | VAR_3);

 FUNC_1(VAR_5, VAR_6);
 VAR_6->node = VAR_5;

 FUNC_3(&VAR_6->outq.ifq_mtx, "ng_tty node+queue", ((void*)0), VAR_0);
 FUNC_0(&VAR_6->outq, VAR_4);

 return (0);
}
