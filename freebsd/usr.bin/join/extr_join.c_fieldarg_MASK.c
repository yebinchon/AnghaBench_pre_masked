
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_4__ {scalar_t__ fieldno; scalar_t__ filenum; } ;
typedef int OLIST ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,char*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int) ;
 char* FUNC_3 (char**,char*) ;
 scalar_t__ FUNC_4 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_5(char *VAR_3)
{
 u_long VAR_4, VAR_5;
 char *VAR_6, *VAR_7;

 while ((VAR_7 = FUNC_3(&VAR_3, ", \t")) != ((void*)0)) {
  if (*VAR_7 == '\0')
   continue;
  if (VAR_7[0] == '0')
   VAR_5 = VAR_4 = 0;
  else if ((VAR_7[0] == '1' || VAR_7[0] == '2') &&
      VAR_7[1] == '.') {
   VAR_5 = VAR_7[0] - '0';
   VAR_4 = FUNC_4(VAR_7 + 2, &VAR_6, 10);
   if (*VAR_6)
    FUNC_1(1, "malformed -o option field");
   if (VAR_4 == 0)
    FUNC_1(1, "field numbers are 1 based");
   --VAR_4;
  } else
   FUNC_1(1, "malformed -o option field");
  if (VAR_2 == VAR_1) {
   VAR_1 += 50;
   if ((VAR_0 = FUNC_2(VAR_0,
       VAR_1 * sizeof(OLIST))) == ((void*)0))
    FUNC_0(1, ((void*)0));
  }
  VAR_0[VAR_2].filenum = VAR_5;
  VAR_0[VAR_2].fieldno = VAR_4;
  ++VAR_2;
 }
}
