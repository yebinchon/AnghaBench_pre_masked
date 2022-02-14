
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snapshot {int dummy; } ;
struct packed_ref_store {struct snapshot* snapshot; } ;


 int FUNC_0 (struct snapshot*) ;

__attribute__((used)) static void FUNC_1(struct packed_ref_store *VAR_0)
{
 if (VAR_0->snapshot) {
  struct snapshot *VAR_1 = VAR_0->snapshot;

  VAR_0->snapshot = ((void*)0);
  FUNC_0(VAR_1);
 }
}
