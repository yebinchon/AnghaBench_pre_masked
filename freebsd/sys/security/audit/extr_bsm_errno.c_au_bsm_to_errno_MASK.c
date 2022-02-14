
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct bsm_errno {int be_local_errno; } ;


 int VAR_0 ;
 struct bsm_errno* FUNC_0 (int ) ;

int
FUNC_1(u_char VAR_1, int *VAR_2)
{
 const struct bsm_errno *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == ((void*)0) || VAR_3->be_local_errno == VAR_0)
  return (-1);
 *VAR_2 = VAR_3->be_local_errno;
 return (0);
}
