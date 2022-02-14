
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int iov_len; int iov_base; } ;
typedef int netbuffer_t ;
typedef int nb_iterator_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5 (struct iovec *VAR_0, int *VAR_1, int VAR_2, netbuffer_t *VAR_3) {
  int VAR_4 = 0, VAR_5;
  nb_iterator_t VAR_6;
  FUNC_4 (&VAR_6, VAR_3);

  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
    int VAR_7 = FUNC_3 (&VAR_6);
    if (VAR_7 <= 0) {
      break;
    }
    VAR_0[VAR_5].iov_len = VAR_7;
    VAR_0[VAR_5].iov_base = FUNC_2 (&VAR_6);
    FUNC_0 (FUNC_1 (&VAR_6, VAR_7) == VAR_7);
    VAR_4 += VAR_7;
  }

  *VAR_1 = VAR_5;

  return VAR_4;
}
