
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fsi_master_acf {int last_addr; } ;



__attribute__((used)) static bool FUNC_0(struct fsi_master_acf *VAR_0, int VAR_1,
          uint32_t VAR_2)
{

 return VAR_0->last_addr == (((VAR_1 & 0x3) << 21) | (VAR_2 & ~0x3));
}
