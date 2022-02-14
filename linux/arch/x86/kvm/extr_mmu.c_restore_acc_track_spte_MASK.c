
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static u64 FUNC_3(u64 VAR_3)
{
 u64 VAR_4 = VAR_3;
 u64 VAR_5 = (VAR_3 >> VAR_2)
    & VAR_1;

 FUNC_0(FUNC_2(VAR_3));
 FUNC_0(!FUNC_1(VAR_3));

 VAR_4 &= ~VAR_0;
 VAR_4 &= ~(VAR_1 <<
        VAR_2);
 VAR_4 |= VAR_5;

 return VAR_4;
}
