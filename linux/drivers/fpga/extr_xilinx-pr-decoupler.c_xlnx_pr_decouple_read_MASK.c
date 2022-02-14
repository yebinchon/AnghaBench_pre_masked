
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xlnx_pr_decoupler_data {scalar_t__ io_base; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(const struct xlnx_pr_decoupler_data *VAR_0,
     u32 VAR_1)
{
 return FUNC_0(VAR_0->io_base + VAR_1);
}
