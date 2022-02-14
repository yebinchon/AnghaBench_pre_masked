
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_6__ {int ** columns; } ;
struct TYPE_5__ {scalar_t__ param; } ;
typedef TYPE_1__ Meter ;
typedef TYPE_2__ Header ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,int,char*,scalar_t__) ;

char* FUNC_6(Header* VAR_0, int VAR_1, int VAR_2) {
   Vector* VAR_3 = VAR_0->columns[VAR_2];
   Meter* VAR_4 = (Meter*) FUNC_1(VAR_3, VAR_1);

   int VAR_5 = FUNC_2(FUNC_0(VAR_4));
   int VAR_6 = VAR_5 + 100;
   char* VAR_7 = FUNC_4(VAR_6);
   FUNC_3(VAR_7, FUNC_0(VAR_4), VAR_5);
   VAR_7[VAR_5] = '\0';
   if (VAR_4->param)
      FUNC_5(VAR_7 + VAR_5, VAR_6 - VAR_5, "(%d)", VAR_4->param);

   return VAR_7;
}
