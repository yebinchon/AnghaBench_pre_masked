
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name_entry {scalar_t__ mode; int oid; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct name_entry *VAR_0, struct name_entry *VAR_1)
{
 return !FUNC_0(&VAR_0->oid) &&
  !FUNC_0(&VAR_1->oid) &&
  FUNC_1(&VAR_0->oid, &VAR_1->oid) &&
  VAR_0->mode == VAR_1->mode;
}
