
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t off_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int,int ,size_t*) ;

__attribute__((used)) static size_t
FUNC_2(int VAR_1)
{
 off_t VAR_2;

 if (FUNC_1(VAR_1, VAR_0, &VAR_2) < 0)
  FUNC_0(1, "ioctl(DIOCGMEDIASIZE)");
 return (VAR_2);
}
