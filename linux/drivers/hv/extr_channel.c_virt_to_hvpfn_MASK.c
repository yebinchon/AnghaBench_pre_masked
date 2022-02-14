
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long phys_addr_t ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 unsigned long FUNC_2 (void*) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static unsigned long FUNC_5(void *VAR_1)
{
 phys_addr_t VAR_2;

 if (FUNC_1(VAR_1))
  VAR_2 = FUNC_3(FUNC_4(VAR_1)) +
      FUNC_2(VAR_1);
 else
  VAR_2 = FUNC_0(VAR_1);

 return VAR_2 >> VAR_0;
}
