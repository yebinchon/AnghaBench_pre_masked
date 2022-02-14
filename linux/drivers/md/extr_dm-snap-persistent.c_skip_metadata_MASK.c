
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pstore {int next_free; scalar_t__ exceptions_per_area; } ;
typedef int chunk_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct pstore *VAR_1)
{
 uint32_t VAR_2 = VAR_1->exceptions_per_area + 1;
 chunk_t VAR_3 = VAR_1->next_free;
 if (FUNC_0(VAR_3, VAR_2) == VAR_0)
  VAR_1->next_free++;
}
