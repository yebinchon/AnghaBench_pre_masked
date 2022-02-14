
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dra7_atl_clock_info {scalar_t__ iobase; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct dra7_atl_clock_info *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->iobase + VAR_1);
}
