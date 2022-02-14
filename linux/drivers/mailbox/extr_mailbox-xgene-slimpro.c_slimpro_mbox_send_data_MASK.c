
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slimpro_mbox_chan {int dummy; } ;
struct mbox_chan {struct slimpro_mbox_chan* con_priv; } ;


 int FUNC_0 (struct slimpro_mbox_chan*,void*) ;

__attribute__((used)) static int FUNC_1(struct mbox_chan *VAR_0, void *VAR_1)
{
 struct slimpro_mbox_chan *VAR_2 = VAR_0->con_priv;

 FUNC_0(VAR_2, VAR_1);
 return 0;
}
