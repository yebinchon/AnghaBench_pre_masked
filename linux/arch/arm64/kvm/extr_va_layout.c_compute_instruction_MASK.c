
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static u32 FUNC_4(int VAR_7, u32 VAR_8, u32 VAR_9)
{
 u32 VAR_10 = VAR_0;

 switch (VAR_7) {
 case 0:
  VAR_10 = FUNC_3(VAR_2,
         VAR_3,
         VAR_9, VAR_8, VAR_6);
  break;

 case 1:

  VAR_10 = FUNC_2(VAR_3,
          VAR_9, VAR_9, VAR_8,
          VAR_4);
  break;

 case 2:
  VAR_10 = FUNC_1(VAR_8, VAR_9,
          VAR_5 & FUNC_0(11, 0),
          VAR_3,
          VAR_1);
  break;

 case 3:
  VAR_10 = FUNC_1(VAR_8, VAR_9,
          VAR_5 & FUNC_0(23, 12),
          VAR_3,
          VAR_1);
  break;

 case 4:

  VAR_10 = FUNC_2(VAR_3,
          VAR_9, VAR_9, VAR_8, 64 - VAR_4);
  break;
 }

 return VAR_10;
}
