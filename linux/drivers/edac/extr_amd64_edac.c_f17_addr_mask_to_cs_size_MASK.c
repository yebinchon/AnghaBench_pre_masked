
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct amd64_pvt {TYPE_1__* csels; } ;
struct TYPE_2__ {int* csmasks_sec; int* csmasks; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct amd64_pvt *VAR_3, u8 VAR_4,
        unsigned int VAR_5, int VAR_6)
{
 u32 VAR_7, VAR_8;
 u32 VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13 = 0;


 if (!VAR_5)
  return VAR_13;


 if (!(VAR_5 & VAR_0) && !(VAR_6 & 1))
  return VAR_13;


 if (!(VAR_5 & VAR_1) && (VAR_6 & 1))
  return VAR_13;






 VAR_12 = VAR_6 >> 1;


 if ((VAR_6 & 1) && (VAR_5 & VAR_2))
  VAR_7 = VAR_3->csels[VAR_4].csmasks_sec[VAR_12];
 else
  VAR_7 = VAR_3->csels[VAR_4].csmasks[VAR_12];
 VAR_9 = FUNC_2(VAR_7) - 1;
 VAR_10 = FUNC_3(VAR_7);
 VAR_11 = VAR_9 - VAR_10;


 VAR_8 = FUNC_0(VAR_9 - VAR_11, 1);

 FUNC_1(1, "CS%d DIMM%d AddrMasks:\n", VAR_6, VAR_12);
 FUNC_1(1, "  Original AddrMask: 0x%x\n", VAR_7);
 FUNC_1(1, "  Deinterleaved AddrMask: 0x%x\n", VAR_8);


 VAR_13 = (VAR_8 >> 2) + 1;


 return VAR_13 >> 10;
}
