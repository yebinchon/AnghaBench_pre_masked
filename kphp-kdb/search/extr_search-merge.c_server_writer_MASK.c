
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int state; int fd; int Out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,int,int,int,char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char*,int,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

int FUNC_7 (struct connection *VAR_7) {
  int VAR_8, VAR_9, VAR_10 = 0;
  char *VAR_11;

  while ((VAR_7->state & VAR_1) != 0) {

    VAR_9 = FUNC_4 (&VAR_7->Out);

    if (!VAR_9) {
      VAR_7->state &= ~VAR_1;
      break;
    }

    if (VAR_7->state & VAR_0) {
      break;
    }

    VAR_11 = FUNC_3 (&VAR_7->Out);

    VAR_8 = FUNC_6 (VAR_7->fd, VAR_11, VAR_9, VAR_3 | VAR_4);

    if (VAR_6 > 0) {
      FUNC_1 (VAR_5, "send() to %d: %d written out of %d at %p\n", VAR_7->fd, VAR_8, VAR_9, VAR_11);
      if (VAR_8 < 0) FUNC_5 ("send()");
    }

    if (VAR_8 > 0) {
      FUNC_0 (&VAR_7->Out, VAR_8);
      VAR_10 += VAR_8;
    }

    if (VAR_8 < VAR_9) {
      VAR_7->state |= VAR_0;
    }

  }

  if (VAR_10) {
    FUNC_2 (&VAR_7->Out);
  }

  return VAR_7->state & VAR_1 ? VAR_2 : 0;
}
