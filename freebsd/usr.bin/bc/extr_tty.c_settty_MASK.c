
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,struct termios*) ;

__attribute__((used)) static int
FUNC_1(struct termios *VAR_3)
{
 int VAR_4;

 while ((VAR_4 = FUNC_0(0, VAR_1, VAR_3)) == -1 && VAR_2 == VAR_0)
  continue;
 return VAR_4;
}
