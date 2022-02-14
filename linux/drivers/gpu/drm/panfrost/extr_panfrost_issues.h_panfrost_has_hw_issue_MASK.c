
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw_issues; } ;
struct panfrost_device {TYPE_1__ features; } ;
typedef enum panfrost_hw_issue { ____Placeholder_panfrost_hw_issue } panfrost_hw_issue ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct panfrost_device *VAR_0,
      enum panfrost_hw_issue VAR_1)
{
 return FUNC_0(VAR_1, VAR_0->features.hw_issues);
}
