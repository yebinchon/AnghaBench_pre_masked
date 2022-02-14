
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct timeval {int tv_sec; } ;
struct TYPE_7__ {int tick; } ;
typedef TYPE_1__ channel_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (void*,struct timeval*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(int VAR_3, short VAR_4, void *VAR_5)
{
 static struct timeval VAR_6 = { .tv_sec = 1 };
 channel_t *VAR_7, *VAR_8;
 int VAR_9;

 VAR_9 = (VAR_2 % 60) + 1;
 VAR_2 = 0;

 VAR_8 = FUNC_0(&VAR_1);
 while ((VAR_7 = VAR_8) != ((void*)0)) {
  VAR_8 = FUNC_1(VAR_7, VAR_8);

  if (VAR_7->tick == VAR_9)
   FUNC_2(VAR_7);
  else if (VAR_7->tick != 0)
   VAR_2 = VAR_9;
 }

 if (VAR_2 != 0 && FUNC_3(VAR_5, &VAR_6) < 0) {
  FUNC_5("Could not add watchdog event: %m");
  FUNC_4(VAR_0);
 }
}
