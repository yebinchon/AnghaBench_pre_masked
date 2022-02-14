
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {scalar_t__ bank; scalar_t__ status; scalar_t__ addr; scalar_t__ misc; } ;



__attribute__((used)) static inline bool FUNC_0(struct mce *VAR_0, struct mce *VAR_1)
{
 return VAR_0->bank != VAR_1->bank ||
  VAR_0->status != VAR_1->status ||
  VAR_0->addr != VAR_1->addr ||
  VAR_0->misc != VAR_1->misc;
}
