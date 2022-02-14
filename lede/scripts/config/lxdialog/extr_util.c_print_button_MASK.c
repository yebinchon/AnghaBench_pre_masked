
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_13__ {int atr; } ;
struct TYPE_12__ {int atr; } ;
struct TYPE_11__ {int atr; } ;
struct TYPE_10__ {int atr; } ;
struct TYPE_9__ {int atr; } ;
struct TYPE_8__ {int atr; } ;
struct TYPE_14__ {TYPE_6__ button_inactive; TYPE_5__ button_active; TYPE_4__ button_label_inactive; TYPE_3__ button_label_active; TYPE_2__ button_key_inactive; TYPE_1__ button_key_active; } ;


 TYPE_7__ VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *,char const) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int,int) ;

void FUNC_5(WINDOW * VAR_1, const char *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_4(VAR_1, VAR_3, VAR_4);
 FUNC_3(VAR_1, VAR_5 ? VAR_0.button_active.atr
   : VAR_0.button_inactive.atr);
 FUNC_2(VAR_1, "<");
 VAR_7 = FUNC_0(VAR_2, " ");
 VAR_2 += VAR_7;
 FUNC_3(VAR_1, VAR_5 ? VAR_0.button_label_active.atr
   : VAR_0.button_label_inactive.atr);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  FUNC_1(VAR_1, ' ');
 FUNC_3(VAR_1, VAR_5 ? VAR_0.button_key_active.atr
   : VAR_0.button_key_inactive.atr);
 FUNC_1(VAR_1, VAR_2[0]);
 FUNC_3(VAR_1, VAR_5 ? VAR_0.button_label_active.atr
   : VAR_0.button_label_inactive.atr);
 FUNC_2(VAR_1, (char *)VAR_2 + 1);
 FUNC_3(VAR_1, VAR_5 ? VAR_0.button_active.atr
   : VAR_0.button_inactive.atr);
 FUNC_2(VAR_1, ">");
 FUNC_4(VAR_1, VAR_3, VAR_4 + VAR_7 + 1);
}
