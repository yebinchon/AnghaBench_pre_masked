
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct termios {char* c_cc; } ;
typedef int buf ;
struct TYPE_4__ {char cerase; char kill; char werase; } ;
struct TYPE_3__ {char cerase; char kill; char werase; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_9 ;
 int FUNC_2 (int ,struct termios*) ;
 int FUNC_3 (int ,char*,int) ;

void
FUNC_4(void)
{
 char VAR_10[3];
 int VAR_11;
 struct termios VAR_12;

 FUNC_2(0, &VAR_12);
 VAR_8.cerase = VAR_12.c_cc[VAR_3];
 VAR_8.kill = VAR_12.c_cc[VAR_4];
 VAR_8.werase = VAR_12.c_cc[VAR_5];
 if (VAR_8.cerase == (char)VAR_6)
  VAR_8.kill = VAR_0;
 if (VAR_8.kill == (char)VAR_6)
  VAR_8.kill = VAR_1;
 if (VAR_8.werase == (char)VAR_6)
  VAR_8.werase = VAR_2;
 VAR_10[0] = VAR_8.cerase;
 VAR_10[1] = VAR_8.kill;
 VAR_10[2] = VAR_8.werase;
 VAR_11 = FUNC_3(VAR_9, VAR_10, sizeof(VAR_10));
 if (VAR_11 != sizeof(VAR_10) )
  FUNC_0("Lost the connection");
 VAR_11 = FUNC_1(VAR_9, VAR_10, sizeof(VAR_10));
 if (VAR_11 != sizeof(VAR_10) )
  FUNC_0("Lost the connection");
 VAR_7.cerase = VAR_10[0];
 VAR_7.kill = VAR_10[1];
 VAR_7.werase = VAR_10[2];
}
