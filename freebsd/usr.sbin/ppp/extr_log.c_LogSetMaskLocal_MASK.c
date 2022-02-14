
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prompt {int logmask; struct prompt* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct prompt* VAR_4 ;

__attribute__((used)) static void
FUNC_1(void)
{
  struct prompt *VAR_5;

  VAR_2 = FUNC_0(VAR_1) | FUNC_0(VAR_0) | FUNC_0(VAR_3);
  for (VAR_5 = VAR_4; VAR_5; VAR_5 = VAR_5->next)
    VAR_2 |= VAR_5->logmask;
}
