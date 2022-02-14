
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct panfrost_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (struct panfrost_device*,int ,int) ;
 size_t FUNC_4 (size_t,int ) ;
 int FUNC_5 (struct panfrost_device*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct panfrost_device *VAR_4, u32 VAR_5,
   u64 VAR_6, size_t VAR_7)
{
 u8 VAR_8;
 u64 VAR_9 = VAR_6 & VAR_1;
 VAR_7 = FUNC_4(VAR_7, VAR_3);

 VAR_8 = 10 + FUNC_2(VAR_7 >> VAR_2);
 if ((VAR_7 >> VAR_2) != (1ul << (VAR_8 - 11))) {

  VAR_8 += 1;
 }
 VAR_9 |= VAR_8;


 FUNC_3(VAR_4, FUNC_1(VAR_5), VAR_9 & 0xFFFFFFFFUL);
 FUNC_3(VAR_4, FUNC_0(VAR_5), (VAR_9 >> 32) & 0xFFFFFFFFUL);
 FUNC_5(VAR_4, VAR_5, VAR_0);
}
