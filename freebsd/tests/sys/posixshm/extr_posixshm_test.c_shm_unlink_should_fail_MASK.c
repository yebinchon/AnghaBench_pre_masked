
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1, int VAR_2)
{

 FUNC_0(FUNC_1(VAR_1) == -1, "shm_unlink didn't fail");
 FUNC_0(VAR_2 == VAR_0,
     "shm_unlink didn't fail with expected errno; errno=%d; expected "
     "errno=%d", VAR_0, VAR_2);
}
