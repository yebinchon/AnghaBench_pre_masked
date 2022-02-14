
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int revision; } ;
struct etnaviv_gpu {scalar_t__ sec_mode; TYPE_1__ identity; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct etnaviv_gpu*) ;
 int FUNC_5 (struct etnaviv_gpu*) ;
 scalar_t__ FUNC_6 (struct etnaviv_gpu*,int ,int) ;
 int FUNC_7 (struct etnaviv_gpu*,int ) ;
 int FUNC_8 (struct etnaviv_gpu*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_9(struct etnaviv_gpu *VAR_12)
{
 if ((FUNC_6(VAR_12, VAR_2, 0x5007) ||
      FUNC_6(VAR_12, VAR_2, 0x5220)) &&
     FUNC_7(VAR_12, VAR_4) != 0x2062400) {
  u32 VAR_13;

  VAR_13 = FUNC_7(VAR_12, VAR_9) & ~0xff;

  if (VAR_12->identity.revision == 0x5007)
   VAR_13 |= 0x0c;
  else
   VAR_13 |= 0x08;

  FUNC_8(VAR_12, VAR_9, VAR_13);
 }


 FUNC_4(VAR_12);





 FUNC_8(VAR_12, VAR_3,
    FUNC_1(2) |
    FUNC_0(2));


 if (FUNC_6(VAR_12, VAR_1, 0x5108)) {
  u32 VAR_14 = FUNC_7(VAR_12, VAR_6);
  VAR_14 &= ~(VAR_7 |
    VAR_8);
  VAR_14 |= FUNC_2(1) |
         FUNC_3(0);
  FUNC_8(VAR_12, VAR_6, VAR_14);
 }

 if (VAR_12->sec_mode == VAR_0) {
  u32 VAR_15 = FUNC_7(VAR_12, VAR_10);
  VAR_15 |= VAR_11;
  FUNC_8(VAR_12, VAR_10, VAR_15);
 }


 FUNC_5(VAR_12);

 FUNC_8(VAR_12, VAR_5, ~0U);
}
