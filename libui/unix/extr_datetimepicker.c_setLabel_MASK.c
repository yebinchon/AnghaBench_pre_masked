
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hasDate; scalar_t__ hasTime; } ;
typedef TYPE_1__ uiprivDateTimePickerWidget ;
typedef scalar_t__ gboolean ;
typedef int GDateTime ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (int ,char*) ;
 char* FUNC_6 (int ) ;
 int * FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(uiprivDateTimePickerWidget *VAR_4)
{
 GDateTime *VAR_5;
 char *VAR_6;
 char *VAR_7;
 gboolean VAR_8;

 VAR_5 = FUNC_7(VAR_4);
 VAR_8 = VAR_1;
 if (VAR_4->hasDate && VAR_4->hasTime) {

  VAR_6 = FUNC_4("%s %s", FUNC_6(VAR_0), FUNC_6(VAR_3));
  VAR_8 = VAR_2;
 } else if (VAR_4->hasDate)
  VAR_6 = FUNC_6(VAR_0);
 else
  VAR_6 = FUNC_6(VAR_3);
 VAR_7 = FUNC_1(VAR_5, VAR_6);
 FUNC_5(FUNC_0(VAR_4), VAR_7);
 FUNC_3(VAR_7);
 if (VAR_8)
  FUNC_3(VAR_6);
 FUNC_2(VAR_5);
}
