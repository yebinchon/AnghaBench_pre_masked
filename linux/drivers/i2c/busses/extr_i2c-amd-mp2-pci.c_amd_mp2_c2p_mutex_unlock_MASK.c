
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_mp2_dev {int c2p_lock; int c2p_lock_busid; } ;
struct amd_i2c_common {int bus_id; struct amd_mp2_dev* mp2_dev; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct amd_mp2_dev*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct amd_i2c_common *VAR_0)
{
 struct amd_mp2_dev *VAR_1 = VAR_0->mp2_dev;

 if (FUNC_3(VAR_1->c2p_lock_busid != VAR_0->bus_id)) {
  FUNC_0(FUNC_2(VAR_1),
    "bus %d attempting to unlock C2P locked by bus %d\n",
    VAR_0->bus_id, VAR_1->c2p_lock_busid);
  return;
 }

 FUNC_1(&VAR_1->c2p_lock);
}
