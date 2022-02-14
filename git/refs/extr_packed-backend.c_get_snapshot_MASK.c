
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snapshot {int dummy; } ;
struct packed_ref_store {struct snapshot* snapshot; int lock; } ;


 struct snapshot* FUNC_0 (struct packed_ref_store*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct packed_ref_store*) ;

__attribute__((used)) static struct snapshot *FUNC_3(struct packed_ref_store *VAR_0)
{
 if (!FUNC_1(&VAR_0->lock))
  FUNC_2(VAR_0);

 if (!VAR_0->snapshot)
  VAR_0->snapshot = FUNC_0(VAR_0);

 return VAR_0->snapshot;
}
