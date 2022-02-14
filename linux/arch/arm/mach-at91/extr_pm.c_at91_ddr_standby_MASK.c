
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__* ramc; } ;
struct TYPE_4__ {TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 () ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static void FUNC_3(void)
{


 u32 VAR_8, VAR_9 = 0;
 u32 VAR_10, VAR_11, VAR_12 = 0;
 u32 VAR_13, VAR_14 = 0;


 VAR_11 = FUNC_0(0, VAR_4);
 if ((VAR_11 & VAR_3) == VAR_6) {
  VAR_10 = VAR_11 & ~VAR_3;
  VAR_10 |= VAR_5;
  FUNC_1(0, VAR_4, VAR_10);
 }

 if (VAR_7.data.ramc[1]) {
  VAR_14 = FUNC_0(1, VAR_2);
  VAR_9 = VAR_14 & ~VAR_0;
  VAR_9 |= VAR_1;
  VAR_12 = FUNC_0(1, VAR_4);
  if ((VAR_12 & VAR_3) == VAR_6) {
   VAR_10 = VAR_12 & ~VAR_3;
   VAR_10 |= VAR_5;
   FUNC_1(1, VAR_4, VAR_10);
  }
 }

 VAR_13 = FUNC_0(0, VAR_2);
 VAR_8 = VAR_13 & ~VAR_0;
 VAR_8 |= VAR_1;


 FUNC_1(0, VAR_2, VAR_8);
 if (VAR_7.data.ramc[1])
  FUNC_1(1, VAR_2, VAR_9);

 FUNC_2();

 FUNC_1(0, VAR_4, VAR_11);
 FUNC_1(0, VAR_2, VAR_13);
 if (VAR_7.data.ramc[1]) {
  FUNC_1(0, VAR_4, VAR_12);
  FUNC_1(1, VAR_2, VAR_14);
 }
}
