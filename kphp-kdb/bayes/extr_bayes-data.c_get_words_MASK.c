
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ll ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (unsigned char*,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__*,char*) ;
 int FUNC_10 (scalar_t__*,int,int,int ) ;
 int VAR_4 ;
 int FUNC_11 (char*) ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 scalar_t__* VAR_7 ;
 int VAR_8 ;

int FUNC_12 (char *VAR_9) {
  if (VAR_6 > 2 && VAR_1) {
    FUNC_5 (VAR_4, "in get words\n");
  }

  VAR_8 = 0;
  int VAR_10;

  if (FUNC_11 (VAR_9) + 1 > VAR_0) {
    VAR_9[VAR_0 - 1] = 0;
  }

  for (VAR_10 = FUNC_11 (VAR_9); VAR_10 > 0 && VAR_9[VAR_10 - 1] != '\t'; VAR_10--) ;

  FUNC_2 ((unsigned char *)(VAR_9 + VAR_10), VAR_5);
  VAR_9 = ((void*)0);

  if (VAR_6 > 1 && VAR_1) {
    FUNC_9 (VAR_5, VAR_2);
    FUNC_5 (VAR_4, "bayes_get_words: %s\n", VAR_2);
  }

  int VAR_11 = FUNC_4();

  int VAR_12 = 0;
  for (VAR_10 = 0; VAR_5[VAR_10] && VAR_5[VAR_10 + 1] && VAR_12 < 25; VAR_10++) {
    if ((FUNC_7 (VAR_5[VAR_10]) + FUNC_7 (VAR_5[VAR_10 + 1]) == 1)) {
      if (!FUNC_3 (&VAR_5[VAR_10]) && !FUNC_3 (&VAR_5[VAR_10 + 1])) {
        FUNC_0 (0, VAR_12++);
        while (FUNC_7 (VAR_5[VAR_10 + 1]) != 2) {
          VAR_10++;
        }
      }
    }
  }

  int VAR_13 = 0;
  for (VAR_10 = 0; VAR_5[VAR_10] && VAR_5[VAR_10 + 1] && VAR_13 < 25; VAR_10++) {

    if (FUNC_6 (VAR_5[VAR_10]) == 0 && FUNC_6 (VAR_5[VAR_10 + 1]) == 1 && FUNC_6 (VAR_5[VAR_10 + 2]) == 1) {
      FUNC_0 (1, VAR_13++);
    }
  }

  int VAR_14 = -VAR_8;
  int VAR_15 = 0, VAR_16;
  while (VAR_5[VAR_15]) {
    while (VAR_5[VAR_15] && !FUNC_8 (VAR_5[VAR_15])) {
      VAR_15++;
    }
    if (VAR_5[VAR_15]) {
      VAR_10 = VAR_15;
      while (VAR_5[VAR_10] && FUNC_8 (VAR_5[VAR_10])) {
        VAR_10++;
      }

      if (VAR_5[VAR_10]) {
        VAR_16 = VAR_10 + 1;
        VAR_5[VAR_10] = 0;
      } else {
        VAR_16 = VAR_10;
      }

      if (VAR_10 - VAR_15 > 2) {
        FUNC_1 (&VAR_5[VAR_15]);
      }
      VAR_15 = VAR_16;
    }
  }

  VAR_14 += VAR_8;
  if (VAR_14 >= 11) {
    VAR_14 = (VAR_14 - 11)/ 4 + 11;
  }

  if (VAR_14 > 25) {
    VAR_14 = 25;
  }

  FUNC_0 (2, VAR_14);

  FUNC_10 (VAR_7, VAR_8, sizeof (ll), VAR_3);
  VAR_15 = 1;
  for (VAR_10 = 1; VAR_10 < VAR_8; VAR_10++)
    if (VAR_7[VAR_10] != VAR_7[VAR_10 - 1])
      VAR_7[VAR_15++] = VAR_7[VAR_10];
  VAR_8 = VAR_15;

  VAR_7[VAR_8] = 0;

  if (VAR_6 > 2 && VAR_1) {
    FUNC_5 (VAR_4, "go out get words\n");
  }

  return VAR_11;
}
