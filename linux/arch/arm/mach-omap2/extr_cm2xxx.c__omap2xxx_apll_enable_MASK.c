
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(u8 VAR_3, u8 VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_6 = VAR_1 << VAR_3;

 VAR_5 = FUNC_0(VAR_2, VAR_0);
 if (VAR_5 & VAR_6)
  return 0;

 VAR_5 |= VAR_6;
 FUNC_1(VAR_5, VAR_2, VAR_0);

 FUNC_2(0, VAR_2, 1, VAR_4);





 return 0;
}
