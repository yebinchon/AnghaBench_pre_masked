
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,int,int,int) ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(int VAR_4)
{
 int VAR_5;





 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_1[VAR_5] == VAR_4)
   return VAR_5;
 }


 if (VAR_3 >= VAR_2) {
  FUNC_0(1, "APIC: NR_CPUS/possible_cpus limit of %u reached. "
        "Processor %d/0x%x and the rest are ignored.\n",
        VAR_2, VAR_3, VAR_4);
  return -VAR_0;
 }

 VAR_1[VAR_3] = VAR_4;
 return VAR_3++;
}
