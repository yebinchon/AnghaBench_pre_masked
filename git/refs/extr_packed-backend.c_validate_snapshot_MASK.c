
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packed_ref_store {int path; TYPE_1__* snapshot; } ;
struct TYPE_2__ {int validity; } ;


 int FUNC_0 (struct packed_ref_store*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct packed_ref_store *VAR_0)
{
 if (VAR_0->snapshot &&
     !FUNC_1(&VAR_0->snapshot->validity, VAR_0->path))
  FUNC_0(VAR_0);
}
