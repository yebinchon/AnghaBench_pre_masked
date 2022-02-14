
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; int label; int line; int file; struct TYPE_3__* next; } ;
typedef TYPE_1__ hunkblock_t ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;

void FUNC_4( void) {
 hunkblock_t *VAR_2;
 char VAR_3[4096];
 int VAR_4, VAR_5;

 if (!VAR_1 || !FUNC_1())
  return;
 VAR_4 = 0;
 VAR_5 = 0;
 FUNC_0(VAR_3, sizeof(VAR_3), "\r\n================\r\nHunk log\r\n================\r\n");
 FUNC_2(VAR_3, FUNC_3(VAR_3), VAR_1);
 for (VAR_2 = VAR_0 ; VAR_2; VAR_2 = VAR_2->next) {




  VAR_4 += VAR_2->size;
  VAR_5++;
 }
 FUNC_0(VAR_3, sizeof(VAR_3), "%d Hunk memory\r\n", VAR_4);
 FUNC_2(VAR_3, FUNC_3(VAR_3), VAR_1);
 FUNC_0(VAR_3, sizeof(VAR_3), "%d hunk blocks\r\n", VAR_5);
 FUNC_2(VAR_3, FUNC_3(VAR_3), VAR_1);
}
