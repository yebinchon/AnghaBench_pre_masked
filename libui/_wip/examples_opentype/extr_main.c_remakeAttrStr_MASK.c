
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uiOpenTypeFeatures ;
struct TYPE_3__ {int * Features; int Type; } ;
typedef TYPE_1__ uiAttributeSpec ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (char*) ;
 int * FUNC_9 () ;

__attribute__((used)) static void FUNC_10(void)
{
 char *VAR_5;
 uiOpenTypeFeatures *VAR_6;
 uiAttributeSpec VAR_7;

 if (VAR_1 != ((void*)0))
  FUNC_5(VAR_1);

 VAR_5 = FUNC_4(VAR_3);
 VAR_1 = FUNC_8(VAR_5);
 FUNC_7(VAR_5);

 if (!FUNC_3(VAR_2)) {
  VAR_6 = FUNC_9();

  VAR_7.Type = VAR_4;
  VAR_7.Features = VAR_6;
  FUNC_2(VAR_1, &VAR_7,
   0, FUNC_1(VAR_1));

  FUNC_6(VAR_6);
 }

 FUNC_0(VAR_0);
}
