
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty {int dummy; } ;
typedef TYPE_1__* sc_p ;
typedef int node_p ;
struct TYPE_6__ {int ifq_mtx; } ;
struct TYPE_5__ {int node; TYPE_4__ outq; struct tty* tp; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__* const,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*) ;

__attribute__((used)) static int
FUNC_7(node_p VAR_1)
{
 const sc_p VAR_2 = FUNC_1(VAR_1);
 struct tty *VAR_3;

 VAR_3 = VAR_2->tp;
 if (VAR_3 != ((void*)0)) {
  FUNC_5(VAR_3);
  FUNC_6(VAR_3);
 }

 FUNC_0(&VAR_2->outq);
 FUNC_4(&(VAR_2)->outq.ifq_mtx);
 FUNC_2(VAR_2->node);
 FUNC_3(VAR_2, VAR_0);

 return (0);
}
