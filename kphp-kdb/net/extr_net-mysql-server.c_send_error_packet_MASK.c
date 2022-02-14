
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int flags; int Out; } ;
typedef int nbw_iterator_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct connection*,int) ;
 scalar_t__ FUNC_4 (int *,...) ;

int FUNC_5 (struct connection *VAR_1, int VAR_2,
                       int VAR_3, const char *VAR_4, int VAR_5,
                       int VAR_6) {
  nbw_iterator_t VAR_7;
  char VAR_8[16];

  int VAR_9 = 0;

  FUNC_0 (&VAR_7, &VAR_1->Out);
  VAR_6 <<= 24;
  FUNC_4 (&VAR_1->Out, &VAR_6, 4);

  VAR_9 += FUNC_4 (&VAR_1->Out, "\xff", 1);
  VAR_9 += FUNC_4 (&VAR_1->Out, &VAR_2, 2);
  FUNC_2 (VAR_8, "#%05d", VAR_3);
  VAR_9 += FUNC_4 (&VAR_1->Out, VAR_8, 6);
  VAR_9 += FUNC_4 (&VAR_1->Out, VAR_4, VAR_5);

  FUNC_1 (&VAR_7, &VAR_9, 3);

  FUNC_3 (VAR_1, VAR_9);
  VAR_1->flags |= VAR_0;

  return VAR_9 + 4;
}
