
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int (* read_pic ) (int ) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(int VAR_2)
{
 u64 VAR_3;

 VAR_3 = VAR_1->read_pic(0);
 if (VAR_2 == VAR_0)
  VAR_3 >>= 32;

 return VAR_3 & 0xffffffff;
}
