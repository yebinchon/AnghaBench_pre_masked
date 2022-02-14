
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcb_table_entry {int i; int p; } ;
typedef int T ;


 int FUNC_0 (int) ;
 struct fcb_table_entry* FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct fcb_table_entry*) ;
 unsigned int FUNC_3 (unsigned int*,unsigned int) ;
 unsigned int FUNC_4 (int,int) ;
 unsigned int FUNC_5 (unsigned int,int) ;
 int FUNC_6 (struct fcb_table_entry*,int,int,int ) ;
 unsigned int FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10 (int VAR_1, unsigned VAR_2) {
  int VAR_3, VAR_4;
  VAR_1 += 4;
  VAR_2 = FUNC_7 (VAR_2);
  int VAR_5 = VAR_1 << 3;
  int VAR_6 = (int) (FUNC_8 (VAR_5) + 0.5);

  struct fcb_table_entry *VAR_7 = FUNC_1 (VAR_6, sizeof (struct fcb_table_entry));
  FUNC_0 (VAR_7 != ((void*)0));
  VAR_7[0].i = 0;
  VAR_7[0].p = 1;
  for (VAR_3 = 1; VAR_3 < VAR_6; VAR_3++) {
    VAR_7[VAR_3].i = VAR_3;
    VAR_7[VAR_3].p = FUNC_9 (VAR_7[VAR_3-1].p);
  }
  FUNC_0 (FUNC_9 (0x82608EDB) == 1);
  FUNC_6 (VAR_7, VAR_6, sizeof (VAR_7[0]), VAR_0);
  unsigned VAR_8 = FUNC_4 (0x82608EDB, VAR_6);

  unsigned VAR_9[32];
  for (VAR_3 = 0; VAR_3 < 32; VAR_3++) {
    VAR_9[VAR_3] = FUNC_5 (VAR_8, VAR_3);
  }

  unsigned VAR_10 = VAR_2;
  int VAR_11 = VAR_5 / VAR_6, VAR_12 = -1;
  for (VAR_4 = 0; VAR_4 <= VAR_11; VAR_4++) {
    int VAR_13 = -1, VAR_14 = VAR_6;
    while (VAR_14 - VAR_13 > 1) {
      int VAR_15 = ((VAR_13 + VAR_14) >> 1);
      if (VAR_7[VAR_15].p <= VAR_10) { VAR_13 = VAR_15; } else { VAR_14 = VAR_15; }
    }
    if (VAR_13 >= 0 && VAR_7[VAR_13].p == VAR_10) {
      VAR_12 = VAR_7[VAR_13].i + VAR_6 * VAR_4;
      break;
    }
    VAR_10 = FUNC_3 (VAR_9, VAR_10);
  }
  FUNC_2 (VAR_7);
  return VAR_12;
}
