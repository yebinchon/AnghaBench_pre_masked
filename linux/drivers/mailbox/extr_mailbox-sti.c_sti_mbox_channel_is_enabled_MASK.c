
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_mbox_device {int* enabled; } ;
struct sti_channel {unsigned int instance; unsigned int channel; struct sti_mbox_device* mdev; } ;
struct mbox_chan {struct sti_channel* con_priv; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline bool FUNC_1(struct mbox_chan *VAR_0)
{
 struct sti_channel *VAR_1 = VAR_0->con_priv;
 struct sti_mbox_device *VAR_2 = VAR_1->mdev;
 unsigned int VAR_3 = VAR_1->instance;
 unsigned int VAR_4 = VAR_1->channel;

 return VAR_2->enabled[VAR_3] & FUNC_0(VAR_4);
}
