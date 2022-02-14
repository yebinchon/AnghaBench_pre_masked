
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct komeda_component {int supported_outputs; int pipeline; } ;


 struct komeda_component* FUNC_0 (int ,int) ;

__attribute__((used)) static inline struct komeda_component *
FUNC_1(struct komeda_component *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = VAR_0->supported_outputs & (VAR_1);

 return FUNC_0(VAR_0->pipeline, VAR_2);
}
