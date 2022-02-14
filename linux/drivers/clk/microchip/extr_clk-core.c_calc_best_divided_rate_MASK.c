
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long,int ,int ) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long VAR_0,
         unsigned long VAR_1,
         u32 VAR_2,
         u32 VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8;





 VAR_7 = VAR_1 / VAR_0;
 VAR_7 = FUNC_1(VAR_7, VAR_3, VAR_2);
 VAR_8 = FUNC_1(VAR_7 + 1, VAR_3, VAR_2);

 VAR_4 = VAR_1 / VAR_7;
 VAR_5 = VAR_1 / VAR_8;
 if (FUNC_0(VAR_0 - VAR_5) < FUNC_0(VAR_0 - VAR_4))
  VAR_6 = VAR_5;
 else
  VAR_6 = VAR_4;

 return VAR_6;
}
