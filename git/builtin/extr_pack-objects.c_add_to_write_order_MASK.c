
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_entry {int filled; } ;


 scalar_t__ FUNC_0 (int *,struct object_entry*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void FUNC_1(struct object_entry **VAR_2,
          unsigned int *VAR_3,
          struct object_entry *VAR_4)
{
 if (VAR_4->filled || FUNC_0(&VAR_0, VAR_4) != VAR_1)
  return;
 VAR_2[(*VAR_3)++] = VAR_4;
 VAR_4->filled = 1;
}
