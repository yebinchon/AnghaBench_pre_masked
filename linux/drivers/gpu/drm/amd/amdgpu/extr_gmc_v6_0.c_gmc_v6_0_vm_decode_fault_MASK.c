
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,int,int,char*,char*,int,int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_5,
         u32 VAR_6, u32 VAR_7, u32 VAR_8)
{
 u32 VAR_9;
 u32 VAR_10 = FUNC_0(VAR_6, VAR_4, VAR_3);
 u32 VAR_11 = FUNC_0(VAR_6, VAR_4,
     VAR_2);
 char VAR_12[5] = { VAR_8 >> 24, (VAR_8 >> 16) & 0xff,
  (VAR_8 >> 8) & 0xff, VAR_8 & 0xff, 0 };

 VAR_9 = FUNC_0(VAR_6, VAR_4,
         VAR_0);

 FUNC_1(VAR_5->dev, "VM fault (0x%02x, vmid %d) at page %u, %s from '%s' (0x%08x) (%d)\n",
        VAR_11, VAR_10, VAR_7,
        FUNC_0(VAR_6, VAR_4,
        VAR_1) ?
        "write" : "read", VAR_12, VAR_8, VAR_9);
}
