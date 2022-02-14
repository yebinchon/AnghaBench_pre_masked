
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* compression_bytes; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_1 (int ,char*,char*,char*,...) ;
 scalar_t__ FUNC_2 (int) ;
 double FUNC_3 (int ) ;
 double VAR_6 ;
 int FUNC_4 (char*,int,...) ;
 int VAR_7 ;
 char* FUNC_5 (int) ;
 int VAR_8 ;
 scalar_t__* VAR_9 ;
 int FUNC_6 (int*,int ,int) ;
 double FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int*,int) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

void FUNC_9 (int VAR_13[2]) {
  FUNC_6 (VAR_13, 0, sizeof(int) * 2);
  if (VAR_3 < 0) {
    VAR_13[0] = VAR_13[1] = VAR_7;
    return;
  }
  if (!VAR_3) {
    return;
  }

  int VAR_14;
  int VAR_15[2];
  for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
    VAR_15[0] = VAR_15[1] = VAR_14;
    double VAR_16 = -FUNC_3(VAR_0);
    FUNC_0 (!FUNC_2 (VAR_14));
    FUNC_8 (VAR_15, 1);
    if ((VAR_4 - VAR_12) != FUNC_2 (VAR_14)) {
      FUNC_4 ("cur_offs - word_index_offset == %lld\n", VAR_4 - VAR_12);
      FUNC_4 ("get_compression_bytes (%d) = %lld\n", VAR_14, FUNC_2 (VAR_14));
      FUNC_0 (0);
    }
    VAR_16 += FUNC_3 (VAR_0);
    if (VAR_11 > 0) {
      FUNC_1 (VAR_10, "Compression method: %s, %s(%.6lf%%) = %ld(%.6lf%%)+%ld(%.6lf%%) bytes in %d lists (%.6lf seconds).\nMax encoded list bytes = %ld.\n",
      FUNC_5 (VAR_14),
      FUNC_2 (VAR_14), FUNC_7 (FUNC_2 (VAR_14), FUNC_2 (0)),
      VAR_5[0], FUNC_7 (VAR_5[0], VAR_1.compression_bytes[0]),
      VAR_5[1], FUNC_7 (VAR_5[1], VAR_1.compression_bytes[1]),
      VAR_8, VAR_16,
      (VAR_9[0] > VAR_9[1]) ? VAR_9[0] : VAR_9[1]);
    }

    if (VAR_14) {
      int VAR_17;
      for (VAR_17 = 0; VAR_17 < 2; VAR_17++) {
        double VAR_18 = FUNC_7 (VAR_5[VAR_17], VAR_1.compression_bytes[VAR_13[VAR_17] * 2 + VAR_17]);
        switch (VAR_14) {
          case 1:
            if (VAR_18 < 100.0) { VAR_13[VAR_17] = VAR_14; }
            break;
          case 2:
            if (VAR_18 < VAR_6) { VAR_13[VAR_17] = VAR_14; }
            break;
        }
      }
    }
  }

  if (VAR_11 > 0) {
    FUNC_1 (VAR_10, "Choose %s+%s coding.\n",
             FUNC_5 (VAR_13[0]),
             FUNC_5 (VAR_13[1]));
  }
  return;
}
