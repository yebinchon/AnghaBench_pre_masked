
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {int word_alloc; int words; } ;
typedef int eword_t ;


 int FUNC_0 (int ,int,int) ;

void FUNC_1(struct bitmap *VAR_0)
{
 FUNC_0(VAR_0->words, 0x0, VAR_0->word_alloc * sizeof(eword_t));
}
