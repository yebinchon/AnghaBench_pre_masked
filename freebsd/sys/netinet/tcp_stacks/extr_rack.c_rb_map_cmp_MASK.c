
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rack_sendmap {int r_end; int r_start; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static __inline int
FUNC_2(struct rack_sendmap *VAR_0, struct rack_sendmap *VAR_1)
{
 if (FUNC_0(VAR_0->r_start, VAR_1->r_start) &&
     FUNC_1(VAR_0->r_start, VAR_1->r_end)) {
  return (0);
 } else if (FUNC_0(VAR_0->r_start, VAR_1->r_end)) {
  return (1);
 }
 return (-1);
}
