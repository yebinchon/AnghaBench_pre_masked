
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef unsigned short u16 ;
typedef int ktime_t ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned short FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

unsigned short
FUNC_5(void)
{
 u_long VAR_4;
 ktime_t VAR_5;
 u16 VAR_6;
 u16 VAR_7;

 FUNC_3(&VAR_2, VAR_4);

 VAR_5 = FUNC_1();
 VAR_6 = FUNC_0(FUNC_2(VAR_5, VAR_3),
   (VAR_0 / 8000));

 VAR_7 = VAR_1 + VAR_6;
 FUNC_4(&VAR_2, VAR_4);
 return VAR_7;
}
