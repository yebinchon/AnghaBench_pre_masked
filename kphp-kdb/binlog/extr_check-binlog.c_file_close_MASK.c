
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* backups; scalar_t__ binlog; } ;
typedef TYPE_1__ file_t ;
struct TYPE_5__ {int S; struct TYPE_5__* next; } ;
typedef TYPE_2__ backup_file_t ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2 (file_t *VAR_0) {
  FUNC_0 (VAR_0->binlog, 1);
  VAR_0->binlog = 0;
  backup_file_t *VAR_1;
  for (VAR_1 = VAR_0->backups; VAR_1 != ((void*)0); VAR_1 = VAR_1->next) {
    FUNC_1 (&VAR_1->S);
  }
}
