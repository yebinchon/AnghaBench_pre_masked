
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct fsi_master_hub {TYPE_1__* upstream; scalar_t__ addr; } ;
struct fsi_master {int dummy; } ;
struct TYPE_2__ {int slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,void const*,size_t) ;
 struct fsi_master_hub* FUNC_1 (struct fsi_master*) ;

__attribute__((used)) static int FUNC_2(struct fsi_master *VAR_2, int VAR_3,
   uint8_t VAR_4, uint32_t VAR_5, const void *VAR_6, size_t VAR_7)
{
 struct fsi_master_hub *VAR_8 = FUNC_1(VAR_2);

 if (VAR_4 != 0)
  return -VAR_0;

 VAR_5 += VAR_8->addr + (VAR_3 * VAR_1);
 return FUNC_0(VAR_8->upstream->slave, VAR_5, VAR_6, VAR_7);
}
