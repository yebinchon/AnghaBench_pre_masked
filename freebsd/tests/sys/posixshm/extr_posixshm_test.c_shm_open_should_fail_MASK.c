
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int,int ) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1, int VAR_2, mode_t VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_5 == -1, "shm_open didn't fail");
 FUNC_0(VAR_4 == VAR_0,
     "shm_open didn't fail with expected errno; errno=%d; expected "
     "errno=%d", VAR_0, VAR_4);
}
