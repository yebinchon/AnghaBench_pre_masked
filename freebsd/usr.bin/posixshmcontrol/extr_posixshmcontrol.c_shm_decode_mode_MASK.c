
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_0(mode_t VAR_9, char *VAR_10)
{
 int VAR_11;

 VAR_11 = 0;
 VAR_10[VAR_11++] = (VAR_9 & VAR_2) != 0 ? 'r' : '-';
 VAR_10[VAR_11++] = (VAR_9 & VAR_5) != 0 ? 'w' : '-';
 VAR_10[VAR_11++] = (VAR_9 & VAR_8) != 0 ? 'x' : '-';
 VAR_10[VAR_11++] = (VAR_9 & VAR_0) != 0 ? 'r' : '-';
 VAR_10[VAR_11++] = (VAR_9 & VAR_3) != 0 ? 'w' : '-';
 VAR_10[VAR_11++] = (VAR_9 & VAR_6) != 0 ? 'x' : '-';
 VAR_10[VAR_11++] = (VAR_9 & VAR_1) != 0 ? 'r' : '-';
 VAR_10[VAR_11++] = (VAR_9 & VAR_4) != 0 ? 'w' : '-';
 VAR_10[VAR_11++] = (VAR_9 & VAR_7) != 0 ? 'x' : '-';
 VAR_10[VAR_11] = '\0';
}
