
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc {scalar_t__ res_map; } ;



__attribute__((used)) static unsigned long FUNC_0(struct ioc *VAR_0, unsigned long *VAR_1,
     unsigned int VAR_2)
{
 return (((unsigned long)VAR_1 - (unsigned long)VAR_0->res_map) << 3)
  + VAR_2;
}
