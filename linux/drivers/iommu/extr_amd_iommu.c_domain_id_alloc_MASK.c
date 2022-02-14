
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static u16 FUNC_5(void)
{
 int VAR_3;

 FUNC_3(&VAR_2);
 VAR_3 = FUNC_2(VAR_1, VAR_0);
 FUNC_0(VAR_3 == 0);
 if (VAR_3 > 0 && VAR_3 < VAR_0)
  FUNC_1(VAR_3, VAR_1);
 else
  VAR_3 = 0;
 FUNC_4(&VAR_2);

 return VAR_3;
}
