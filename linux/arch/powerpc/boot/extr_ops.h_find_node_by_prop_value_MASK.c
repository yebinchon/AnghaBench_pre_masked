
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* (* find_node_by_prop_value ) (void const*,char const*,char const*,int) ;} ;


 TYPE_1__ VAR_0 ;
 void* FUNC_0 (void const*,char const*,char const*,int) ;

__attribute__((used)) static inline void *FUNC_1(const void *VAR_1,
                                            const char *VAR_2,
                                            const char *VAR_3, int VAR_4)
{
 if (VAR_0.find_node_by_prop_value)
  return VAR_0.find_node_by_prop_value(VAR_1, VAR_2,
                                        VAR_3, VAR_4);

 return ((void*)0);
}
