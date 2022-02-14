
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fifo {scalar_t__ num; size_t rindex; int size; int * buf; } ;
struct ps2kbd_softc {struct fifo fifo; } ;



__attribute__((used)) static int
FUNC_0(struct ps2kbd_softc *VAR_0, uint8_t *VAR_1)
{
 struct fifo *VAR_2;

 VAR_2 = &VAR_0->fifo;
 if (VAR_2->num > 0) {
  *VAR_1 = VAR_2->buf[VAR_2->rindex];
  VAR_2->rindex = (VAR_2->rindex + 1) % VAR_2->size;
  VAR_2->num--;
  return (0);
 }

 return (-1);
}
