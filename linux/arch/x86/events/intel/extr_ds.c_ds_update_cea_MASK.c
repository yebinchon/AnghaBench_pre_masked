
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phys_addr_t ;
typedef int pgprot_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (void*) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, void *VAR_2, size_t VAR_3, pgprot_t VAR_4)
{
 unsigned long VAR_5 = (unsigned long)VAR_1;
 phys_addr_t VAR_6;
 size_t VAR_7 = 0;

 VAR_6 = FUNC_4(VAR_2);

 FUNC_2();
 for (; VAR_7 < VAR_3; VAR_7 += VAR_0, VAR_6 += VAR_0, VAR_1 += VAR_0)
  FUNC_0(VAR_1, VAR_6, VAR_4);





 FUNC_1(VAR_5, VAR_5 + VAR_3);
 FUNC_3();
}
