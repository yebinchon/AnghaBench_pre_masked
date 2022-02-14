
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ilsel_source_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,unsigned int) ;
 unsigned int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (unsigned int,int *) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(ilsel_source_t VAR_4)
{
 unsigned int VAR_5;

 if (FUNC_4(VAR_4 > VAR_1)) {
  FUNC_2("Aliased sources must use ilsel_enable_fixed()\n");
  return -VAR_0;
 }

 do {
  VAR_5 = FUNC_1(&VAR_3, VAR_2);
 } while (FUNC_3(VAR_5, &VAR_3));

 FUNC_0(VAR_4, VAR_5);

 return VAR_5;
}
