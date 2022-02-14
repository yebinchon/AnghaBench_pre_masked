
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct bsm_errno {scalar_t__ be_local_errno; char const* be_strerror; } ;


 scalar_t__ VAR_0 ;
 struct bsm_errno* FUNC_0 (int ) ;
 char const* FUNC_1 (scalar_t__) ;

const char *
FUNC_2(u_char VAR_1)
{
 const struct bsm_errno *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  return ("Unrecognized BSM error");
 if (VAR_2->be_local_errno != VAR_0)
  return (FUNC_1(VAR_2->be_local_errno));
 return (VAR_2->be_strerror);
}
