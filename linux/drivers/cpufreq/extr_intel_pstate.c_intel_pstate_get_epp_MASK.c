
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cpudata {int cpu; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cpudata*) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static s16 FUNC_3(struct cpudata *VAR_2, u64 VAR_3)
{
 s16 VAR_4;

 if (FUNC_0(VAR_1)) {




  if (!VAR_3) {
   VAR_4 = FUNC_2(VAR_2->cpu, VAR_0,
         &VAR_3);
   if (VAR_4)
    return VAR_4;
  }
  VAR_4 = (VAR_3 >> 24) & 0xff;
 } else {

  VAR_4 = FUNC_1(VAR_2);
 }

 return VAR_4;
}
