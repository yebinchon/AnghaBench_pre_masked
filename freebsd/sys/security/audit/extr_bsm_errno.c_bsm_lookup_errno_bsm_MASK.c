
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct bsm_errno {scalar_t__ be_bsm_errno; } ;


 struct bsm_errno const* VAR_0 ;
 int FUNC_0 (struct bsm_errno const*) ;

__attribute__((used)) static const struct bsm_errno *
FUNC_1(u_char VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].be_bsm_errno == VAR_1)
   return (&VAR_0[VAR_2]);
 }
 return (((void*)0));
}
