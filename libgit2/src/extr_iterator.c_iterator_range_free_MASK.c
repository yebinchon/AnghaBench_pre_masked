
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ end_len; int * end; scalar_t__ start_len; int * start; } ;
typedef TYPE_1__ git_iterator ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(git_iterator *VAR_0)
{
 if (VAR_0->start) {
  FUNC_0(VAR_0->start);
  VAR_0->start = ((void*)0);
  VAR_0->start_len = 0;
 }

 if (VAR_0->end) {
  FUNC_0(VAR_0->end);
  VAR_0->end = ((void*)0);
  VAR_0->end_len = 0;
 }
}
