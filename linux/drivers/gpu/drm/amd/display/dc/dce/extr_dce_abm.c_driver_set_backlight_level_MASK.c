
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct dce_abm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int*,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int) ;
 int FUNC_3 (int ,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct dce_abm *VAR_8,
  uint32_t VAR_9)
{
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint8_t VAR_12;
 uint64_t VAR_13;
 uint32_t VAR_14;
 FUNC_0(VAR_7,
   VAR_6, &VAR_14,
   VAR_5, &VAR_11);

 if (VAR_14 == 0)
  VAR_12 = 16;
 else
  VAR_12 = VAR_14;


 VAR_11 = VAR_11 & ((1 << VAR_12) - 1);





 VAR_13 = VAR_9 * VAR_11;





 VAR_10 = VAR_13 >> VAR_12;
 VAR_10 &= 0xFFFF;
 VAR_10 += (VAR_13 >> (VAR_12 - 1)) & 0x1;







 FUNC_2(VAR_3,
   VAR_2, 1,
   VAR_3, 1);


 FUNC_1(VAR_1, VAR_0, VAR_10);


 FUNC_1(VAR_3,
   VAR_3, 0);


 FUNC_3(VAR_3,
   VAR_4, 0,
   1, 10000);
}
