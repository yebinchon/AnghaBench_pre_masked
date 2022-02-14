
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(int VAR_2)
{
    if (FUNC_1(VAR_2, VAR_1, VAR_0) == -1) {
        FUNC_2("failed to set FD_CLOEXEC");
        FUNC_0();
    }
}
