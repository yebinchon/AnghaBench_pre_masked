
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {scalar_t__ address; } ;
struct TYPE_4__ {TYPE_1__ gaddr; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

int FUNC_0(u64 *VAR_2)
{
 if (!VAR_1.gaddr.address)
  return -VAR_0;

 *VAR_2 = VAR_1.gaddr.address;

 return 0;
}
