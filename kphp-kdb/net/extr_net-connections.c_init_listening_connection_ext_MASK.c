
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int fd; int flags; int status; int basic_type; void* extra; int * type; } ;
typedef int conn_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct connection* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int ,struct connection*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (struct connection*,int ,int) ;

int FUNC_5 (int VAR_18, conn_type_t *VAR_19, void *VAR_20, int VAR_21, int VAR_22) {
  if (FUNC_0 (VAR_19) < 0) {
    return -1;
  }
  if (VAR_18 >= VAR_7) {
    return -1;
  }
  if (VAR_18 > VAR_17) {
    VAR_17 = VAR_18;
  }
  struct connection *VAR_23 = VAR_4 + VAR_18;

  FUNC_4 (VAR_23, 0, sizeof (struct connection));

  VAR_23->fd = VAR_18;
  VAR_23->type = VAR_19;
  VAR_23->extra = VAR_20;
  VAR_23->basic_type = VAR_15;
  VAR_23->status = VAR_14;

  if ((VAR_21 & VAR_9)) {
    VAR_22 = 10;
  }

  FUNC_3 (VAR_18, VAR_22, VAR_13, VAR_23);


  FUNC_2 (VAR_18, VAR_6 | VAR_5);


  if ((VAR_21 & VAR_12)) {
    VAR_23->flags |= VAR_3;
  }

  if ((VAR_21 & VAR_10)) {
    VAR_23->flags |= VAR_1;
    FUNC_1 (VAR_23->fd);
  }

  if ((VAR_21 & VAR_8)) {
    VAR_23->flags |= VAR_0;
  }

  if ((VAR_21 & VAR_11)) {
    VAR_23->flags |= VAR_2;
  }

  VAR_16++;

  return 0;
}
