
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int) ;
 int* VAR_7 ;

__attribute__((used)) static u32 FUNC_4(u32 VAR_8)
{
 u32 *VAR_9 = VAR_7 + VAR_3;
 u32 *VAR_10 = VAR_7 + VAR_6;
 u32 *VAR_11 = VAR_7 + VAR_0;
 u32 VAR_12, VAR_13, VAR_14;


 VAR_12 = VAR_4 | VAR_5;
 FUNC_3(VAR_9, VAR_12);


 VAR_13 = VAR_8;
 FUNC_3(VAR_10, VAR_13);
 VAR_14 = FUNC_0(2) | VAR_1 | VAR_2;
 FUNC_3(VAR_11, VAR_14);

 while (FUNC_2(VAR_11) & VAR_2)
  FUNC_1();


 FUNC_3(VAR_9, 0);

 VAR_13 = FUNC_2(VAR_10);
 return VAR_13;
}
