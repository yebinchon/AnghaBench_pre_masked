
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct fsl_sata_channel {int r_mem; } ;
typedef int bus_size_t ;


 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct fsl_sata_channel *VAR_1, bus_size_t VAR_2,
    unsigned int VAR_3, unsigned int VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 uint32_t VAR_7;

 while (((VAR_7 = FUNC_0(VAR_1->r_mem, VAR_2)) & VAR_3) != VAR_4) {
  if (VAR_6 > VAR_5) {
   return (VAR_0);
  }
  FUNC_1(1000);
  VAR_6++;
 }
 return (0);
}
