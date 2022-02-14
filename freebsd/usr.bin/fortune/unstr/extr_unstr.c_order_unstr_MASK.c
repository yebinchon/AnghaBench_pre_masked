
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int pos ;
typedef int off_t ;
typedef int buf ;
struct TYPE_4__ {scalar_t__ str_numstr; } ;
typedef TYPE_1__ STRFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,TYPE_1__) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_7(STRFILE *VAR_6)
{
 uint32_t VAR_7;
 char *VAR_8;
 off_t VAR_9;
 char VAR_10[VAR_0];

 for (VAR_7 = 0; VAR_7 < VAR_6->str_numstr; VAR_7++) {
  FUNC_4(&VAR_9, 1, sizeof(VAR_9), VAR_1);
  FUNC_5(VAR_3, FUNC_1(VAR_9), VAR_4);
  if (VAR_7 != 0)
   FUNC_6("%c\n", VAR_2);
  for (;;) {
   VAR_8 = FUNC_2(VAR_10, sizeof(VAR_10), VAR_3);
   if (VAR_8 == ((void*)0) || FUNC_0(VAR_8, *VAR_6))
    break;
   else
    FUNC_3(VAR_8, VAR_5);
  }
 }
}
