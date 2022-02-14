
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct powerpc_intr {int pi_domain; scalar_t__ trig; scalar_t__ pic; scalar_t__ pol; int priv; int vector; int intline; int pi_cpuset; int fwcode; int cntindex; TYPE_1__* event; } ;
typedef enum intr_type { ____Placeholder_intr_type } intr_type ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
struct TYPE_3__ {int ie_fullname; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,int ,int ,int *) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,int ,int *) ;
 int FUNC_5 (scalar_t__,int ,int ,scalar_t__*,scalar_t__*) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_6 (TYPE_1__*,char const*,int ,int ,void*,int ,int,void**) ;
 int FUNC_7 (TYPE_1__**,void*,int ,int ,int ,int ,int ,int ,char*,int ) ;
 struct powerpc_intr* FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int VAR_6 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (struct powerpc_intr*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_14 (char const*,char*) ;

int
FUNC_15(const char *VAR_12, u_int VAR_13, driver_filter_t VAR_14,
    driver_intr_t VAR_15, void *VAR_16, enum intr_type VAR_17, void **VAR_18,
    int VAR_19)
{
 struct powerpc_intr *VAR_20;
 int VAR_21, VAR_22 = 0;

 VAR_20 = FUNC_8(VAR_13);
 if (VAR_20 == ((void*)0))
  return (VAR_0);

 if (VAR_20->event == ((void*)0)) {
  VAR_21 = FUNC_7(&VAR_20->event, (void *)VAR_20, 0, VAR_13,
      VAR_10, VAR_9,
      VAR_8, VAR_7, "irq%u:", VAR_13);
  if (VAR_21)
   return (VAR_21);

  VAR_22 = 1;
 }

 VAR_21 = FUNC_6(VAR_20->event, VAR_12, VAR_14, VAR_15, VAR_16,
     FUNC_9(VAR_17), VAR_17, VAR_18);
 if (VAR_21)
  return (VAR_21);
 VAR_20->pi_domain = VAR_19;
 if (FUNC_14(VAR_12, "IPI") != 0) {
  FUNC_1(&VAR_20->pi_cpuset);
  FUNC_0(&VAR_5[VAR_19], &VAR_20->pi_cpuset);
 }
 FUNC_11(&VAR_6);
 FUNC_10(VAR_20->event->ie_fullname, VAR_20->cntindex);
 FUNC_12(&VAR_6);

 if (!VAR_4) {
  VAR_21 = FUNC_13(VAR_20);

  if (!VAR_21) {
   if (VAR_20->trig == VAR_3)
    FUNC_5(VAR_20->pic, VAR_20->intline,
        VAR_20->fwcode, &VAR_20->trig, &VAR_20->pol);

   if (VAR_20->trig != VAR_2 ||
       VAR_20->pol != VAR_1)
    FUNC_3(VAR_20->pic, VAR_20->intline, VAR_20->trig, VAR_20->pol);

   if (VAR_20->pic == VAR_11)
    FUNC_2(VAR_20->pic, VAR_20->intline, VAR_20->pi_cpuset, &VAR_20->priv);

   if (VAR_22)
    FUNC_4(VAR_20->pic, VAR_20->intline, VAR_20->vector,
        &VAR_20->priv);
  }
 }
 return (VAR_21);
}
