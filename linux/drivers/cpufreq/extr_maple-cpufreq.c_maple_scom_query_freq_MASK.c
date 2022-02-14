
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long* VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void)
{
 unsigned long VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 <= VAR_4; VAR_6++)
  if ((((VAR_5 >> VAR_1) ^
        (VAR_3[VAR_6] >> VAR_0)) & 0x3) == 0)
   break;
 return VAR_6;
}
