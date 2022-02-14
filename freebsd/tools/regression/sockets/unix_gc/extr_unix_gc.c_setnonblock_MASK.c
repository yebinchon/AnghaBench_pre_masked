
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(int VAR_3)
{

 if (FUNC_1(VAR_3, VAR_0, VAR_1) < 0)
  FUNC_0(-1, "%s: fcntl(F_SETFL, O_NONBLOCK)", VAR_2);
}
