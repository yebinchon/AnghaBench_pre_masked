
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_setting {int freq; } ;
typedef int register_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4, const struct cf_setting *VAR_5)
{
 register_t VAR_6;

 if (VAR_5 == ((void*)0))
  return (VAR_0);

 VAR_6 = FUNC_1(VAR_3);
 VAR_6 &= ~(VAR_1 | VAR_2);

 if (VAR_5->freq == 5000)
  VAR_6 |= VAR_1;
 else if (VAR_5->freq == 2500)
  VAR_6 |= VAR_2;






 FUNC_3();
 FUNC_2(VAR_3, VAR_6);
 FUNC_3(); FUNC_0();

 return (0);
}
