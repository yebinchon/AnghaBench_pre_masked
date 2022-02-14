
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int clean; int dirty; } ;
struct entry {scalar_t__ dirty; } ;


 int FUNC_0 (int *,struct entry*) ;

__attribute__((used)) static void FUNC_1(struct smq_policy *VAR_0, struct entry *VAR_1)
{
 if (VAR_1->dirty)
  FUNC_0(&VAR_0->dirty, VAR_1);
 else
  FUNC_0(&VAR_0->clean, VAR_1);
}
