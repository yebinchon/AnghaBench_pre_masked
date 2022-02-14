
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int fd; int error; int state; int In; scalar_t__ unread_res_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct connection*,char*,int) ;
 int FUNC_4 (struct connection*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct connection*) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 char* FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int,char*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_16 (struct connection *VAR_7) {

  char *VAR_8, *VAR_9, *VAR_10;
  int VAR_11, VAR_12, VAR_13 = 0;

  if (VAR_6 > 1) {
    FUNC_6 (VAR_5, "in client_reader(%d)\n", VAR_7->fd);
  }

  if (VAR_7->unread_res_bytes) {
    FUNC_9 (VAR_7);
    VAR_13 = FUNC_4 (VAR_7);
  }

  VAR_10 = FUNC_12 (&VAR_7->In, 512);
  VAR_12 = FUNC_13 (&VAR_7->In);

  if (VAR_12 <= 0) {
    FUNC_7(&VAR_7->In);
    VAR_7->error = 8;
    VAR_10 = FUNC_12 (&VAR_7->In, 512);
    VAR_12 = FUNC_13 (&VAR_7->In);
  }

  FUNC_2 (VAR_10 && VAR_12 > 0);

  if (!(VAR_7->state & VAR_0)) {
    VAR_11 = FUNC_15 (VAR_7->fd, VAR_10, VAR_12, VAR_3);

    if (VAR_6 > 0) {
      FUNC_6 (VAR_5, "recv() from %d: %d read out of %d at %p\n", VAR_7->fd, VAR_11, VAR_12, VAR_10);
      if (VAR_11 < 0 && VAR_4 != VAR_2) FUNC_14 ("recv()");
    }

  } else {
    VAR_11 = 0;
  }

  if (VAR_11 < VAR_12) {
    VAR_7->state |= VAR_0;
  }

  if (VAR_11 > 0) {
    FUNC_1 (&VAR_7->In, VAR_11);
  } else if (VAR_7->unread_res_bytes) {
    VAR_7->state |= VAR_1;
    return 2;
  }

  if (VAR_7->unread_res_bytes) {
    FUNC_9 (VAR_7);
    FUNC_4 (VAR_7);
    return 0;
  }

  do {
    VAR_9 = VAR_8 = FUNC_10 (&VAR_7->In);
    VAR_12 = FUNC_11 (&VAR_7->In);
    if (!VAR_12) { return 0; }
    VAR_10 = VAR_8 + (VAR_12 > 1024 ? 1024 : VAR_12);

    while (VAR_9 < VAR_10 && *VAR_9 != 10) {
      VAR_9++;
    }

    if (VAR_9 >= VAR_10) {
      if (VAR_10 - VAR_8 >= 1024) {
  if (VAR_6 > 0) {
    FUNC_6 (VAR_5, "client socket #%d: command line longer than 1024 bytes\n", VAR_7->fd);
  }
  FUNC_0 (&VAR_7->In, VAR_10 - VAR_8);
  return -1;
      } else {
  VAR_11 = FUNC_5 (&VAR_7->In, 1024);
  return VAR_11 <= VAR_12 ? -1 : 0;
      }
    }

    VAR_10 = VAR_9;
    VAR_12 = VAR_10 - VAR_8 + 1;
    *VAR_10 = 0;
    if (VAR_10 > VAR_8 && VAR_10[-1] == '\r') {
      *--VAR_10 = 0;
    }

    VAR_11 = FUNC_3 (VAR_7, VAR_8, VAR_10 - VAR_8);

    FUNC_0 (&VAR_7->In, VAR_12);

    if (VAR_11 < 0) {
      return -1;
    }

    FUNC_8 (&VAR_7->In);
  } while (!VAR_11);

  return VAR_11;
}
