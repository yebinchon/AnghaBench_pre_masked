
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int (* read_pic ) (int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(int VAR_1)
{
 u64 VAR_2 = VAR_0->read_pic(VAR_1);

 return VAR_2 & 0xffffffff;
}
