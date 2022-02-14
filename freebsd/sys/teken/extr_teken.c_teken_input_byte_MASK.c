
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t_stateflags; int t_utf8_left; unsigned char t_utf8_partial; } ;
typedef TYPE_1__ teken_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(teken_t *VAR_1, unsigned char VAR_2)
{




 if ((VAR_2 & 0x80) == 0x00 || VAR_1->t_stateflags & VAR_0) {

  VAR_1->t_utf8_left = 0;
  FUNC_0(VAR_1, VAR_2);
 } else if ((VAR_2 & 0xe0) == 0xc0) {

  VAR_1->t_utf8_left = 1;
  VAR_1->t_utf8_partial = VAR_2 & 0x1f;
 } else if ((VAR_2 & 0xf0) == 0xe0) {

  VAR_1->t_utf8_left = 2;
  VAR_1->t_utf8_partial = VAR_2 & 0x0f;
 } else if ((VAR_2 & 0xf8) == 0xf0) {

  VAR_1->t_utf8_left = 3;
  VAR_1->t_utf8_partial = VAR_2 & 0x07;
 } else if ((VAR_2 & 0xc0) == 0x80) {
  if (VAR_1->t_utf8_left == 0)
   return;
  VAR_1->t_utf8_left--;
  VAR_1->t_utf8_partial = (VAR_1->t_utf8_partial << 6) | (VAR_2 & 0x3f);
  if (VAR_1->t_utf8_left == 0) {
   FUNC_1("Got UTF-8 char %x\n", VAR_1->t_utf8_partial);
   FUNC_0(VAR_1, VAR_1->t_utf8_partial);
  }
 }
}
