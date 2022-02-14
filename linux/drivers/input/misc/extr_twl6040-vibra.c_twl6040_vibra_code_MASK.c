
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u8 FUNC_0(int VAR_3, int VAR_4, int VAR_5,
        int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 u8 VAR_10;


 VAR_8 = (VAR_3 * VAR_5 * VAR_1) /
  (100 * (VAR_4 + VAR_5));


 VAR_9 = VAR_8 / 50;
 if (VAR_9 > VAR_0)
  VAR_9 = VAR_0;


 VAR_10 = (u8)((VAR_6 * VAR_9) / VAR_2);


 VAR_10 *= VAR_7;

 return VAR_10;
}
