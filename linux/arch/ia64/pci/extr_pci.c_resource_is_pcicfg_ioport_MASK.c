
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; int start; int end; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct resource *VAR_1)
{
 return (VAR_1->flags & VAR_0) &&
  VAR_1->start == 0xCF8 && VAR_1->end == 0xCFF;
}
