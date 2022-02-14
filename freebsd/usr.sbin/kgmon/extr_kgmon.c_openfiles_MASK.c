
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kvmvars {int * kd; } ;
struct TYPE_3__ {int n_value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 () ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int) ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 void* FUNC_4 (char const*,char*,int *,int,char*) ;
 TYPE_1__* VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int*,int,int*,size_t*,int*,size_t) ;

int
FUNC_7(const char *VAR_16, char *VAR_17, struct kvmvars *VAR_18)
{
 size_t VAR_19;
 int VAR_20[3], VAR_21, VAR_22;
 char VAR_23[VAR_9];

 if (!VAR_12) {
  VAR_20[0] = VAR_1;
  VAR_20[1] = VAR_5;
  VAR_20[2] = VAR_4;
  VAR_19 = sizeof VAR_21;
  if (FUNC_6(VAR_20, 3, &VAR_21, &VAR_19, ((void*)0), 0) < 0)
   FUNC_0(20, "profiling not defined in kernel");
  if (!(VAR_0 || VAR_10 || VAR_11 || VAR_15 ||
      (VAR_14 &&
       (VAR_21 == VAR_2 || VAR_21 == VAR_3))))
   return (VAR_7);
  (void)FUNC_5(0);
  if (FUNC_6(VAR_20, 3, ((void*)0), ((void*)0), &VAR_21, VAR_19) >= 0)
   return (VAR_8);
  (void)FUNC_5(FUNC_1());
  FUNC_2(VAR_21);
  return (VAR_7);
 }
 VAR_22 = (VAR_0 || VAR_10 || VAR_11 || VAR_14 || VAR_15)
     ? VAR_8 : VAR_7;
 VAR_18->kd = FUNC_4(VAR_16, VAR_17, ((void*)0), VAR_22, VAR_23);
 if (VAR_18->kd == ((void*)0)) {
  if (VAR_22 == VAR_8) {
   VAR_22 = VAR_7;
   VAR_18->kd = FUNC_4(VAR_16, VAR_17, ((void*)0), VAR_7,
       VAR_23);
  }
  if (VAR_18->kd == ((void*)0))
   FUNC_0(2, "kvm_openfiles: %s", VAR_23);
  FUNC_2(VAR_3);
 }
 if (FUNC_3(VAR_18->kd, VAR_13) < 0)
  FUNC_0(3, "%s: no namelist", VAR_16);
 if (!VAR_13[VAR_6].n_value)
  FUNC_0(20, "profiling not defined in kernel");
 return (VAR_22);
}
