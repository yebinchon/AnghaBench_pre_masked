
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int* c_cc; int c_lflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 struct termios VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,struct termios*) ;

__attribute__((used)) static void
FUNC_1(void)
{
 struct termios VAR_12;

 VAR_12 = VAR_10;
 VAR_12.c_lflag &= ~VAR_2;
 VAR_12.c_lflag &= ~VAR_0;
 VAR_12.c_cc[VAR_7] = 1;
 VAR_12.c_cc[VAR_9] = 0;

 VAR_12.c_cc[VAR_6] = 07;
 VAR_12.c_cc[VAR_8] = 07;
 FUNC_0(VAR_11, VAR_5, &VAR_12);
}
