
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int*,int) ;
 int* VAR_0 ;
 int FUNC_1 (int*) ;
 int FUNC_2 () ;
 int* VAR_1 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int*) ;

void FUNC_5(u32 *VAR_2, u32 VAR_3, u32 VAR_4, u32 *VAR_5)
{
 u32 *VAR_6 = VAR_2;

 *VAR_5 = FUNC_4(VAR_2);


 *VAR_2++ = FUNC_4(VAR_1);
 *VAR_2++ = VAR_4;
 *VAR_2++ = FUNC_4(VAR_0);

 FUNC_1(VAR_2);

 FUNC_2();
 FUNC_0(VAR_6, VAR_3);
 FUNC_0(VAR_5, sizeof(*VAR_5));

 FUNC_3(*VAR_5, *VAR_5 + VAR_3);
 FUNC_3(FUNC_4(VAR_5),
     FUNC_4(VAR_5) + sizeof(*VAR_5));
}
