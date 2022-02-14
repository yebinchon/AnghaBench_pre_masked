
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {int word_alloc; int words; } ;
typedef int eword_t ;


 int FUNC_0 (int,int) ;
 struct bitmap* FUNC_1 (int) ;

struct bitmap *FUNC_2(void)
{
 struct bitmap *VAR_0 = FUNC_1(sizeof(struct bitmap));
 VAR_0->words = FUNC_0(32, sizeof(eword_t));
 VAR_0->word_alloc = 32;
 return VAR_0;
}
