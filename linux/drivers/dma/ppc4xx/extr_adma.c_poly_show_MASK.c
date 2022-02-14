
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_driver {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device_driver *VAR_4, char *VAR_5)
{
 ssize_t VAR_6 = 0;
 u32 VAR_7;





 VAR_7 = FUNC_0(VAR_3, VAR_0);
 VAR_7 >>= VAR_1;
 VAR_7 &= 0xFF;


 VAR_6 = FUNC_1(VAR_5, VAR_2, "PPC440SP(e) RAID-6 driver "
   "uses 0x1%02x polynomial.\n", VAR_7);
 return VAR_6;
}
