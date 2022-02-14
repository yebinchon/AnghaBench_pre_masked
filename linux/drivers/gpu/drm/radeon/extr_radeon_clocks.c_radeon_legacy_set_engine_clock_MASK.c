
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int dummy; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*,int,int*,int*) ;
 int FUNC_3 (int) ;

void FUNC_4(struct radeon_device *VAR_12,
        uint32_t VAR_13)
{
 uint32_t VAR_14;
 int VAR_15, VAR_16;



 VAR_13 = FUNC_2(VAR_12, VAR_13, &VAR_15, &VAR_16);

 VAR_14 = FUNC_0(VAR_0);
 VAR_14 &= ~VAR_1;
 FUNC_1(VAR_0, VAR_14);

 VAR_14 = FUNC_0(VAR_3);
 VAR_14 &= ~VAR_4;
 FUNC_1(VAR_3, VAR_14);

 FUNC_3(10);

 VAR_14 = FUNC_0(VAR_5);
 VAR_14 |= VAR_11;
 FUNC_1(VAR_5, VAR_14);

 FUNC_3(2);

 VAR_14 = FUNC_0(VAR_5);
 VAR_14 |= VAR_10;
 FUNC_1(VAR_5, VAR_14);

 FUNC_3(200);

 VAR_14 = FUNC_0(VAR_2);
 VAR_14 &= ~(VAR_6 << VAR_7);
 VAR_14 |= (VAR_15 & VAR_6) << VAR_7;
 FUNC_1(VAR_2, VAR_14);


 VAR_14 = FUNC_0(VAR_5);
 VAR_14 &= ~VAR_8;
 if ((VAR_13 * VAR_16) >= 90000)
  VAR_14 |= (0x7 << VAR_9);
 else
  VAR_14 |= (0x4 << VAR_9);
 FUNC_1(VAR_5, VAR_14);

 VAR_14 = FUNC_0(VAR_5);
 VAR_14 &= ~VAR_11;
 FUNC_1(VAR_5, VAR_14);

 FUNC_3(2);

 VAR_14 = FUNC_0(VAR_5);
 VAR_14 &= ~VAR_10;
 FUNC_1(VAR_5, VAR_14);

 FUNC_3(200);

 VAR_14 = FUNC_0(VAR_3);
 VAR_14 &= ~VAR_4;
 switch (VAR_16) {
 case 1:
 default:
  VAR_14 |= 1;
  break;
 case 2:
  VAR_14 |= 2;
  break;
 case 4:
  VAR_14 |= 3;
  break;
 case 8:
  VAR_14 |= 4;
  break;
 }
 FUNC_1(VAR_3, VAR_14);

 FUNC_3(20);

 VAR_14 = FUNC_0(VAR_0);
 VAR_14 |= VAR_1;
 FUNC_1(VAR_0, VAR_14);

 FUNC_3(10);
}
