
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ interface_id; scalar_t__ subnet_prefix; } ;
union ib_gid {TYPE_1__ global; } ;
typedef scalar_t__ __be64 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(union ib_gid *VAR_1, __be64 VAR_2, __be64 VAR_3)
{
 return (VAR_1->global.interface_id == VAR_3 &&
  (VAR_1->global.subnet_prefix == VAR_2 ||
   VAR_1->global.subnet_prefix == VAR_0));
}
