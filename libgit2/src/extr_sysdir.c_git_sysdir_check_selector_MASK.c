
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ git_sysdir_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(git_sysdir_t VAR_2)
{
 if (VAR_2 < FUNC_0(VAR_1))
  return 0;

 FUNC_1(VAR_0, "config directory selector out of range");
 return -1;
}
