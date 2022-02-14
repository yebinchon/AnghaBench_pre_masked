
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox_device {scalar_t__ mbox_base; } ;


 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline
unsigned int FUNC_1(struct omap_mbox_device *VAR_0, size_t VAR_1)
{
 return FUNC_0(VAR_0->mbox_base + VAR_1);
}
