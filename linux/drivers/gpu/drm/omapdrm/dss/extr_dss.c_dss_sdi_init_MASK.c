
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dss_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (struct dss_device*,int ) ;
 int FUNC_3 (struct dss_device*,int ,int ) ;

void FUNC_4(struct dss_device *VAR_2, int VAR_3)
{
 u32 VAR_4;

 FUNC_0(VAR_3 > 3 || VAR_3 < 1);

 VAR_4 = FUNC_2(VAR_2, VAR_1);
 VAR_4 = FUNC_1(VAR_4, 0xf, 19, 15);
 VAR_4 = FUNC_1(VAR_4, VAR_3-1, 3, 2);
 VAR_4 = FUNC_1(VAR_4, 2, 1, 0);
 FUNC_3(VAR_2, VAR_1, VAR_4);

 VAR_4 = FUNC_2(VAR_2, VAR_0);
 VAR_4 = FUNC_1(VAR_4, 0x7, 25, 22);
 VAR_4 = FUNC_1(VAR_4, 0xb, 16, 11);
 VAR_4 = FUNC_1(VAR_4, 0xb4, 10, 1);
 FUNC_3(VAR_2, VAR_0, VAR_4);
}
