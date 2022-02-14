
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,unsigned long*) ;
 int FUNC_3 (int,unsigned long*) ;
 size_t FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6(u32 *VAR_1, unsigned VAR_2,
     int VAR_3, int VAR_4)
{
 u8 VAR_5, VAR_6;
 unsigned long VAR_7;
 u32 VAR_8;





 FUNC_1(!FUNC_5(VAR_2));

 VAR_8 = FUNC_4(VAR_2);
 VAR_5 = 2 * (VAR_2 & 0x0f);
 VAR_6 = 2 * (VAR_2 & 0x0f) + 1;
 VAR_7 = VAR_1[VAR_8];

 FUNC_0(VAR_8 == VAR_0);

 VAR_3 ? FUNC_2(VAR_5, &VAR_7) : FUNC_3(VAR_5, &VAR_7);
 VAR_4 ? FUNC_2(VAR_6, &VAR_7) : FUNC_3(VAR_6, &VAR_7);

 VAR_1[VAR_8] = VAR_7;
}
