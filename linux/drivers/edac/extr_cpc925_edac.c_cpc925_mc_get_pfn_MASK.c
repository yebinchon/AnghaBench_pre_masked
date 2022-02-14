
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct mem_ctl_info {TYPE_1__** csrows; } ;
struct TYPE_2__ {unsigned long first_page; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct mem_ctl_info*,int ,char*) ;
 int FUNC_1 (int ,char*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_12, u32 VAR_13,
  unsigned long *VAR_14, unsigned long *VAR_15, int *VAR_16)
{
 u32 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 u32 VAR_22;
 unsigned long VAR_23;
 int VAR_24;

 VAR_17 = (VAR_13 & VAR_3) >> VAR_4;
 VAR_18 = (VAR_13 & VAR_7) >> VAR_8;
 VAR_19 = (VAR_13 & VAR_5) >> VAR_6;
 VAR_20 = (VAR_13 & VAR_1) >> VAR_2;
 VAR_21 = VAR_13 & VAR_9;

 *VAR_16 = VAR_18;
 VAR_23 = VAR_12->csrows[VAR_18]->first_page << VAR_10;


 VAR_19 += VAR_17;
 for (VAR_24 = 0; VAR_24 < 11; VAR_24++) {
  VAR_22 = VAR_19 & 0x1;
  VAR_19 >>= 1;
  VAR_23 |= VAR_22 << (14 - VAR_24);
 }


 VAR_23 |= VAR_20 << 19;


 for (VAR_24 = 0; VAR_24 < 3; VAR_24++) {
  VAR_22 = VAR_21 & 0x1;
  VAR_21 >>= 1;
  VAR_23 |= VAR_22 << (26 - VAR_24);
 }

 for (VAR_24 = 0; VAR_24 < 3; VAR_24++) {
  VAR_22 = VAR_21 & 0x1;
  VAR_21 >>= 1;
  VAR_23 |= VAR_22 << (21 + VAR_24);
 }

 for (VAR_24 = 0; VAR_24 < 4; VAR_24++) {
  VAR_22 = VAR_21 & 0x1;
  VAR_21 >>= 1;
  VAR_23 |= VAR_22 << (18 - VAR_24);
 }

 for (VAR_24 = 0; VAR_24 < 3; VAR_24++) {
  VAR_22 = VAR_21 & 0x1;
  VAR_21 >>= 1;
  VAR_23 |= VAR_22 << (29 - VAR_24);
 }

 *VAR_15 = VAR_23 & (VAR_11 - 1);
 *VAR_14 = VAR_23 >> VAR_10;

 FUNC_1(0, "ECC physical address 0x%lx\n", VAR_23);
}
