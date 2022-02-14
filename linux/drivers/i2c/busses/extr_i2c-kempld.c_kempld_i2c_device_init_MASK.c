
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct kempld_i2c_data {struct kempld_device_data* pld; } ;
struct TYPE_2__ {int spec_major; } ;
struct kempld_device_data {int pld_clock; TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct kempld_device_data*,int ) ;
 int FUNC_1 (struct kempld_device_data*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct kempld_i2c_data *VAR_15)
{
 struct kempld_device_data *VAR_16 = VAR_15->pld;
 u16 VAR_17;
 long VAR_18;
 u8 VAR_19;
 u8 VAR_20;
 u8 VAR_21;


 VAR_19 = FUNC_0(VAR_16, VAR_8);
 VAR_19 &= ~(VAR_2 | VAR_3);
 FUNC_1(VAR_16, VAR_8, VAR_19);

 if (VAR_13 > VAR_9)
  VAR_13 = VAR_9;

 if (VAR_16->info.spec_major == 1)
  VAR_18 = VAR_16->pld_clock / (VAR_13 * 5) - 1000;
 else
  VAR_18 = VAR_16->pld_clock / (VAR_13 * 4) - 3000;

 if (VAR_18 < 0)
  VAR_18 = 0;


 VAR_17 = VAR_18 / 1000;
 if (VAR_18 % 1000 >= 500)
  VAR_17++;

 FUNC_1(VAR_16, VAR_11, VAR_17 & 0xff);
 FUNC_1(VAR_16, VAR_10, VAR_17 >> 8);


 VAR_21 = FUNC_0(VAR_16, VAR_5);
 if (VAR_14)
  VAR_21 |= VAR_6;
 else
  VAR_21 &= ~VAR_6;
 FUNC_1(VAR_16, VAR_5, VAR_21);


 FUNC_1(VAR_16, VAR_7, VAR_0);
 VAR_19 |= VAR_2;
 FUNC_1(VAR_16, VAR_8, VAR_19);

 VAR_20 = FUNC_0(VAR_16, VAR_12);
 if (VAR_20 & VAR_4)
  FUNC_1(VAR_16, VAR_7, VAR_1);
}
