
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_chan {int dummy; } ;
struct altera_mbox {scalar_t__ is_sender; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbox_chan*) ;
 int FUNC_1 (struct mbox_chan*) ;
 struct altera_mbox* FUNC_2 (struct mbox_chan*) ;

__attribute__((used)) static int FUNC_3(struct mbox_chan *VAR_1)
{
 struct altera_mbox *VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = 0;

 if (!VAR_2)
  return -VAR_0;

 if (VAR_2->is_sender)
  VAR_3 = FUNC_1(VAR_1);
 else
  VAR_3 = FUNC_0(VAR_1);

 return VAR_3;
}
