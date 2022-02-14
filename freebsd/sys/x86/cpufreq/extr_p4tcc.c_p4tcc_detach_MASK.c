
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_setting {int freq; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct cf_setting*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct cf_setting VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return (VAR_2);




 VAR_1.freq = 10000;
 FUNC_1(VAR_0, &VAR_1);
 return(0);
}
