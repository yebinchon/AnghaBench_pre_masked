
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* symbolic; } ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ db; TYPE_1__ target; } ;
typedef TYPE_2__ git_reference ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;

void FUNC_2(git_reference *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;

 if (VAR_2->type == VAR_0)
  FUNC_1(VAR_2->target.symbolic);

 if (VAR_2->db)
  FUNC_0(VAR_2->db, VAR_1);

 FUNC_1(VAR_2);
}
