
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_chan {int dummy; } ;
struct altera_mbox {int dummy; } ;


 scalar_t__ FUNC_0 (struct altera_mbox*) ;
 struct altera_mbox* FUNC_1 (struct mbox_chan*) ;

__attribute__((used)) static bool FUNC_2(struct mbox_chan *VAR_0)
{
 struct altera_mbox *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1) ? 1 : 0;
}
