
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msc {TYPE_1__* mbuf; int * mbuf_priv; int buf_mutex; } ;
struct TYPE_2__ {int (* unassign ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct msc *VAR_0)
{
 FUNC_0(&VAR_0->buf_mutex);

 if (!VAR_0->mbuf)
  return;

 VAR_0->mbuf->unassign(VAR_0->mbuf_priv);
 FUNC_1(VAR_0->mbuf);
 VAR_0->mbuf_priv = ((void*)0);
 VAR_0->mbuf = ((void*)0);
}
