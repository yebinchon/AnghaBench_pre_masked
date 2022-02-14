
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int In; int last_response_time; int fd; } ;
typedef int qres_t ;
typedef int nb_iterator_t ;





 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (long long,int ) ;
 int FUNC_3 (long long) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,...) ;
 int FUNC_7 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int,char*,int ,int,int) ;

int FUNC_11 (struct connection *VAR_3, int VAR_4, int VAR_5) {
  FUNC_10 (1, "rpcc_execute: fd=%d, op=%d, len=%d\n", VAR_3->fd, VAR_4, VAR_5);

  int VAR_6[5];
  qres_t *VAR_7;

  nb_iterator_t VAR_8;

  char *VAR_9;
  int VAR_10;

  VAR_3->last_response_time = VAR_1;

  switch (VAR_4) {
    case 129:
    case 128:
      FUNC_0 (VAR_5 % (int)sizeof (int) == 0);
      VAR_5 /= (int)sizeof (int);
      FUNC_0 (VAR_5 >= 6);

      FUNC_7 (&VAR_8, &VAR_3->In);
      FUNC_0 (FUNC_6 (&VAR_8, VAR_6, sizeof (int) * 5) == sizeof (int) * 5);

      long long VAR_11 = *(long long *)(&VAR_6[3]);

      VAR_7 = FUNC_2 (VAR_11, VAR_2);
      if (VAR_7 == ((void*)0)) {
        FUNC_3 (VAR_11);
        break;
      }

      if (VAR_4 == 129) {
        FUNC_8 (VAR_7);
        break;
      }

      VAR_10 = VAR_5 - 5 - 1;
      VAR_9 = FUNC_4 (sizeof (int) * (size_t)VAR_10);
      FUNC_0 (FUNC_6 (&VAR_8, VAR_9, VAR_10 * (int)sizeof (int)) == VAR_10 * (int)sizeof (int));

      FUNC_5 (&VAR_8);

      if (FUNC_9 (VAR_7, VAR_9, VAR_10 * (int)sizeof (int)) < 0) {
        FUNC_1 (VAR_9);
      }

      break;
    case 130:
      break;
  }

  return VAR_0;
}
