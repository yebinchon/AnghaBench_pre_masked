
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_mp2_dev {int c2p_lock_busid; int c2p_lock; } ;
struct amd_i2c_common {int bus_id; struct amd_mp2_dev* mp2_dev; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct amd_i2c_common *VAR_0)
{
 struct amd_mp2_dev *VAR_1 = VAR_0->mp2_dev;


 FUNC_0(&VAR_1->c2p_lock);
 VAR_1->c2p_lock_busid = VAR_0->bus_id;
}
