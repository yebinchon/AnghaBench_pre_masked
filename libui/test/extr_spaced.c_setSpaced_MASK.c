
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; void* ptr; } ;






 size_t VAR_0 ;

 TYPE_1__* VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (void*) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (int ,size_t,int) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (int ,int) ;


void FUNC_13(int VAR_2)
{
 size_t VAR_3;
 void *VAR_4;
 size_t VAR_5, VAR_6;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = VAR_1[VAR_3].ptr;
  switch (VAR_1[VAR_3].type) {
  case 128:
   FUNC_12(FUNC_11(VAR_4), VAR_2);
   break;
  case 133:
   FUNC_1(FUNC_0(VAR_4), VAR_2);
   break;
  case 129:
   VAR_6 = FUNC_9(FUNC_8(VAR_4));
   for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
    FUNC_10(FUNC_8(VAR_4), VAR_5, VAR_2);
   break;
  case 130:
   FUNC_7(FUNC_6(VAR_4), VAR_2);
   break;
  case 132:
   FUNC_3(FUNC_2(VAR_4), VAR_2);
   break;
  case 131:
   FUNC_5(FUNC_4(VAR_4), VAR_2);
   break;
  }
 }
}
