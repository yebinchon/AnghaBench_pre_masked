
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int str; struct TYPE_3__* next; } ;
typedef TYPE_1__ word_t ;
struct TYPE_4__ {TYPE_1__** A; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 long long FUNC_3 (unsigned long long*,int) ;
 int FUNC_4 (int ,char*,long long,double,long long,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (unsigned long long*,int) ;

void FUNC_6 (void) {
  int VAR_6, VAR_7, VAR_8;
  word_t *VAR_9;
  unsigned long long *VAR_10, *VAR_11;
  long long VAR_12 = 0, VAR_13;

  VAR_11 = VAR_10 = (unsigned long long *) (VAR_2 + 8);

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    for (VAR_9 = VAR_1.A[VAR_6]; VAR_9; VAR_9 = VAR_9->next) {
      FUNC_1 ((char *) VAR_11 + 16 <= VAR_3);
      *VAR_11++ = FUNC_2 (VAR_9->str, VAR_9->len);
    }
  }

  VAR_8 = VAR_11 - VAR_10;

  if (!VAR_8) {
    return;
  }

  FUNC_5 (VAR_10, VAR_8-1);

  for (VAR_6 = 1, VAR_7 = 1; VAR_6 < VAR_8; VAR_6++) {
    if (VAR_10[VAR_6] != VAR_10[VAR_6-1]) {
      VAR_10[VAR_7++] = VAR_10[VAR_6];
    }
  }

  VAR_4 = VAR_8 - VAR_7;

  FUNC_4 (VAR_5, "%lld distinct words, %f distinct word hashes (%lld conflicts)\n", VAR_8, VAR_7, VAR_4);

  VAR_8 = VAR_7;

  VAR_10[-1] = -1LL;
  VAR_10[VAR_8] = 0;

  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
    unsigned long long VAR_14 = VAR_10[VAR_6] ^ VAR_10[VAR_6-1], VAR_15 = VAR_10[VAR_6] ^ VAR_10[VAR_6+1];
    int VAR_16 = FUNC_0 (VAR_14 < VAR_15 ? VAR_14 : VAR_15) + 1;
    VAR_12 += VAR_16;
  }

  VAR_13 = FUNC_3 (VAR_10, VAR_8);

  FUNC_4 (VAR_5, "total word hash prefix size %lld, %.3f average; optimal total size %lld, %.3f average\n", VAR_12, (double) VAR_12 / VAR_8, VAR_13, (double) VAR_13 / VAR_8);
}
