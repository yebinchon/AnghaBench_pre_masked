
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssi_protocol {int lock; int cmdqueue; } ;
struct hsi_msg {int link; TYPE_1__* cl; } ;
struct TYPE_2__ {int device; } ;


 int FUNC_0 (int *,char*,int ) ;
 struct ssi_protocol* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hsi_msg*) ;

__attribute__((used)) static inline void FUNC_6(struct hsi_msg *VAR_0)
{
 struct ssi_protocol *VAR_1 = FUNC_1(VAR_0->cl);

 FUNC_0(&VAR_0->cl->device, "Release cmd 0x%08x\n", FUNC_5(VAR_0));
 FUNC_3(&VAR_1->lock);
 FUNC_2(&VAR_0->link, &VAR_1->cmdqueue);
 FUNC_4(&VAR_1->lock);
}
