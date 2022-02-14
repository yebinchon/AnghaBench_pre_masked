
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef scalar_t__ u_int ;
struct pcpu {unsigned long long pc_mid; int pc_cpuid; } ;
struct intr_vector {unsigned long long iv_mid; struct fire_icarg* iv_icarg; } ;
struct fire_softc {scalar_t__ sc_mode; } ;
struct fire_icarg {int fica_map; struct fire_softc* fica_sc; } ;


 scalar_t__ VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 int FUNC_0 (struct fire_softc*,int ,unsigned long long) ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 scalar_t__ VAR_8 ;
 struct pcpu* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(void *VAR_9)
{
 struct intr_vector *VAR_10;
 struct fire_icarg *VAR_11;
 struct fire_softc *VAR_12;
 struct pcpu *VAR_13;
 uint64_t VAR_14;
 u_int VAR_15, VAR_16;

 VAR_10 = VAR_9;
 VAR_11 = VAR_10->iv_icarg;
 VAR_12 = VAR_11->fica_sc;
 VAR_14 = VAR_5;
 if (VAR_12->sc_mode == VAR_0)
  VAR_14 |= (VAR_10->iv_mid << VAR_7) &
      VAR_6;
 else
  VAR_14 |= (VAR_10->iv_mid << VAR_2) &
      VAR_1;





 VAR_15 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_8; ++VAR_16) {
  VAR_13 = FUNC_1(VAR_16);
  if (VAR_13 == ((void*)0) || VAR_10->iv_mid != VAR_13->pc_mid)
   continue;
  VAR_15 = VAR_13->pc_cpuid % 4;
  break;
 }
 VAR_14 |= (1ULL << VAR_15) << VAR_4 &
     VAR_3;
 FUNC_0(VAR_12, VAR_11->fica_map, VAR_14);
}
