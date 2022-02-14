
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int Up; int Modifier; int Modifiers; scalar_t__ ExtKey; scalar_t__ Key; } ;
typedef TYPE_1__ uiAreaKeyEvent ;
struct TYPE_13__ {TYPE_5__* ah; } ;
typedef TYPE_2__ uiArea ;
typedef int guint ;
struct TYPE_17__ {scalar_t__ keyval; scalar_t__ extkey; } ;
struct TYPE_16__ {scalar_t__ keyval; int mod; } ;
struct TYPE_15__ {int (* KeyEvent ) (TYPE_5__*,TYPE_2__*,TYPE_1__*) ;} ;
struct TYPE_14__ {scalar_t__ keyval; scalar_t__ hardware_keycode; int window; int state; } ;
typedef TYPE_3__ GdkEventKey ;


 scalar_t__ VAR_0 ;
 TYPE_9__* VAR_1 ;
 TYPE_8__* VAR_2 ;
 int FUNC_0 (TYPE_5__*,TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(uiArea *VAR_3, int VAR_4, GdkEventKey *VAR_5)
{
 uiAreaKeyEvent VAR_6;
 guint VAR_7;
 int VAR_8;

 VAR_6.Key = 0;
 VAR_6.ExtKey = 0;
 VAR_6.Modifier = 0;

 VAR_7 = FUNC_2(VAR_5->state, VAR_5->window);
 VAR_6.Modifiers = FUNC_1(VAR_7);

 VAR_6.Up = VAR_4;

 for (VAR_8 = 0; VAR_1[VAR_8].keyval != VAR_0; VAR_8++)
  if (VAR_1[VAR_8].keyval == VAR_5->keyval) {
   VAR_6.ExtKey = VAR_1[VAR_8].extkey;
   goto keyFound;
  }

 for (VAR_8 = 0; VAR_2[VAR_8].keyval != VAR_0; VAR_8++)
  if (VAR_2[VAR_8].keyval == VAR_5->keyval) {
   VAR_6.Modifier = VAR_2[VAR_8].mod;

   VAR_6.Modifiers &= ~VAR_6.Modifier;
   goto keyFound;
  }

 if (FUNC_3(VAR_5->hardware_keycode - 8, &VAR_6))
  goto keyFound;


 return 0;

keyFound:
 return (*(VAR_3->ah->KeyEvent))(VAR_3->ah, VAR_3, &VAR_6);
}
