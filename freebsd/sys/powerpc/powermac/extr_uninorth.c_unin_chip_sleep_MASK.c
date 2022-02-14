
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (int *,int ,int ,int ) ;

int
FUNC_2(device_t VAR_7, int VAR_8)
{
 if (VAR_7 == ((void*)0))
  VAR_7 = VAR_6;

 FUNC_1(VAR_7, VAR_0, VAR_5, 0);
 FUNC_0(10);
 if (VAR_8)
  FUNC_1(VAR_7, VAR_3, VAR_1, VAR_2);
 else
  FUNC_1(VAR_7, VAR_3, VAR_4, VAR_2);
 FUNC_0(10);

 return (0);
}
