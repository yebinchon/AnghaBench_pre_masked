
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct powerpc_intr {scalar_t__ irq; int vector; size_t cntindex; int * cntp; int pi_cpuset; scalar_t__ ipi; scalar_t__ fwcode; int * pic; int pol; int trig; int * priv; int * event; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_1 (int *,int) ;
 int FUNC_2 (struct powerpc_intr*,int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,size_t) ;
 struct powerpc_intr* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 struct powerpc_intr** VAR_10 ;
 int FUNC_7 (char*,char*,scalar_t__) ;

__attribute__((used)) static struct powerpc_intr *
FUNC_8(u_int VAR_11)
{
 char VAR_12[16];
 struct powerpc_intr *VAR_13, *VAR_14;
 int VAR_15;

 FUNC_5(&VAR_5);
 for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
  VAR_13 = VAR_10[VAR_15];
  if (VAR_13 != ((void*)0) && VAR_13->irq == VAR_11) {
   FUNC_6(&VAR_5);
   return (VAR_13);
  }
 }

 VAR_13 = FUNC_4(sizeof(*VAR_13), VAR_2, VAR_3);
 if (VAR_13 == ((void*)0)) {
  FUNC_6(&VAR_5);
  return (((void*)0));
 }

 VAR_13->event = ((void*)0);
 VAR_13->cntp = ((void*)0);
 VAR_13->priv = ((void*)0);
 VAR_13->trig = VAR_1;
 VAR_13->pol = VAR_0;
 VAR_13->irq = VAR_11;
 VAR_13->pic = ((void*)0);
 VAR_13->vector = -1;
 VAR_13->fwcode = 0;
 VAR_13->ipi = 0;




 FUNC_0(0, &VAR_13->pi_cpuset);


 for (VAR_15 = 0; VAR_15 < VAR_8 && VAR_15 <= VAR_9;
     VAR_15++) {
  VAR_14 = VAR_10[VAR_15];
  if (VAR_14 != ((void*)0) && VAR_14->irq == VAR_11)
   break;
  if (VAR_14 == ((void*)0) && VAR_13->vector == -1)
   VAR_13->vector = VAR_15;
  VAR_14 = ((void*)0);
 }

 if (VAR_14 == ((void*)0) && VAR_13->vector != -1) {
  VAR_10[VAR_13->vector] = VAR_13;
  VAR_13->cntindex = FUNC_1(&VAR_7, 1);
  VAR_13->cntp = &VAR_6[VAR_13->cntindex];
  FUNC_7(VAR_12, "irq%u:", VAR_13->irq);
  FUNC_3(VAR_12, VAR_13->cntindex);
  VAR_9++;
 }
 FUNC_6(&VAR_5);

 if (VAR_14 != ((void*)0) || VAR_13->vector == -1) {
  FUNC_2(VAR_13, VAR_2);
  VAR_13 = VAR_14;
 }

 return (VAR_13);
}
