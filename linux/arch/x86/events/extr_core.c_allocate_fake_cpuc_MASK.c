
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_hw_events {int is_fake; } ;


 int VAR_0 ;
 struct cpu_hw_events* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct cpu_hw_events*) ;
 scalar_t__ FUNC_2 (struct cpu_hw_events*,int) ;
 struct cpu_hw_events* FUNC_3 (int,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static struct cpu_hw_events *FUNC_5(void)
{
 struct cpu_hw_events *VAR_2;
 int VAR_3 = FUNC_4();

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_1);
 if (!VAR_2)
  return FUNC_0(-VAR_0);
 VAR_2->is_fake = 1;

 if (FUNC_2(VAR_2, VAR_3))
  goto error;

 return VAR_2;
error:
 FUNC_1(VAR_2);
 return FUNC_0(-VAR_0);
}
