
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {struct bitmap* words; } ;


 int FUNC_0 (struct bitmap*) ;

void FUNC_1(struct bitmap *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(VAR_0->words);
 FUNC_0(VAR_0);
}
