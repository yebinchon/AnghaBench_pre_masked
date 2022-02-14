
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordlist_subiterator {unsigned char* data_end; int mult; int mdec; int pos; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (scalar_t__,int,unsigned char*,int ,int ) ;

void FUNC_2 (struct wordlist_subiterator *VAR_2, unsigned char *VAR_3, int VAR_4) {
  VAR_2->mdec = FUNC_1 (VAR_1 + 1, -1, VAR_3, 0, VAR_0);
  VAR_2->data_end = VAR_3 + VAR_4;
  VAR_2->pos = FUNC_0 (VAR_2->mdec, &VAR_2->mult);
}
