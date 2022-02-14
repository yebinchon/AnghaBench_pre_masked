
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timeval const*,int *) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(const struct timeval *VAR_3)
{
 if (FUNC_0(VAR_3, ((void*)0)) == -1) {
  FUNC_1(VAR_0, "settimeofday failed: %m");
  return (VAR_1);
 }
 return (VAR_2);
}
