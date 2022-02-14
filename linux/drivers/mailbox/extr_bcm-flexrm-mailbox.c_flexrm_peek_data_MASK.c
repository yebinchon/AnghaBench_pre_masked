
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_chan {int con_priv; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct mbox_chan *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->con_priv);

 return (VAR_1 > 0) ? 1 : 0;
}
