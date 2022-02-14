
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b53_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct b53_device*) ;
 scalar_t__ FUNC_1 (struct b53_device*) ;

__attribute__((used)) static inline int FUNC_2(struct b53_device *VAR_2, int VAR_3)
{
 if (FUNC_0(VAR_2) || FUNC_1(VAR_2))
  return VAR_3 == VAR_1;
 else
  return VAR_3 == VAR_0;
}
