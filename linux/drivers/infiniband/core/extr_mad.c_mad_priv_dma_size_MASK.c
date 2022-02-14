
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_private {size_t mad_size; } ;
struct ib_grh {int dummy; } ;



__attribute__((used)) static size_t FUNC_0(const struct ib_mad_private *VAR_0)
{
 return sizeof(struct ib_grh) + VAR_0->mad_size;
}
