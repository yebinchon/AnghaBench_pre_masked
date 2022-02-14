
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct hashmap_entry {int dummy; } ;
struct hashmap {unsigned int tablesize; unsigned int grow_at; int shrink_at; int table; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static void FUNC_1(struct hashmap *VAR_3, unsigned int VAR_4)
{
 VAR_3->tablesize = VAR_4;
 VAR_3->table = FUNC_0(VAR_4, sizeof(struct hashmap_entry *));


 VAR_3->grow_at = (unsigned int) ((uint64_t) VAR_4 * VAR_1 / 100);
 if (VAR_4 <= VAR_0)
  VAR_3->shrink_at = 0;
 else





  VAR_3->shrink_at = VAR_3->grow_at / ((1 << VAR_2) + 1);
}
