
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uma_zone_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int ,int ,int *,int *,int ) ;

uma_zone_t
FUNC_3(char *VAR_4, int VAR_5)
{
 uma_zone_t VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_1, VAR_2, ((void*)0), ((void*)0),
     VAR_3);






 if (VAR_0 > 0)
  VAR_0 += FUNC_1(VAR_6, VAR_5);
 else
  FUNC_0(VAR_3, FUNC_1(VAR_6, VAR_5));

 return (VAR_6);
}
