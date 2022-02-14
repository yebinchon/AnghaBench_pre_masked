
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int ch ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,char*,int,int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_0)
{
 ssize_t VAR_1;
 char VAR_2;

 VAR_1 = FUNC_2(VAR_0, &VAR_2, sizeof(VAR_2), 0);
 if (VAR_1 < 0)
  FUNC_0(-1, "receive_and_exit: recv");
 FUNC_1(0);
}
