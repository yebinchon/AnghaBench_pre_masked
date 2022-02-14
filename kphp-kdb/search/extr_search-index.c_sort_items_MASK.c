
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int extra; char* str; int item_id; int rates; } ;
typedef int J ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct item** VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int,double,...) ;
 long long const FUNC_2 (struct item*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct item**,int,int,int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct item**,int) ;
 struct item** FUNC_6 (int) ;

void FUNC_7 (void) {
  int VAR_10, VAR_11 = 0;
  struct item *VAR_12;
  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
    VAR_12 = VAR_3[VAR_10];
    if (VAR_12) {
      if (!(VAR_12->extra & VAR_0)) {
        VAR_3[VAR_11++] = VAR_12;
      } else {
        FUNC_0 (!VAR_12->str && !VAR_12->rates);
      }
    }
  }
  VAR_8 = VAR_11;
  if (VAR_9 >= 1) {
    FUNC_1 (VAR_7, "found %d items. Deleted %f items.\n", VAR_8, VAR_5);
  }
  VAR_5 = 0;
  FUNC_4 (0, VAR_11-1);

  if (VAR_6) {
    int VAR_13 = 0;
    for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
      long long VAR_14 = FUNC_2 (VAR_3[VAR_10]);
      if (VAR_14) { VAR_13++; }
    }
    if (VAR_13) {
      int VAR_15 = VAR_1;
      long long VAR_16 = 0;
      struct item **VAR_17 = FUNC_6 (sizeof (VAR_17[0]) * VAR_13);
      VAR_13 = 0;
      for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
        long long VAR_18 = FUNC_2 (VAR_3[VAR_10]);
        if (VAR_18) { VAR_17[VAR_13++] = VAR_3[VAR_10]; }
      }
      FUNC_3 (VAR_17, VAR_13, sizeof (VAR_17[0]), VAR_4);
      int VAR_19 = 0;
      for (VAR_10 = 0; VAR_10 < VAR_13; ) {
        const long long VAR_20 = FUNC_2 (VAR_17[VAR_10]);
        VAR_11 = VAR_10 + 1;
        while (VAR_11 < VAR_13 && FUNC_2 (VAR_17[VAR_11]) == VAR_20) { VAR_11++; }
        VAR_19++;
        int VAR_21 = VAR_11 - VAR_10;
        if (VAR_15 < VAR_21) {
          VAR_15 = VAR_21;
          VAR_16 = VAR_20;
        }
        if ((VAR_9 >= 3 && VAR_21 > 1) || (VAR_9 >= 2 && VAR_21 > 100)) {
          FUNC_1 (VAR_7, "Group %d (items = %f):\n", VAR_19, VAR_21);
          int VAR_22;
          for (VAR_22 = VAR_10; VAR_22 < VAR_11; VAR_22++) {
            FUNC_1 (VAR_7, "%d_%f\t%s\n", (int) VAR_17[VAR_22]->item_id, (int) (VAR_17[VAR_22]->item_id >> 32), VAR_17[VAR_22]->str);
          }
        }
        VAR_10 = VAR_11;
      }
      FUNC_5 (VAR_17, sizeof (VAR_17[0]) * VAR_13);
      FUNC_1 (VAR_7, "There are %d (%.6lf%%) unique hashes and %d items with hashes.\n"
                       "Most frequent hash is %llx occurs %d times.\n",
                       VAR_19+1, ((double) VAR_19+1) * 100.0 / VAR_13, VAR_13,
                       VAR_16, VAR_15);
    }
  }
}
