
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semid_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_2)
{
 semid_t VAR_3;

 if (FUNC_2(&VAR_3, VAR_0, 0, 0, 0) < 0)
  return (FUNC_0(1, VAR_1));
 if (FUNC_3(VAR_3) < 0)
  return (FUNC_0(2, VAR_1));
 if (FUNC_1(VAR_3) < 0)
  return (FUNC_0(3, VAR_1));
 return (FUNC_0(0, 0));
}
