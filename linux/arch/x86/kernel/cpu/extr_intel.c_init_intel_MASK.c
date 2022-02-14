
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int cpuid_level; int x86; int x86_model; int x86_cache_alignment; int x86_clflush_size; unsigned int x86_cache_size; int x86_stepping; int x86_model_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct cpuinfo_x86*,int ) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (struct cpuinfo_x86*) ;
 int FUNC_4 (struct cpuinfo_x86*) ;
 int FUNC_5 (struct cpuinfo_x86*) ;
 int FUNC_6 (struct cpuinfo_x86*) ;
 int FUNC_7 (struct cpuinfo_x86*) ;
 int FUNC_8 (struct cpuinfo_x86*) ;
 int FUNC_9 (struct cpuinfo_x86*) ;
 int FUNC_10 (struct cpuinfo_x86*) ;
 int FUNC_11 (struct cpuinfo_x86*) ;
 int FUNC_12 (int ,unsigned int,unsigned int) ;
 int FUNC_13 (struct cpuinfo_x86*,int ) ;
 int FUNC_14 (struct cpuinfo_x86*,int ) ;
 int FUNC_15 (struct cpuinfo_x86*) ;
 int FUNC_16 (int ,char*) ;
 scalar_t__ VAR_20 ;
 int FUNC_17 () ;
 int FUNC_18 () ;

__attribute__((used)) static void FUNC_19(struct cpuinfo_x86 *VAR_21)
{
 FUNC_8(VAR_21);

 FUNC_11(VAR_21);






 FUNC_3(VAR_21);

 if (!FUNC_1(VAR_21, VAR_19)) {




  FUNC_5(VAR_21);



 }

 FUNC_9(VAR_21);

 if (VAR_21->cpuid_level > 9) {
  unsigned VAR_22 = FUNC_2(10);

  if ((VAR_22 & 0xff) && (((VAR_22>>8) & 0xff) > 1))
   FUNC_14(VAR_21, VAR_6);
 }

 if (FUNC_1(VAR_21, VAR_18))
  FUNC_14(VAR_21, VAR_10);

 if (FUNC_0(VAR_9)) {
  unsigned int VAR_23, VAR_24;

  FUNC_12(VAR_1, VAR_23, VAR_24);
  if (!(VAR_23 & (1<<11)))
   FUNC_14(VAR_21, VAR_7);
  if (!(VAR_23 & (1<<12)))
   FUNC_14(VAR_21, VAR_14);
 }

 if (VAR_21->x86 == 6 && FUNC_0(VAR_8) &&
     (VAR_21->x86_model == 29 || VAR_21->x86_model == 46 || VAR_21->x86_model == 47))
  FUNC_13(VAR_21, VAR_4);

 if (VAR_21->x86 == 6 && FUNC_0(VAR_11) &&
  ((VAR_21->x86_model == VAR_0)))
  FUNC_13(VAR_21, VAR_5);
 if (VAR_21->x86 == 6) {
  unsigned int VAR_25 = VAR_21->x86_cache_size;
  char *VAR_26 = ((void*)0);

  switch (VAR_21->x86_model) {
  case 5:
   if (VAR_25 == 0)
    VAR_26 = "Celeron (Covington)";
   else if (VAR_25 == 256)
    VAR_26 = "Mobile Pentium II (Dixon)";
   break;

  case 6:
   if (VAR_25 == 128)
    VAR_26 = "Celeron (Mendocino)";
   else if (VAR_21->x86_stepping == 0 || VAR_21->x86_stepping == 5)
    VAR_26 = "Celeron-A";
   break;

  case 8:
   if (VAR_25 == 128)
    VAR_26 = "Celeron (Coppermine)";
   break;
  }

  if (VAR_26)
   FUNC_16(VAR_21->x86_model_id, VAR_26);
 }

 if (VAR_21->x86 == 15)
  FUNC_14(VAR_21, VAR_13);
 if (VAR_21->x86 == 6)
  FUNC_14(VAR_21, VAR_12);



 FUNC_15(VAR_21);

 if (FUNC_1(VAR_21, VAR_17))
  FUNC_7(VAR_21);

 if (FUNC_1(VAR_21, VAR_16))
  FUNC_6(VAR_21);

 FUNC_10(VAR_21);

 if (VAR_20 == VAR_3)
  FUNC_18();
 if (VAR_20 == VAR_2)
  FUNC_17();
}
