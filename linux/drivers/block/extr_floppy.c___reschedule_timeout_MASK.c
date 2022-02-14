
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long timeout; int flags; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int *,unsigned long) ;
 char const* VAR_8 ;

__attribute__((used)) static void FUNC_2(int VAR_9, const char *VAR_10)
{
 unsigned long VAR_11;

 if (VAR_9 == VAR_5)
  VAR_9 = VAR_4;

 if (VAR_9 < 0 || VAR_9 >= VAR_2) {
  VAR_11 = 20UL * VAR_1;
  VAR_9 = 0;
 } else
  VAR_11 = VAR_3->timeout;

 FUNC_1(VAR_7, &VAR_6, VAR_11);
 if (VAR_3->flags & VAR_0)
  FUNC_0("reschedule timeout %s\n", VAR_10);
 VAR_8 = VAR_10;
}
