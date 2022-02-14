
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
 semid_t VAR_2;

 if (FUNC_2(&VAR_2, VAR_1) < 0) {
  FUNC_0("ksem_init");
  return;
 }

 FUNC_3(VAR_2, VAR_0);

 FUNC_1(VAR_2);
}
