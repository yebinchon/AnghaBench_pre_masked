
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctx {int fd; } ;
typedef int buf ;
struct TYPE_2__ {int (* func ) (void*,char*) ;int * cmd; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_1 ;
 size_t FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int *,size_t) ;
 int FUNC_5 (void*,char*) ;
 int FUNC_6 (struct ctx*,int) ;

__attribute__((used)) static int
FUNC_7(struct ctx *VAR_2, void *VAR_3)
{
 int VAR_4, VAR_5;
 size_t VAR_6;
 char VAR_7[512];

 FUNC_6(VAR_2, 15);

 FUNC_0(VAR_7, sizeof(VAR_7));
 VAR_4 = FUNC_2(VAR_2->fd, VAR_7, sizeof(VAR_7));
 if (VAR_4 <= 0)
  return (VAR_4 <= 0 ? -1 : 0);




 for (VAR_5 = 0; VAR_0[VAR_5].cmd != ((void*)0); VAR_5++) {
  VAR_6 = FUNC_3(VAR_0[VAR_5].cmd);
  if (FUNC_4(VAR_7, VAR_0[VAR_5].cmd, VAR_6) == 0) {
   VAR_0[VAR_5].func(VAR_3, VAR_7);
  }
 }
 return (0);
}
