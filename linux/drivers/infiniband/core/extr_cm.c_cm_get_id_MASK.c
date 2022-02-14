
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ remote_id; } ;
struct cm_id_private {int refcount; TYPE_1__ id; } ;
typedef scalar_t__ __be32 ;
struct TYPE_4__ {int local_id_table; } ;


 int FUNC_0 (int *) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 struct cm_id_private* FUNC_2 (int *,int ) ;

__attribute__((used)) static struct cm_id_private * FUNC_3(__be32 VAR_1, __be32 VAR_2)
{
 struct cm_id_private *VAR_3;

 VAR_3 = FUNC_2(&VAR_0.local_id_table, FUNC_1(VAR_1));
 if (VAR_3) {
  if (VAR_3->id.remote_id == VAR_2)
   FUNC_0(&VAR_3->refcount);
  else
   VAR_3 = ((void*)0);
 }

 return VAR_3;
}
