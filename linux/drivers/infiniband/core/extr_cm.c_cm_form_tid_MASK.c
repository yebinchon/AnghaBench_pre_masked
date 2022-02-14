
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {scalar_t__ local_id; } ;
struct TYPE_7__ {TYPE_2__* port; } ;
struct cm_id_private {TYPE_4__ id; TYPE_3__ av; } ;
typedef int __be64 ;
struct TYPE_6__ {TYPE_1__* mad_agent; } ;
struct TYPE_5__ {scalar_t__ hi_tid; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static __be64 FUNC_1(struct cm_id_private *VAR_0)
{
 u64 VAR_1, VAR_2;

 VAR_1 = ((u64) VAR_0->av.port->mad_agent->hi_tid) << 32;
 VAR_2 = (u64)VAR_0->id.local_id;
 return FUNC_0(VAR_1 | VAR_2);
}
