
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int signo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int ,char*) ;
 size_t FUNC_2 (int ,int*,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_3)
{
 size_t VAR_4;

 VAR_4 = FUNC_2(VAR_2[1], &VAR_3, sizeof(VAR_3));
 if (VAR_4 != sizeof(VAR_3)) {
  FUNC_1(VAR_1, "write: %m");
  FUNC_0(VAR_0);
 }
}
