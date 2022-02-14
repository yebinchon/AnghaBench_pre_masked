
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_iterator {int dummy; } ;
struct files_reflog_iterator {scalar_t__ dir_iterator; } ;


 int VAR_0 ;
 int FUNC_0 (struct ref_iterator*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ref_iterator *VAR_1)
{
 struct files_reflog_iterator *VAR_2 =
  (struct files_reflog_iterator *)VAR_1;
 int VAR_3 = VAR_0;

 if (VAR_2->dir_iterator)
  VAR_3 = FUNC_1(VAR_2->dir_iterator);

 FUNC_0(VAR_1);
 return VAR_3;
}
