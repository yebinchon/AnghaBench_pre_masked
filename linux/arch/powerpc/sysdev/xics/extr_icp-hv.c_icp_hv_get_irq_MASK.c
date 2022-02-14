
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_7(void)
{
 unsigned int VAR_2 = FUNC_0(FUNC_4());
 unsigned int VAR_3 = VAR_2 & 0x00ffffff;
 unsigned int VAR_4;

 if (VAR_3 == VAR_0)
  return 0;

 VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (FUNC_3(VAR_4)) {
  FUNC_6(VAR_3);
  return VAR_4;
 }


 FUNC_5(VAR_3);


 FUNC_1(VAR_2);

 return 0;
}
