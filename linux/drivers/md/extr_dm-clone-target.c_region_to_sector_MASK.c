
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clone {unsigned long region_shift; } ;
typedef unsigned long sector_t ;



__attribute__((used)) static inline sector_t FUNC_0(struct clone *VAR_0, unsigned long VAR_1)
{
 return (VAR_1 << VAR_0->region_shift);
}
