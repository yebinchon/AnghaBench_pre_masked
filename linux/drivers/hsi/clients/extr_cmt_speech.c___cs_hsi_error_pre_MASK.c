
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hsi_msg {int status; } ;
struct cs_hsi_iface {TYPE_1__* cl; int lock; } ;
struct TYPE_2__ {int device; } ;


 int FUNC_0 (int *,char*,char const*,int ,unsigned int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct cs_hsi_iface *VAR_0,
     struct hsi_msg *VAR_1, const char *VAR_2,
     unsigned int *VAR_3)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(&VAR_0->cl->device, "HSI %s error, msg %d, state %u\n",
  VAR_2, VAR_1->status, *VAR_3);
}
