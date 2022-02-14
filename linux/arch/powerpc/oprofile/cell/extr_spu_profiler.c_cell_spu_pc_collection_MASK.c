
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(int VAR_3)
{
 u32 VAR_4;
 int VAR_5;



 VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 while (!(VAR_4 & VAR_0)) {

  FUNC_1(VAR_3, VAR_5);

  VAR_5++;

  if (VAR_5 >= VAR_1)

   break;

  VAR_4 = FUNC_0(VAR_3, VAR_2);
 }

 return VAR_5;
}
