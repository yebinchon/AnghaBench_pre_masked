
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int,int,int,char*,char*,int,int) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_9,
    u32 VAR_10, u32 VAR_11, u32 VAR_12)
{
 u32 VAR_13;
 u32 VAR_14 = (VAR_10 & VAR_1) >> VAR_2;
 u32 VAR_15 = (VAR_10 & VAR_7) >> VAR_8;
 char VAR_16[5] = { VAR_12 >> 24, (VAR_12 >> 16) & 0xff,
  (VAR_12 >> 8) & 0xff, VAR_12 & 0xff, 0 };

 if (VAR_9->family == VAR_0)
  VAR_13 = (VAR_10 & VAR_3) >> VAR_5;
 else
  VAR_13 = (VAR_10 & VAR_4) >> VAR_5;

 FUNC_0("VM fault (0x%02x, vmid %d) at page %u, %s from '%s' (0x%08x) (%d)\n",
        VAR_15, VAR_14, VAR_11,
        (VAR_10 & VAR_6) ? "write" : "read",
        VAR_16, VAR_12, VAR_13);
}
