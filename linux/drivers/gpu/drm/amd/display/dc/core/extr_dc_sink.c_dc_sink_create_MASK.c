
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_sink_init_data {int dummy; } ;
struct dc_sink {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct dc_sink*,struct dc_sink_init_data const*) ;
 int FUNC_1 (struct dc_sink*) ;
 int FUNC_2 (int *) ;
 struct dc_sink* FUNC_3 (int,int ) ;

struct dc_sink *FUNC_4(const struct dc_sink_init_data *VAR_1)
{
 struct dc_sink *VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);

 if (((void*)0) == VAR_2)
  goto alloc_fail;

 if (0 == FUNC_0(VAR_2, VAR_1))
  goto construct_fail;

 FUNC_2(&VAR_2->refcount);

 return VAR_2;

construct_fail:
 FUNC_1(VAR_2);

alloc_fail:
 return ((void*)0);
}
