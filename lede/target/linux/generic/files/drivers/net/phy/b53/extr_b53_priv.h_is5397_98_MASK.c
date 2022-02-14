
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b53_device {scalar_t__ chip_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct b53_device *VAR_2)
{
 return VAR_2->chip_id == VAR_0 ||
  VAR_2->chip_id == VAR_1;
}
