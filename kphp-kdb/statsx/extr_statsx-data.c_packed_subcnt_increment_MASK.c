
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {unsigned long long mask_subcnt; int* subcnt; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int*,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4 (struct counter *VAR_2, int VAR_3, int VAR_4 ) {
  int VAR_5,VAR_6;
  unsigned long long VAR_7, VAR_8, VAR_9 = 1;
  int *VAR_10;
  if (VAR_1 >= 4) {
    FUNC_0(VAR_0, "packed_subcnt_increment(c = %p, idx = %d, delta = %d)\n", VAR_2, VAR_3, VAR_4);
    FUNC_0(VAR_0, "c->mask_subcnt = %llx\n", VAR_2->mask_subcnt);
  }
  VAR_9 <<= VAR_3;
  if (VAR_9 & VAR_2->mask_subcnt) {
    VAR_7 = VAR_2->mask_subcnt;
    for (VAR_5=0;;VAR_5++) {
      VAR_8 = VAR_7 & (VAR_7 - 1);
      if (VAR_9 == (VAR_7 ^ VAR_8) ) break;
      VAR_7 = VAR_8;
    }
    return ( VAR_2->subcnt[VAR_5] += VAR_4 ) ;
  }
  else {
    VAR_7 = VAR_2->mask_subcnt;
    VAR_6 = -1;
    for (VAR_5=0;VAR_7 != 0;VAR_5++) {
      VAR_8 = VAR_7 & (VAR_7 - 1);
      if (VAR_9 > (VAR_7 ^ VAR_8)) VAR_6 = VAR_5;
      VAR_7 = VAR_8;
    }
    VAR_10 = (int*) FUNC_3(sizeof(int) * (VAR_5+1));
    VAR_10[VAR_6+1] = VAR_4;
    if (VAR_5 > 0) {
      FUNC_1(VAR_10, VAR_2->subcnt, sizeof(int) * (VAR_6+1));
      FUNC_1(VAR_10+(VAR_6+2), VAR_2->subcnt + (VAR_6+1), sizeof(int) * (VAR_5 - (VAR_6+1)));
      FUNC_2(VAR_2->subcnt, sizeof(int) * VAR_5);
    }
    VAR_2->subcnt = VAR_10;
    VAR_2->mask_subcnt |= VAR_9;
    if (VAR_1 >= 4) {
      FUNC_0(VAR_0, "c->subcnt = ");
      for (VAR_6=0;VAR_6<=VAR_5;VAR_6++) FUNC_0 (VAR_0, "%d ", VAR_2->subcnt[VAR_6]);
      FUNC_0(VAR_0, "\n");
    }
    return VAR_4;
  }
}
