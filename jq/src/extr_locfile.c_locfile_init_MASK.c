
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locfile {int length; int nlines; int refct; int* linemap; void* data; int fname; int * jq; } ;
typedef int jq_state ;


 void* FUNC_0 (int) ;
 int* FUNC_1 (int,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;

struct locfile* FUNC_4(jq_state *VAR_0, const char *VAR_1, const char* VAR_2, int VAR_3) {
  struct locfile* VAR_4 = FUNC_0(sizeof(struct locfile));
  VAR_4->jq = VAR_0;
  VAR_4->fname = FUNC_2(VAR_1);
  VAR_4->data = FUNC_0(VAR_3);
  FUNC_3((char*)VAR_4->data,VAR_2,VAR_3);
  VAR_4->length = VAR_3;
  VAR_4->nlines = 1;
  VAR_4->refct = 1;
  for (int VAR_5=0; VAR_5<VAR_3; VAR_5++) {
    if (VAR_2[VAR_5] == '\n') VAR_4->nlines++;
  }
  VAR_4->linemap = FUNC_1(sizeof(int), (VAR_4->nlines + 1));
  VAR_4->linemap[0] = 0;
  int VAR_6 = 1;
  for (int VAR_7=0; VAR_7<VAR_3; VAR_7++) {
    if (VAR_2[VAR_7] == '\n') {
      VAR_4->linemap[VAR_6] = VAR_7+1;
      VAR_6++;
    }
  }
  VAR_4->linemap[VAR_4->nlines] = VAR_3+1;
  return VAR_4;
}
