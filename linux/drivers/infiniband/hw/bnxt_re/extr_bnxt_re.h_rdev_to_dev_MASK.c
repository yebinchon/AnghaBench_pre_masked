
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct bnxt_re_dev {TYPE_1__ ibdev; } ;



__attribute__((used)) static inline struct device *FUNC_0(struct bnxt_re_dev *VAR_0)
{
 if (VAR_0)
  return &VAR_0->ibdev.dev;
 return ((void*)0);
}
