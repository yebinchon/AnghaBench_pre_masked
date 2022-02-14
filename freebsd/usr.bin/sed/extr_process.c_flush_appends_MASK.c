
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {int type; char* s; unsigned int len; } ;
typedef int FILE ;




 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (char*,char*) ;
 unsigned int FUNC_4 (char*,int,int,int *) ;
 int FUNC_5 (char*,int,unsigned int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void
FUNC_7(void)
{
 FILE *VAR_7;
 unsigned int VAR_8, VAR_9;
 char VAR_10[8 * 1024];

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  switch (VAR_1[VAR_9].type) {
  case 128:
   FUNC_5(VAR_1[VAR_9].s, sizeof(char), VAR_1[VAR_9].len,
       VAR_4);
   break;
  case 129:
   if ((VAR_7 = FUNC_3(VAR_1[VAR_9].s, "r")) == ((void*)0))
    break;
   while ((VAR_8 = FUNC_4(VAR_10, sizeof(char), sizeof(VAR_10), VAR_7)))
    (void)FUNC_5(VAR_10, sizeof(char), VAR_8, VAR_4);
   (void)FUNC_1(VAR_7);
   break;
  }
 if (FUNC_2(VAR_4))
  FUNC_0(1, "%s: %s", VAR_5, FUNC_6(VAR_3 ? VAR_3 : VAR_0));
 VAR_2 = VAR_6 = 0;
}
