
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_uflow_resources {size_t max; struct ib_uflow_resources* counters; void* collection; } ;


 int VAR_0 ;
 void* FUNC_0 (size_t,int,int ) ;
 int FUNC_1 (struct ib_uflow_resources*) ;
 struct ib_uflow_resources* FUNC_2 (int,int ) ;

struct ib_uflow_resources *FUNC_3(size_t VAR_1)
{
 struct ib_uflow_resources *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);

 if (!VAR_2)
  return ((void*)0);

 if (!VAR_1)
  goto out;

 VAR_2->counters =
  FUNC_0(VAR_1, sizeof(*VAR_2->counters), VAR_0);
 VAR_2->collection =
  FUNC_0(VAR_1, sizeof(*VAR_2->collection), VAR_0);

 if (!VAR_2->counters || !VAR_2->collection)
  goto err;

out:
 VAR_2->max = VAR_1;
 return VAR_2;

err:
 FUNC_1(VAR_2->counters);
 FUNC_1(VAR_2);

 return ((void*)0);
}
