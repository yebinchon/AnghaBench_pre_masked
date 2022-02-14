
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int path; int fd; int * inf; } ;
typedef TYPE_1__ FILEDESC ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(FILEDESC *VAR_0)
{
 if (VAR_0->inf == ((void*)0) && (VAR_0->inf = FUNC_1(VAR_0->fd, "r")) == ((void*)0)) {
  FUNC_2(VAR_0->path);
  FUNC_0(1);
 }
}
