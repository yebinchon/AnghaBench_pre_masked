
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cdn_dp_device {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cdn_dp_device*,int ,int ,int,int*) ;

__attribute__((used)) static int FUNC_1(struct cdn_dp_device *VAR_2, u16 VAR_3, u32 VAR_4)
{
 u8 VAR_5[6];

 VAR_5[0] = (VAR_3 >> 8) & 0xff;
 VAR_5[1] = VAR_3 & 0xff;
 VAR_5[2] = (VAR_4 >> 24) & 0xff;
 VAR_5[3] = (VAR_4 >> 16) & 0xff;
 VAR_5[4] = (VAR_4 >> 8) & 0xff;
 VAR_5[5] = VAR_4 & 0xff;
 return FUNC_0(VAR_2, VAR_1, VAR_0,
       sizeof(VAR_5), VAR_5);
}
