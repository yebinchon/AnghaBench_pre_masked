
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amba_id {int mask; int id; } ;
struct amba_device {int periphid; scalar_t__ cid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct amba_id const*,struct amba_device*) ;

__attribute__((used)) static const struct amba_id *
FUNC_1(const struct amba_id *VAR_1, struct amba_device *VAR_2)
{
 while (VAR_1->mask) {
  if (((VAR_2->periphid & VAR_1->mask) == VAR_1->id) &&
   ((VAR_2->cid != VAR_0) ||
    (FUNC_0(VAR_1, VAR_2))))
   return VAR_1;
  VAR_1++;
 }
 return ((void*)0);
}
