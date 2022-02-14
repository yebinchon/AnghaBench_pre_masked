
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(u64 VAR_6, int VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_1(VAR_2);
 VAR_9 = VAR_8 & ~(VAR_3);


 VAR_8 |= VAR_7;


 FUNC_2(VAR_9, VAR_2);

 FUNC_0();


 FUNC_2(0, VAR_4);
 FUNC_2(0, VAR_5);
 FUNC_2(VAR_6 & 0xffffffff, VAR_0);
 FUNC_2(VAR_6 >> 32, VAR_1);






 FUNC_0();
 FUNC_2(VAR_8, VAR_2);
 return 0;
}
