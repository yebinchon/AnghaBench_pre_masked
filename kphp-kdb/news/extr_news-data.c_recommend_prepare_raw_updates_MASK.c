
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dyn_mark_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_2 ;
 int FUNC_4 (int*,int*,int) ;
 int VAR_3 ;
 int FUNC_5 (int*,int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int,int,int,int,int,int const) ;

int FUNC_9 (int *VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13) {
  int VAR_14, VAR_15 = 0, VAR_16 = 1;
  dyn_mark_t VAR_17;
  FUNC_0 (VAR_17);
  for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
    if (VAR_6[(VAR_14<<1)+1] == -2) {
      VAR_15++;
    } else if (VAR_6[(VAR_14<<1)+1] == -1) {
      VAR_16++;
    }
  }
  FUNC_2 (&VAR_2, VAR_15);
  FUNC_2 (&VAR_1, VAR_16);
  for (VAR_14 = 0; VAR_14 < VAR_7; ) {
    if (VAR_6[(VAR_14<<1)+1] == -2) {
      FUNC_3 (&VAR_2, VAR_6[VAR_14<<1]);
      VAR_7--;
      if (VAR_14 != VAR_7) {
        FUNC_4 (VAR_6 + (VAR_14<<1), VAR_6 + (VAR_7<<1), 8);
      }
      continue;
    } else if (VAR_6[(VAR_14<<1)+1] == -1) {
      FUNC_3 (&VAR_1, VAR_6[VAR_14<<1]);
      VAR_7--;
      if (VAR_14 != VAR_7) {
        FUNC_4 (VAR_6 + (VAR_14<<1), VAR_6 + (VAR_7<<1), 8);
      }
      continue;
    }
    VAR_14++;
  }
  FUNC_3 (&VAR_1, VAR_11);


  int VAR_18 = 0;
  FUNC_5 (VAR_6, VAR_7, 8, VAR_4);
  for (VAR_14 = 1; VAR_14 < VAR_7; VAR_14++) {
    if (VAR_6[2*VAR_14] != VAR_6[2*VAR_18]) {
      ++VAR_18;
      VAR_6[2*VAR_18] = VAR_6[2*VAR_14];
      VAR_6[2*VAR_18+1] = VAR_6[2*VAR_14+1];
    }
  }
  VAR_18++;
  VAR_0 += VAR_7 - VAR_18;
  VAR_7 = VAR_18;

  FUNC_5 (VAR_6, VAR_7, 8, VAR_5);

  const int VAR_19 = VAR_3 - 30 * VAR_13;
  FUNC_7 ();
  for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
    FUNC_8 (VAR_6[(VAR_14<<1)], VAR_6[(VAR_14<<1)+1], VAR_8, VAR_9, VAR_10, VAR_12, VAR_19);
  }
  int VAR_20 = FUNC_6 (VAR_13);
  FUNC_1 (VAR_17);
  return VAR_20;
}
