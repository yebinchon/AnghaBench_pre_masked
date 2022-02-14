
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table_bucket {int lock; int head; } ;
struct clone {struct hash_table_bucket* ht; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct hash_table_bucket* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct clone *VAR_3)
{
 unsigned int VAR_4, VAR_5;
 struct hash_table_bucket *VAR_6;

 VAR_5 = 1 << VAR_2;

 VAR_3->ht = FUNC_1(VAR_5 * sizeof(struct hash_table_bucket), VAR_1);
 if (!VAR_3->ht)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_6 = VAR_3->ht + VAR_4;

  FUNC_0(&VAR_6->head);
  FUNC_2(&VAR_6->lock);
 }

 return 0;
}
