
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef int device_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,char*,int ,int ,int ,int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_17, uint32_t VAR_18, u_int VAR_19,
    u_int VAR_20, u_int VAR_21)
{






 uint32_t VAR_22;
 if ((FUNC_0(VAR_17, VAR_19, VAR_20, VAR_21, (VAR_9), (1)) & VAR_4) ==
     VAR_5) {
  VAR_22 = FUNC_0(VAR_17, VAR_19, VAR_20, VAR_21, (VAR_6), (1));
  VAR_22 |= VAR_1 | VAR_3 |
      VAR_2;





  FUNC_0(VAR_17, VAR_19, VAR_20, VAR_21, (VAR_6), (VAR_22), (1));

  VAR_22 = VAR_0;





  FUNC_0(VAR_17, VAR_19, VAR_20, VAR_21, (VAR_13), (VAR_22), (1));
 } else {
  VAR_22 = FUNC_0(VAR_17, VAR_19, VAR_20, VAR_21, (VAR_12), (1));
  if ((int)VAR_22 > 0) {
   switch (VAR_18) {
   case 33000000:
    VAR_22 *= 8;
    break;
   case 66000000:
    VAR_22 *= 4;
    break;
   }
   VAR_22 = FUNC_3(VAR_22, 255);
  } else
   VAR_22 = VAR_0;
 }




 FUNC_0(VAR_17, VAR_19, VAR_20, VAR_21, (VAR_11), (VAR_22), (1));
 FUNC_0(VAR_17, VAR_19, VAR_20, VAR_21, (VAR_7), (VAR_16 / sizeof(uint32_t)), (1));
 if ((FUNC_0(VAR_17, VAR_19, VAR_20, VAR_21, (VAR_14), (2)) == 0x10b9 &&
     FUNC_0(VAR_17, VAR_19, VAR_20, VAR_21, (VAR_8), (2)) == 0x5229))
  FUNC_0(VAR_17, VAR_19, VAR_20, VAR_21, (0x50), (FUNC_0(VAR_17, VAR_19, VAR_20, VAR_21, (0x50), (1)) | 0x3), (1));






 FUNC_0(VAR_17, VAR_19, VAR_20, VAR_21, (VAR_10), (VAR_15), (1));



}
