
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cword {int num; int c; int s; } ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int,long) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 struct cword* FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6 (void) {
  int VAR_6, VAR_7, VAR_8;
  struct cword *VAR_9;
  if (!VAR_2) { return; }
  if (VAR_5 > 0) {
    FUNC_1 (VAR_4, "sorting words: %d words, %ld chars\n", VAR_2, (long)(VAR_3 - VAR_1));
  }
  FUNC_0 (0, VAR_2-1);
  VAR_6 = 0;
  while (VAR_6 < VAR_2) {
    VAR_7 = VAR_6+1;
    VAR_8 = FUNC_4 (VAR_0[VAR_6]);
    while (VAR_7 < VAR_2 && !FUNC_3 (VAR_0[VAR_6], VAR_0[VAR_7])) { VAR_7++; }
    VAR_9 = FUNC_5 (6 + VAR_8);
    VAR_9->num = VAR_7 - VAR_6;
    VAR_9->c = VAR_8;
    FUNC_2 (VAR_9->s, VAR_0[VAR_6], VAR_8+1);
    VAR_6 = VAR_7;
  }
  VAR_9 = FUNC_5 (4);
  VAR_9->num = -1;
  VAR_2 = 0;
  VAR_3 = VAR_1;
}
