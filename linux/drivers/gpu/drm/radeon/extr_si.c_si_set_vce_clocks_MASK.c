
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (unsigned int) ;
 int VAR_10 ;
 int FUNC_3 (unsigned int) ;
 int VAR_11 ;
 int FUNC_4 (unsigned int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct radeon_device*,int ,int ,int,int,int,int,int ,int,int,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_8 (struct radeon_device*) ;

int FUNC_9(struct radeon_device *VAR_17, u32 VAR_18, u32 VAR_19)
{
 unsigned VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 int VAR_23;


 FUNC_5(VAR_1,
       FUNC_1(1) | FUNC_0(1),
       ~(VAR_6 | VAR_5));


 FUNC_5(VAR_0, VAR_9,
       ~VAR_9);

 if (!VAR_18 || !VAR_19) {

  FUNC_5(VAR_0, VAR_15,
        ~VAR_15);
  return 0;
 }

 VAR_23 = FUNC_7(VAR_17, VAR_18, VAR_19, 125000, 250000,
       16384, 0x03FFFFFF, 0, 128, 5,
       &VAR_20, &VAR_21, &VAR_22);
 if (VAR_23)
  return VAR_23;


 FUNC_5(VAR_3, 0, ~VAR_7);


 FUNC_5(VAR_0, VAR_16,
       ~VAR_16);


 FUNC_5(VAR_0, VAR_15,
       ~VAR_15);
 FUNC_5(VAR_0, 0, ~VAR_15);


 FUNC_5(VAR_0, 0, ~VAR_14);

 FUNC_6(1);

 VAR_23 = FUNC_8(VAR_17);
 if (VAR_23)
  return VAR_23;


 FUNC_5(VAR_0, VAR_14, ~VAR_14);


 FUNC_5(VAR_4, 0, ~VAR_8);


 FUNC_5(VAR_2, FUNC_2(VAR_20), ~VAR_10);


 FUNC_5(VAR_0, 0, ~VAR_13);


 FUNC_5(VAR_1,
       FUNC_3(VAR_21) | FUNC_4(VAR_22),
       ~(VAR_11 | VAR_12));


 FUNC_6(15);


 FUNC_5(VAR_0, 0, ~VAR_14);

 FUNC_6(15);


 FUNC_5(VAR_0, 0, ~VAR_9);

 VAR_23 = FUNC_8(VAR_17);
 if (VAR_23)
  return VAR_23;


 FUNC_5(VAR_1,
       FUNC_1(16) | FUNC_0(16),
       ~(VAR_6 | VAR_5));

 FUNC_6(100);

 return 0;
}
