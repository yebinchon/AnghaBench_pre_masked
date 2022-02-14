
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pollfd {int events; int fd; } ;
struct connection {scalar_t__ basic_type; int fd; int In; int crypto; scalar_t__ error; } ;
struct TYPE_3__ {double finish_time; struct connection* conn; } ;
typedef TYPE_1__ php_worker ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 double FUNC_2 () ;
 int FUNC_3 (struct pollfd*,int,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int ,char*,int,int ) ;

int FUNC_6 (php_worker *VAR_7, char *VAR_8, int VAR_9, int VAR_10) {
  FUNC_0 (VAR_7 != ((void*)0));

  struct connection *VAR_11 = VAR_7->conn;
  double VAR_12 = FUNC_2();



  if (VAR_7->finish_time < VAR_12 + 0.01) {
    return -1;
  }

  if (VAR_11 == ((void*)0) || VAR_11->error) {
    return -1;
  }

  FUNC_0 (!VAR_11->crypto);
  FUNC_0 (VAR_11->basic_type != VAR_5);
  FUNC_0 (VAR_9 <= VAR_10);

  int VAR_13 = 0;
  int VAR_14 = FUNC_1 (&VAR_11->In);
  if (VAR_14 > 0) {
    if (VAR_14 > VAR_10) {
      VAR_14 = VAR_10;
    }
    FUNC_0 (FUNC_4 (&VAR_11->In, VAR_8, VAR_14) == VAR_14);
    VAR_13 += VAR_14;
  }

  struct pollfd VAR_15;
  VAR_15.fd = VAR_11->fd;
  VAR_15.events = VAR_3 | VAR_4;

  while (VAR_13 < VAR_9) {
    VAR_12 = FUNC_2();

    double VAR_16 = VAR_7->finish_time - VAR_12;
    FUNC_0 (VAR_16 < 2000000.0);

    if (VAR_16 < 0.01) {
      return -1;
    }

    int VAR_17 = FUNC_3 (&VAR_15, 1, (int)(VAR_16 * 1000 + 1));
    int VAR_18 = VAR_6;
    if (VAR_17 > 0) {
      FUNC_0 (VAR_17 == 1);

      VAR_17 = FUNC_5 (VAR_11->fd, VAR_8 + VAR_13, VAR_10 - VAR_13, 0);
      VAR_18 = VAR_6;







      if (VAR_17 > 0) {
        VAR_13 += VAR_17;
      } else {
        if (VAR_17 == 0) {
          return -1;
        }

        if (VAR_18 != VAR_0 && VAR_18 != VAR_2 && VAR_18 != VAR_1) {
          return -1;
        }
      }
    } else {
      if (VAR_17 == 0) {
        return -1;
      }


      if (VAR_18 != VAR_1) {
        return -1;
      }
    }
  }


  return VAR_13;
}
