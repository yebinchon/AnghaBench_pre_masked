
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef unsigned long u32 ;


 int VAR_0 ;
 long FUNC_0 (int ,unsigned long,unsigned long*,unsigned long*,unsigned long*) ;

__attribute__((used)) static int FUNC_1(u32 VAR_1, u32 *VAR_2, u8 *VAR_3,
         u32 *VAR_4)
{
 long VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;

 VAR_5 = FUNC_0(0, VAR_1, &VAR_6, &VAR_7,
      &VAR_8);

 *VAR_2 = VAR_6;
 *VAR_3 = VAR_7;
 *VAR_4 = VAR_8;

 return VAR_5 == 0 ? 0 : -VAR_0;
}
