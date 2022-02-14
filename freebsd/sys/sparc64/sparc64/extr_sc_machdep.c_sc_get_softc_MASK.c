
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int unit; int flags; int keyboard; int adapter; int mouse_char; int cursor_char; } ;
typedef TYPE_1__ sc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

sc_softc_t *
FUNC_0(int VAR_5, int VAR_6)
{
 sc_softc_t *VAR_7;

 if (VAR_5 < 0 || VAR_5 >= VAR_2)
  return (((void*)0));
 VAR_7 = &VAR_4[VAR_5];
 VAR_7->unit = VAR_5;
 if ((VAR_7->flags & VAR_1) == 0) {
  VAR_7->keyboard = -1;
  VAR_7->adapter = -1;
  VAR_7->cursor_char = VAR_0;
  VAR_7->mouse_char = VAR_3;
 }
 return (VAR_7);
}
