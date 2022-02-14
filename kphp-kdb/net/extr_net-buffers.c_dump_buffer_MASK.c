
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; char* end; char* start; char* rptr; char* wptr; int pptr; } ;
typedef TYPE_1__ netbuffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (char,int ) ;
 int FUNC_3 (char,int ) ;
 int VAR_3 ;

int FUNC_4 (netbuffer_t *VAR_4, int VAR_5, int VAR_6) {
  char *VAR_7;
  int VAR_8, VAR_9, VAR_10;
  FUNC_0 (VAR_4->state == VAR_2 || VAR_4->state == VAR_1 || VAR_4->state == VAR_0);
  FUNC_1 (VAR_3, "Dumping buffer #%d in chain at offset %d, addr=%p, size=%ld, start=%p, read=%p, pptr=%d, write=%p, end=%p\n",
    VAR_5, VAR_6, VAR_4, (long)(VAR_4->end - VAR_4->start), VAR_4->start, VAR_4->rptr, VAR_4->pptr, VAR_4->wptr, VAR_4->end);
  VAR_7 = VAR_4->start;
  while (VAR_7 < VAR_4->end) {
    VAR_9 = VAR_4->end - VAR_7;
    if (VAR_9 > 16) {
      VAR_9 = 16;
    }
    FUNC_1 (VAR_3, "%08x", (int) (VAR_7 - VAR_4->start + VAR_6));
    for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
      VAR_10 = ' ';
      if (VAR_7 + VAR_8 == VAR_4->rptr) {
        VAR_10 = '[';
      }
      if (VAR_7 + VAR_8 == VAR_4->wptr) {
        VAR_10 = (VAR_10 == '[' ? '|' : ']');
      }
      if (VAR_8 == 8) {
        FUNC_2 (' ', VAR_3);
      }
      if (VAR_8 < VAR_9) {
        FUNC_1 (VAR_3, "%c%02x", VAR_10, (unsigned char) VAR_7[VAR_8]);
      } else {
        FUNC_1 (VAR_3, "%c  ", VAR_10);
      }
    }
    VAR_10 = ' ';
    if (VAR_7 + 16 == VAR_4->end) {
      if (VAR_7 + 16 == VAR_4->rptr) {
        VAR_10 = '[';
      }
      if (VAR_7 + 16 == VAR_4->wptr) {
        VAR_10 = (VAR_10 == '[' ? '|' : ']');
      }

    }
    FUNC_1 (VAR_3, "%c  ", VAR_10);
    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
      FUNC_3 ((unsigned char) VAR_7[VAR_8] < ' ' ? '.' : VAR_7[VAR_8], VAR_3);
    }
    FUNC_3 ('\n', VAR_3);
    VAR_7 += 16;
  }
  return VAR_4->end - VAR_4->start;
}
