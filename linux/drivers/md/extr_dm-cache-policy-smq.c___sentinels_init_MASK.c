
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int clean; int dirty; } ;
struct entry {unsigned int level; } ;


 unsigned int VAR_0 ;
 struct entry* FUNC_0 (struct smq_policy*,unsigned int) ;
 int FUNC_1 (int *,struct entry*) ;
 struct entry* FUNC_2 (struct smq_policy*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct smq_policy *VAR_1)
{
 unsigned VAR_2;
 struct entry *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  VAR_3->level = VAR_2;
  FUNC_1(&VAR_1->dirty, VAR_3);

  VAR_3 = FUNC_0(VAR_1, VAR_2);
  VAR_3->level = VAR_2;
  FUNC_1(&VAR_1->clean, VAR_3);
 }
}
