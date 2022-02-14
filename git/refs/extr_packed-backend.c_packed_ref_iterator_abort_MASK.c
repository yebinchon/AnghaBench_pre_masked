
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_iterator {int dummy; } ;
struct packed_ref_iterator {int snapshot; int refname_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct ref_iterator*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ref_iterator *VAR_1)
{
 struct packed_ref_iterator *VAR_2 =
  (struct packed_ref_iterator *)VAR_1;
 int VAR_3 = VAR_0;

 FUNC_2(&VAR_2->refname_buf);
 FUNC_1(VAR_2->snapshot);
 FUNC_0(VAR_1);
 return VAR_3;
}
