
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int adapter_type; } ;
struct TYPE_4__ {TYPE_1__ lldi; } ;
struct c4iw_dev {TYPE_2__ rdev; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct c4iw_dev *VAR_0, u64 VAR_1)
{
 return (FUNC_0(VAR_0->rdev.lldi.adapter_type) ||
  FUNC_1(VAR_0->rdev.lldi.adapter_type)) &&
  VAR_1 >= 8*1024*1024*1024ULL;
}
