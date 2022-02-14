
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int kvm_t ;
struct TYPE_3__ {scalar_t__ n_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;
 int * FUNC_5 (int *,char const*,int *,int ,char*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static kvm_t *
FUNC_8(char const *VAR_3)
{
 kvm_t *VAR_4 = ((void*)0);
 char VAR_5[VAR_1];

 VAR_4 = FUNC_5(((void*)0), VAR_3, ((void*)0), VAR_0, VAR_5);
 if (FUNC_6(FUNC_1()) != 0)
  FUNC_0(1, "setgid");
 if (VAR_4 == ((void*)0)) {
  FUNC_7("kvm_openfiles: %s", VAR_5);
  return (((void*)0));
 }

 if (FUNC_4(VAR_4, VAR_2) < 0) {
  FUNC_7("kvm_nlist: %s", FUNC_3(VAR_4));
  goto fail;
 }

 if (VAR_2[0].n_type == 0) {
  FUNC_7("kvm_nlist: no namelist");
  goto fail;
 }

 return (VAR_4);
fail:
 FUNC_2(VAR_4);

 return (((void*)0));
}
