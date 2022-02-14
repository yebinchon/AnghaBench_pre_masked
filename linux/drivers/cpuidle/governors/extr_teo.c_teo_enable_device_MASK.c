
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct teo_cpu {int * intervals; } ;
struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct teo_cpu*,int ,int) ;
 struct teo_cpu* FUNC_1 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct cpuidle_driver *VAR_3,
        struct cpuidle_device *VAR_4)
{
 struct teo_cpu *VAR_5 = FUNC_1(&VAR_2, VAR_4->cpu);
 int VAR_6;

 FUNC_0(VAR_5, 0, sizeof(*VAR_5));

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_5->intervals[VAR_6] = VAR_1;

 return 0;
}
