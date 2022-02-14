
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nb_reader {int dummy; } ;
typedef int netbuffer_t ;
typedef int nb_iterator_t ;


 int FUNC_0 (int *,int const) ;
 int FUNC_1 (struct nb_reader*,int*,int*) ;
 int FUNC_2 (struct nb_reader*,int *,int const) ;
 int const FUNC_3 (int *,int*,int const) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5 (int *VAR_0, const int VAR_1, const int VAR_2, netbuffer_t *VAR_3, const int VAR_4) {
  if (!VAR_4) {
    return 0;
  }
  nb_iterator_t VAR_5;
  if (VAR_4 >= 4) {
    int VAR_6;
    FUNC_4 (&VAR_5, VAR_3);
    if (FUNC_3 (&VAR_5, &VAR_6, 4) != 4) {
      FUNC_0 (VAR_3, VAR_4);
      return -1;
    }
    if (VAR_6 == 0x30303030 + ((VAR_2 - 1) << 24)) {
      VAR_6 = (VAR_4 - 4) >> 2;

      if ((VAR_4 & 3) || VAR_1 < VAR_6 || VAR_6 % VAR_2 || FUNC_3 (&VAR_5, &VAR_0[0], VAR_4 - 4) != VAR_4 - 4) {
        FUNC_0 (VAR_3, VAR_4);
        return -1;
      }

      FUNC_0 (VAR_3, VAR_4);
      return VAR_6 / VAR_2;
    }
  }

  struct nb_reader VAR_7;
  FUNC_2 (&VAR_7, VAR_3, VAR_4);
  int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
  for (;;) {
    if (VAR_10 >= VAR_1 || !FUNC_1 (&VAR_7, &VAR_0[VAR_10++], &VAR_8)) {
      FUNC_0 (VAR_3, VAR_4);
      return -1;
    }
    if (VAR_8 < 0) {
      break;
    }
    if (++VAR_9 == VAR_2) {
      VAR_9 = 0;
    }
    if (VAR_8 != (VAR_9 ? '_' : ',')) {
      FUNC_0 (VAR_3, VAR_4);
      return -1;
    }
  }
  FUNC_0 (VAR_3, VAR_4);
  return (VAR_10 % VAR_2) ? -1 : VAR_10 / VAR_2;
}
