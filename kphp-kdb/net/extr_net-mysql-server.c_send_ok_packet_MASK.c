
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int flags; int Out; } ;
typedef int nbw_iterator_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (struct connection*,int) ;
 scalar_t__ FUNC_3 (struct connection*,unsigned long long) ;
 scalar_t__ FUNC_4 (int *,...) ;

int FUNC_5 (struct connection *VAR_1, unsigned long long VAR_2,
                    unsigned long long VAR_3, int VAR_4,
                    int VAR_5, const char *VAR_6, int VAR_7,
                    int VAR_8) {
  nbw_iterator_t VAR_9;

  int VAR_10 = 0;

  FUNC_0 (&VAR_9, &VAR_1->Out);
  VAR_8 <<= 24;
  FUNC_4 (&VAR_1->Out, &VAR_8, 4);

  VAR_10 += FUNC_4 (&VAR_1->Out, "", 1);
  VAR_10 += FUNC_3 (VAR_1, VAR_2);
  VAR_10 += FUNC_3 (VAR_1, VAR_3);
  VAR_10 += FUNC_4 (&VAR_1->Out, &VAR_4, 2);
  VAR_10 += FUNC_4 (&VAR_1->Out, &VAR_5, 2);
  VAR_10 += FUNC_4 (&VAR_1->Out, VAR_6, VAR_7);

  FUNC_1 (&VAR_9, &VAR_10, 3);

  FUNC_2 (VAR_1, VAR_10);
  VAR_1->flags |= VAR_0;

  return VAR_10 + 4;
}
