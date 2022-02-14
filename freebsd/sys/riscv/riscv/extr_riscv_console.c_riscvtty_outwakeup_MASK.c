
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tty {int dummy; } ;
typedef int buf ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tty*,int *,int) ;

__attribute__((used)) static void
FUNC_3(struct tty *VAR_1)
{
 u_char VAR_2[VAR_0];
 int VAR_3;
 int VAR_4;

 for (;;) {
  VAR_3 = FUNC_2(VAR_1, VAR_2, sizeof(VAR_2));
  if (VAR_3 == 0)
   break;

  FUNC_0(VAR_3 == 1, ("tty error"));

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   FUNC_1(VAR_2[VAR_4]);
 }
}
