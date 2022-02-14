
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_cell {struct hash_cell* uuid; struct hash_cell* name; } ;


 int FUNC_0 (struct hash_cell*) ;

__attribute__((used)) static void FUNC_1(struct hash_cell *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->name);
  FUNC_0(VAR_0->uuid);
  FUNC_0(VAR_0);
 }
}
