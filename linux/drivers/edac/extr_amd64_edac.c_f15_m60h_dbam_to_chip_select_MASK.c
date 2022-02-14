
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct amd64_pvt {scalar_t__ dram_type; TYPE_1__* csels; } ;
struct TYPE_2__ {int* csmasks; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(struct amd64_pvt *VAR_2, u8 VAR_3,
     unsigned VAR_4, int VAR_5)
{
 int VAR_6;
 u32 VAR_7 = VAR_2->csels[VAR_3].csmasks[VAR_5];

 FUNC_0(VAR_4 > 12);

 if (VAR_2->dram_type == VAR_0) {
  if (VAR_4 > 9)
   return -1;

  VAR_6 = FUNC_3(VAR_4);
 } else if (VAR_2->dram_type == VAR_1) {
  unsigned VAR_8 = VAR_7 & 0xf;

  if (VAR_8 == 3)
   VAR_8 = 4;
  VAR_6 = FUNC_2(VAR_4, VAR_8);
 } else {

  if (VAR_4 == 0x1)
   return -1;

  VAR_6 = FUNC_1(VAR_4, 0);
 }

 return VAR_6;
}
