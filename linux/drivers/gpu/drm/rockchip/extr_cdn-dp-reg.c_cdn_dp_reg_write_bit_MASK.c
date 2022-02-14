
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cdn_dp_device {int dummy; } ;
typedef int field ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cdn_dp_device*,int ,int ,int,int*) ;

__attribute__((used)) static int FUNC_1(struct cdn_dp_device *VAR_2, u16 VAR_3,
    u8 VAR_4, u8 VAR_5, u32 VAR_6)
{
 u8 VAR_7[8];

 VAR_7[0] = (VAR_3 >> 8) & 0xff;
 VAR_7[1] = VAR_3 & 0xff;
 VAR_7[2] = VAR_4;
 VAR_7[3] = VAR_5;
 VAR_7[4] = (VAR_6 >> 24) & 0xff;
 VAR_7[5] = (VAR_6 >> 16) & 0xff;
 VAR_7[6] = (VAR_6 >> 8) & 0xff;
 VAR_7[7] = VAR_6 & 0xff;

 return FUNC_0(VAR_2, VAR_1, VAR_0,
       sizeof(VAR_7), VAR_7);
}
