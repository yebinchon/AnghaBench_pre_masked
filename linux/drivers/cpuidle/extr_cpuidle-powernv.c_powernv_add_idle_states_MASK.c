
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pnv_idle_states_t {int flags; scalar_t__ latency_ns; scalar_t__ residency_ns; char* name; int psscr_mask; int psscr_val; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int,char*,int ,int ,unsigned int,unsigned int,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 () ;
 struct pnv_idle_states_t* VAR_13 ;
 int FUNC_3 (char*) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_15 = 1;
 int VAR_16;
 u32 VAR_17 = 0;
 int VAR_18;
 u32 VAR_19 = FUNC_2();



 if (VAR_12 <= 0) {
  FUNC_3("cpuidle-powernv : Only Snooze is available\n");
  goto out;
 }


 VAR_16 = VAR_12;





 if (VAR_12 > VAR_2 - 1) {
  FUNC_3("cpuidle-powernv: discovered idle states more than allowed");
  VAR_16 = VAR_2 - 1;
 }





 VAR_17 = (VAR_13[0].flags &
      (VAR_7 | VAR_6));

 for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
  unsigned int VAR_20, VAR_21;
  bool VAR_22 = 0;
  struct pnv_idle_states_t *VAR_23 = &VAR_13[VAR_18];





  if ((VAR_23->flags & VAR_19) != VAR_23->flags)
   continue;





  if (VAR_23->latency_ns > VAR_9)
   continue;




  VAR_20 = FUNC_0(VAR_23->latency_ns, 1000);
  VAR_21 = FUNC_0(VAR_23->residency_ns, 1000);

  if (VAR_17 && !(VAR_23->valid))
    continue;

  if (VAR_23->flags & VAR_8)
   VAR_22 = 1;

  if (VAR_23->flags & VAR_3) {

   FUNC_1(VAR_15, "Nap",
       VAR_0, VAR_11,
       VAR_21, VAR_20, 0, 0);
  } else if (VAR_17 && !VAR_22) {
   FUNC_1(VAR_15, VAR_23->name,
       VAR_0, VAR_14,
       VAR_21, VAR_20,
       VAR_23->psscr_val,
       VAR_23->psscr_mask);
  }
  else
   continue;
  VAR_15++;
 }
out:
 return VAR_15;
}
