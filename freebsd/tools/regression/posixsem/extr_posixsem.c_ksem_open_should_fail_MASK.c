
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semid_t ;
typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,char const*,int,int ,unsigned int) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(const char *VAR_1, int VAR_2, mode_t VAR_3, unsigned int
    VAR_4, int VAR_5)
{
 semid_t VAR_6;

 if (FUNC_3(&VAR_6, VAR_1, VAR_2, VAR_3, VAR_4) >= 0) {
  FUNC_0("ksem_open() didn't fail");
  FUNC_2(VAR_6);
  return;
 }
 if (VAR_0 != VAR_5) {
  FUNC_1("ksem_open");
  return;
 }
 FUNC_4();
}
