
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_cur; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,struct rlimit*) ;
 scalar_t__ FUNC_2 (int ,struct rlimit*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_2)
{
 struct rlimit VAR_3;
 int VAR_4;

 VAR_4 = (intptr_t)VAR_2;
 if (FUNC_1(VAR_0, &VAR_3) < 0)
  return (FUNC_0(3, VAR_1));
 VAR_3.rlim_cur = VAR_4;
 if (FUNC_2(VAR_0, &VAR_3) < 0)
  return (FUNC_0(4, VAR_1));
 return (0);
}
