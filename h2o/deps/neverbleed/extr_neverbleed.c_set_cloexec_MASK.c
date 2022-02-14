
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,int ,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_2)
{
    if (FUNC_1(VAR_2, VAR_0, VAR_1) == -1)
        FUNC_0("failed to set O_CLOEXEC to fd %d", VAR_2);
}
