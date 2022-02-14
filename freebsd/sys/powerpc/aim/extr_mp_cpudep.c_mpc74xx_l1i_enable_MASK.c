
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static register_t
FUNC_3(void)
{
 register_t VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 & VAR_0)
  return (VAR_3);


 VAR_3 |= VAR_0;
 FUNC_0();
 FUNC_2(VAR_2, VAR_3 | VAR_1);
 FUNC_0();

 return (VAR_3);
}
