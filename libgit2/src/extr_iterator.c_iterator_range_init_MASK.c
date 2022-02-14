
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ended; int * start; int started; int * end; void* end_len; void* start_len; } ;
typedef TYPE_1__ git_iterator ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (char const*) ;
 void* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(
 git_iterator *VAR_0, const char *VAR_1, const char *VAR_2)
{
 if (VAR_1 && *VAR_1) {
  VAR_0->start = FUNC_1(VAR_1);
  FUNC_0(VAR_0->start);

  VAR_0->start_len = FUNC_2(VAR_0->start);
 }

 if (VAR_2 && *VAR_2) {
  VAR_0->end = FUNC_1(VAR_2);
  FUNC_0(VAR_0->end);

  VAR_0->end_len = FUNC_2(VAR_0->end);
 }

 VAR_0->started = (VAR_0->start == ((void*)0));
 VAR_0->ended = 0;

 return 0;
}
