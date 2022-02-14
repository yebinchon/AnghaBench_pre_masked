
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(int *VAR_3)
{

 FUNC_0(FUNC_1(VAR_0, VAR_1, 0, VAR_3) != -1,
     "socketpair(PF_UNIX, SOCK_STREAM) failed: %s", FUNC_2(VAR_2));
}
