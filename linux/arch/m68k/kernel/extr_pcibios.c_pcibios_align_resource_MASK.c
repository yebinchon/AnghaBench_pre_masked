
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int flags; } ;
typedef int resource_size_t ;


 int VAR_0 ;

resource_size_t FUNC_0(void *VAR_1, const struct resource *VAR_2,
 resource_size_t VAR_3, resource_size_t VAR_4)
{
 resource_size_t VAR_5 = VAR_2->start;

 if ((VAR_2->flags & VAR_0) && (VAR_5 & 0x300))
  VAR_5 = (VAR_5 + 0x3ff) & ~0x3ff;

 VAR_5 = (VAR_5 + VAR_4 - 1) & ~(VAR_4 - 1);

 return VAR_5;
}
