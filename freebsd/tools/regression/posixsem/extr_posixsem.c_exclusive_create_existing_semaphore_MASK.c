
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int,int,int) ;
 int FUNC_3 (int ,int,int,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
 semid_t VAR_4;

 if (FUNC_2(&VAR_4, VAR_3, VAR_1, 0777, 1) < 0) {
  FUNC_0("ksem_open(O_CREAT)");
  return;
 }
 FUNC_1(VAR_4);

 FUNC_3(VAR_3, VAR_1 | VAR_2, 0777, 1, VAR_0);

 FUNC_4(VAR_3);
}
