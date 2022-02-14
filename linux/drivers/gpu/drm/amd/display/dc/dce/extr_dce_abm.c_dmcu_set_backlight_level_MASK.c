
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dce_abm {int base; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(
 struct dce_abm *VAR_10,
 uint32_t VAR_11,
 uint32_t VAR_12,
 uint32_t VAR_13)
{
 unsigned int VAR_14 = 0;
 uint32_t VAR_15;

 if (VAR_11 & 0x10000)

  VAR_14 = 0xFF;
 else

  VAR_14 = (VAR_11 >> 8) & 0xFF;

 FUNC_4(&VAR_10->base, VAR_13);


 FUNC_2(VAR_6, VAR_8,
   0, 1, 80000);


 FUNC_1(VAR_3, VAR_3, VAR_11);


 if (VAR_13 == 0)
  VAR_12 = 0;
 FUNC_3(VAR_7, VAR_12);


 FUNC_1(VAR_4, VAR_5, VAR_9);


 FUNC_1(VAR_6, VAR_8, 1);


 VAR_15 = FUNC_0(VAR_2);

 VAR_15 &= ~VAR_0;
 VAR_14 &= (VAR_0 >>
    VAR_1);
 VAR_15 |= (VAR_14 << VAR_1);

 FUNC_3(VAR_2, VAR_15);


 FUNC_2(VAR_6, VAR_8,
   0, 1, 80000);
}
