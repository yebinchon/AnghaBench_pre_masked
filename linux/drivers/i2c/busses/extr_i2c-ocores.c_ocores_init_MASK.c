
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ocores_i2c {int ip_clock_khz; int bus_clock_khz; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct device*,char*,int,int) ;
 int FUNC_3 (struct ocores_i2c*,int ) ;
 int FUNC_4 (struct ocores_i2c*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_8, struct ocores_i2c *VAR_9)
{
 int VAR_10;
 int VAR_11;
 u8 VAR_12 = FUNC_3(VAR_9, VAR_3);


 VAR_12 &= ~(VAR_4 | VAR_5);
 FUNC_4(VAR_9, VAR_3, VAR_12);

 VAR_10 = (VAR_9->ip_clock_khz / (5 * VAR_9->bus_clock_khz)) - 1;
 VAR_10 = FUNC_1(VAR_10, 0, 0xffff);

 VAR_11 = VAR_9->ip_clock_khz / (5 * (VAR_10 + 1)) - VAR_9->bus_clock_khz;
 if (FUNC_0(VAR_11) > VAR_9->bus_clock_khz / 10) {
  FUNC_2(VAR_8,
   "Unsupported clock settings: core: %d KHz, bus: %d KHz\n",
   VAR_9->ip_clock_khz, VAR_9->bus_clock_khz);
  return -VAR_0;
 }

 FUNC_4(VAR_9, VAR_7, VAR_10 & 0xff);
 FUNC_4(VAR_9, VAR_6, VAR_10 >> 8);


 FUNC_4(VAR_9, VAR_1, VAR_2);
 FUNC_4(VAR_9, VAR_3, VAR_12 | VAR_4);

 return 0;
}
