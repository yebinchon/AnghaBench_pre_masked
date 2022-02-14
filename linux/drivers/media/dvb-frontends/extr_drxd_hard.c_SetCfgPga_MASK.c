
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drxd_state {int dummy; } ;


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
 int FUNC_0 (struct drxd_state*,int ,int *,int) ;
 int FUNC_1 (struct drxd_state*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct drxd_state *VAR_11, int VAR_12)
{
 int VAR_13;
 u16 VAR_14 = 0;
 u16 VAR_15 = 0;
 do {
  if (VAR_12) {


   VAR_13 = FUNC_0(VAR_11, VAR_7, &VAR_14, 0x0000);
   if (VAR_13 < 0)
    break;
   VAR_14 &= (~(VAR_6));
   VAR_14 |= VAR_4;
   VAR_13 = FUNC_1(VAR_11, VAR_7, VAR_14, 0x0000);
   if (VAR_13 < 0)
    break;


   VAR_13 = FUNC_0(VAR_11, VAR_3, &VAR_15, 0x0000);
   if (VAR_13 < 0)
    break;
   VAR_15 &= (~(VAR_2));
   VAR_15 |= VAR_0;
   VAR_13 = FUNC_1(VAR_11, VAR_3, VAR_15, 0x0000);
   if (VAR_13 < 0)
    break;



   VAR_13 = FUNC_1(VAR_11, VAR_10, VAR_9, 0x0000);
   if (VAR_13 < 0)
    break;
  } else {



   VAR_13 = FUNC_0(VAR_11, VAR_7, &VAR_14, 0x0000);
   if (VAR_13 < 0)
    break;
   VAR_14 &= (~(VAR_6));
   VAR_14 |= VAR_5;
   VAR_13 = FUNC_1(VAR_11, VAR_7, VAR_14, 0x0000);
   if (VAR_13 < 0)
    break;


   VAR_13 = FUNC_0(VAR_11, VAR_3, &VAR_15, 0x0000);
   if (VAR_13 < 0)
    break;
   VAR_15 &= (~(VAR_2));
   VAR_15 |= VAR_1;
   VAR_13 = FUNC_1(VAR_11, VAR_3, VAR_15, 0x0000);
   if (VAR_13 < 0)
    break;



   VAR_13 = FUNC_1(VAR_11, VAR_10, VAR_8, 0x0000);
   if (VAR_13 < 0)
    break;
  }
 } while (0);
 return VAR_13;
}
