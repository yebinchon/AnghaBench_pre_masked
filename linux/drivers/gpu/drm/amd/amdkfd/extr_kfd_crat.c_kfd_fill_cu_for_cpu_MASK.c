
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crat_subtype_computeunit {int length; int proximity_domain; int processor_id_low; int num_cpu_cores; int flags; int type; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cpumask* FUNC_0 (int) ;
 int FUNC_1 (struct cpumask const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct crat_subtype_computeunit*,int ,int) ;

__attribute__((used)) static int FUNC_4(int VAR_5, int *VAR_6,
    int VAR_7,
    struct crat_subtype_computeunit *VAR_8)
{
 const struct cpumask *VAR_9;

 *VAR_6 -= sizeof(struct crat_subtype_computeunit);
 if (*VAR_6 < 0)
  return -VAR_4;

 FUNC_3(VAR_8, 0, sizeof(struct crat_subtype_computeunit));


 VAR_8->type = VAR_1;
 VAR_8->length = sizeof(struct crat_subtype_computeunit);
 VAR_8->flags = VAR_2;

 VAR_9 = FUNC_0(VAR_5);


 VAR_8->flags |= VAR_0;
 VAR_8->proximity_domain = VAR_7;
 VAR_8->processor_id_low = FUNC_2(VAR_5);
 if (VAR_8->processor_id_low == -1)
  return -VAR_3;

 VAR_8->num_cpu_cores = FUNC_1(VAR_9);

 return 0;
}
