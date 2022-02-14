
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counters {int cpu; struct counters* next_cpu; } ;


 int VAR_0 ;
 struct counters* VAR_1 ;
 struct counters** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_4, VAR_5, VAR_6;
 struct counters *VAR_7, *VAR_8;

 for(VAR_4=0; VAR_4<VAR_3; VAR_4++) {
  VAR_7 = &VAR_1[VAR_4];
  if (VAR_7->next_cpu) {

   continue;
  }
  VAR_6 = VAR_7->cpu;
  if (VAR_6 >= VAR_0) {
   FUNC_0("CPU %d to big\n", VAR_6);
   continue;
  }
  if (VAR_2[VAR_6] == ((void*)0)) {
   VAR_2[VAR_6] = VAR_7;
  } else {

   continue;
  }

  for(VAR_5=(VAR_4+1); VAR_5<VAR_3; VAR_5++) {
   VAR_8 = &VAR_1[VAR_5];
   if (VAR_8->next_cpu) {
    continue;
   }
   if (VAR_8->cpu == VAR_6) {

    VAR_7->next_cpu = VAR_8;
    VAR_7 = VAR_8;
   }
  }
 }
}
