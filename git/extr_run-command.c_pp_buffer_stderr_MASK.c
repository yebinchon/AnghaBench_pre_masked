
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct parallel_processes {int max_processes; TYPE_2__* children; TYPE_3__* pfd; } ;
struct TYPE_6__ {int revents; } ;
struct TYPE_4__ {int err; } ;
struct TYPE_5__ {scalar_t__ state; TYPE_1__ process; int err; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_3__*,int,int) ;
 int FUNC_3 (struct parallel_processes*) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct parallel_processes *VAR_7, int VAR_8)
{
 int VAR_9;

 while ((VAR_9 = FUNC_2(VAR_7->pfd, VAR_7->max_processes, VAR_8)) < 0) {
  if (VAR_6 == VAR_1)
   continue;
  FUNC_3(VAR_7);
  FUNC_1("poll");
 }


 for (VAR_9 = 0; VAR_9 < VAR_7->max_processes; VAR_9++) {
  if (VAR_7->children[VAR_9].state == VAR_3 &&
      VAR_7->pfd[VAR_9].revents & (VAR_5 | VAR_4)) {
   int VAR_10 = FUNC_4(&VAR_7->children[VAR_9].err,
       VAR_7->children[VAR_9].process.err, 0);
   if (VAR_10 == 0) {
    FUNC_0(VAR_7->children[VAR_9].process.err);
    VAR_7->children[VAR_9].state = VAR_2;
   } else if (VAR_10 < 0)
    if (VAR_6 != VAR_0)
     FUNC_1("read");
  }
 }
}
