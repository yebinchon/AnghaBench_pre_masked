
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; scalar_t__ line; int label; int file; scalar_t__ printed; struct TYPE_3__* next; } ;
typedef TYPE_1__ hunkblock_t ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*) ;

void FUNC_5( void) {
 hunkblock_t *VAR_4, *VAR_5;
 char VAR_6[4096];
 int VAR_7, VAR_8, VAR_9;

 if (!VAR_1 || !FUNC_1())
  return;
 for (VAR_4 = VAR_0 ; VAR_4; VAR_4 = VAR_4->next) {
  VAR_4->printed = VAR_2;
 }
 VAR_7 = 0;
 VAR_9 = 0;
 FUNC_0(VAR_6, sizeof(VAR_6), "\r\n================\r\nHunk Small log\r\n================\r\n");
 FUNC_2(VAR_6, FUNC_4(VAR_6), VAR_1);
 for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->printed) {
   continue;
  }
  VAR_8 = VAR_4->size;
  for (VAR_5 = VAR_4->next; VAR_5; VAR_5 = VAR_5->next) {
   if (VAR_4->line != VAR_5->line) {
    continue;
   }
   if (FUNC_3(VAR_4->file, VAR_5->file)) {
    continue;
   }
   VAR_7 += VAR_5->size;
   VAR_8 += VAR_5->size;
   VAR_5->printed = VAR_3;
  }




  VAR_7 += VAR_4->size;
  VAR_9++;
 }
 FUNC_0(VAR_6, sizeof(VAR_6), "%d Hunk memory\r\n", VAR_7);
 FUNC_2(VAR_6, FUNC_4(VAR_6), VAR_1);
 FUNC_0(VAR_6, sizeof(VAR_6), "%d hunk blocks\r\n", VAR_9);
 FUNC_2(VAR_6, FUNC_4(VAR_6), VAR_1);
}
