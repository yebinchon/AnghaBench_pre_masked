
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table_bucket {int dummy; } ;
struct clone {struct hash_table_bucket* ht; } ;


 int VAR_0 ;
 size_t FUNC_0 (unsigned long,int ) ;

__attribute__((used)) static struct hash_table_bucket *FUNC_1(struct clone *VAR_1,
             unsigned long VAR_2)
{
 return &VAR_1->ht[FUNC_0(VAR_2, VAR_0)];
}
