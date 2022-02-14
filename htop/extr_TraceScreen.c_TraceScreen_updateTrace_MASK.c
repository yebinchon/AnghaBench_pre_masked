
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int fd_set ;
struct TYPE_5__ {int display; } ;
struct TYPE_4__ {int contLine; TYPE_2__ super; scalar_t__ follow; scalar_t__ tracing; int strace; scalar_t__ fd_strace; } ;
typedef TYPE_1__ TraceScreen ;
typedef int InfoScreen ;


 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,int,int,int ) ;
 int FUNC_8 (scalar_t__,int *,int *,int *,struct timeval*) ;

void FUNC_9(InfoScreen* VAR_0) {
   TraceScreen* VAR_1 = (TraceScreen*) VAR_0;
   char VAR_2[1001];
   fd_set VAR_3;
   FUNC_2(&VAR_3);

   FUNC_1(VAR_1->fd_strace, &VAR_3);
   struct timeval VAR_4;
   VAR_4.tv_sec = 0; VAR_4.tv_usec = 500;
   int VAR_5 = FUNC_8(VAR_1->fd_strace+1, &VAR_3, ((void*)0), ((void*)0), &VAR_4);
   int VAR_6 = 0;
   if (VAR_5 > 0 && FUNC_0(VAR_1->fd_strace, &VAR_3))
      VAR_6 = FUNC_7(VAR_2, 1, 1000, VAR_1->strace);
   if (VAR_6 && VAR_1->tracing) {
      char* VAR_7 = VAR_2;
      VAR_2[VAR_6] = '\0';
      for (int VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
         if (VAR_2[VAR_8] == '\n') {
            VAR_2[VAR_8] = '\0';
            if (VAR_1->contLine) {
               FUNC_4(&VAR_1->super, VAR_7);
               VAR_1->contLine = 0;
            } else {
               FUNC_3(&VAR_1->super, VAR_7);
            }
            VAR_7 = VAR_2+VAR_8+1;
         }
      }
      if (VAR_7 < VAR_2+VAR_6) {
         FUNC_3(&VAR_1->super, VAR_7);
         VAR_2[VAR_6] = '\0';
         VAR_1->contLine = 1;
      }
      if (VAR_1->follow)
         FUNC_5(VAR_1->super.display, FUNC_6(VAR_1->super.display)-1);
   }
}
