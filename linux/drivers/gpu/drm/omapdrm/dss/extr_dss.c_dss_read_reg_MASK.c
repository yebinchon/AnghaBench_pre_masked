
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dss_reg {scalar_t__ idx; } ;
struct dss_device {scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct dss_device *VAR_0, const struct dss_reg VAR_1)
{
 return FUNC_0(VAR_0->base + VAR_1.idx);
}
