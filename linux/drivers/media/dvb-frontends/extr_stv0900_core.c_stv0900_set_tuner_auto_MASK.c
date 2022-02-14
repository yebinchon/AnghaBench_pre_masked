
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0900_internal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct stv0900_internal*,int ,int) ;
 int FUNC_1 (struct stv0900_internal*,int ,int) ;

void FUNC_2(struct stv0900_internal *VAR_5, u32 VAR_6,
      u32 VAR_7, int VAR_8)
{
 u32 VAR_9;



 VAR_9 = (VAR_6 * 64) / 1000;

 FUNC_0(VAR_5, VAR_4, (VAR_9 >> 10));
 FUNC_0(VAR_5, VAR_3, (VAR_9 >> 2) & 0xff);
 FUNC_0(VAR_5, VAR_2, (VAR_9 & 0x03));

 FUNC_0(VAR_5, VAR_1, VAR_7 / 2000000);

 FUNC_1(VAR_5, VAR_0, 1);
}
