
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semid_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(unsigned int VAR_1, int VAR_2)
{
 semid_t VAR_3;

 if (FUNC_3(&VAR_3, VAR_1) >= 0) {
  FUNC_0("ksem_init() didn't fail");
  FUNC_2(VAR_3);
  return;
 }
 if (VAR_0 != VAR_2) {
  FUNC_1("ksem_init");
  return;
 }
 FUNC_4();
}
