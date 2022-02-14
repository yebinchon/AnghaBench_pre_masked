
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; void* ptr; } ;




 size_t VAR_0 ;

 TYPE_1__* VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,size_t) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int ) ;


void FUNC_9(char VAR_2[12])
{
 int VAR_3 = 0;
 int VAR_4 = 0;
 size_t VAR_5;
 void *VAR_6;
 size_t VAR_7, VAR_8;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6 = VAR_1[VAR_5].ptr;
  switch (VAR_1[VAR_5].type) {
  case 128:
   if (FUNC_8(FUNC_7(VAR_6)))
    VAR_3++;
   break;
  case 131:
   VAR_4 = FUNC_1(FUNC_0(VAR_6));
   break;
  case 129:
   VAR_8 = FUNC_6(FUNC_4(VAR_6));
   for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
    if (FUNC_5(FUNC_4(VAR_6), VAR_7))
     VAR_3++;
   break;
  case 130:
   if (FUNC_3(FUNC_2(VAR_6)))
    VAR_3++;
   break;


  }
 }

 VAR_2[0] = 'm';
 VAR_2[1] = ' ';
 VAR_2[2] = '0' + VAR_3;
 VAR_2[3] = ' ';
 VAR_2[4] = 'p';
 VAR_2[5] = ' ';
 VAR_2[6] = '0';
 if (VAR_4)
  VAR_2[6] = '1';
 VAR_2[7] = '\0';
}
