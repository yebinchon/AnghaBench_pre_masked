
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* code; char* jargon; int ** stat; } ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (char*,int,char*,char*,char*,int ,int ,int ,int ) ;
 int VAR_1 ;

int FUNC_1 (char *VAR_2, int VAR_3) {
  int VAR_4;
  char *VAR_5 = VAR_2;
  char *VAR_6 = VAR_2 + VAR_3 - 2;
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
    int VAR_7 = VAR_6 - VAR_5;
    if (VAR_7 < 5) {
      break ;
    }
    int VAR_8 = FUNC_0 (VAR_5, VAR_7, "%s\t%s\t%lld\t%lld\t%lld\t%lld\n", VAR_0[VAR_4]->code, VAR_0[VAR_4]->jargon, VAR_0[VAR_4]->stat[0][0], VAR_0[VAR_4]->stat[0][1], VAR_0[VAR_4]->stat[1][0], VAR_0[VAR_4]->stat[1][1]);
    if (VAR_8 < 0 || VAR_8 >= VAR_7) {
      *VAR_5 = 0;
      break;
    }
    VAR_5 += VAR_8;
  }
  return VAR_5 - VAR_2;
}
