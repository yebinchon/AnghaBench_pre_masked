
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lgdt3306a_state {int dummy; } ;


 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3306a_state*,int) ;

__attribute__((used)) static u32 FUNC_3(struct lgdt3306a_state *VAR_0)
{
 u32 VAR_1;
 u32 VAR_2;
 u32 VAR_3;

 VAR_1 = (FUNC_2(VAR_0, 0x00ec) << 8) |
       (FUNC_2(VAR_0, 0x00ed));
 VAR_2 = (FUNC_2(VAR_0, 0x00e8) << 8) |
       (FUNC_2(VAR_0, 0x00e9));

 if (VAR_1 == 0)
  return 0;

 VAR_3 = FUNC_1((VAR_2 * 10000) / VAR_1) - 3000;
 FUNC_0("mse=%u, pwr=%u, snr_x100=%d\n", VAR_1, VAR_2, VAR_3);

 return VAR_3;
}
