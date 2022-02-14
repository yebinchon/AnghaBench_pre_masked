
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_entry {int dummy; } ;


 int FUNC_0 (struct tree_entry*,unsigned int) ;
 struct tree_entry* VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static struct tree_entry *FUNC_1(void)
{
 struct tree_entry *VAR_3;

 if (!VAR_0) {
  unsigned int VAR_4 = VAR_1;
  VAR_2 += VAR_4 * sizeof(struct tree_entry);
  FUNC_0(VAR_3, VAR_4);
  VAR_0 = VAR_3;
  while (VAR_4-- > 1) {
   *((void**)VAR_3) = VAR_3 + 1;
   VAR_3++;
  }
  *((void**)VAR_3) = ((void*)0);
 }

 VAR_3 = VAR_0;
 VAR_0 = *((void**)VAR_3);
 return VAR_3;
}
