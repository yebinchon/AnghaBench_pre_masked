
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int userpair_t ;
struct username_index {int dummy; } ;
typedef scalar_t__ hash_t ;
struct TYPE_5__ {int user_id; scalar_t__ hash; int users; int* offset; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,char*,char*,char*,...) ;
 int FUNC_3 (int,char**,char*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (char*,int ) ;
 int VAR_10 ;
 int FUNC_7 () ;
 char* VAR_11 ;
 int FUNC_8 (scalar_t__,TYPE_1__*,int) ;
 int VAR_12 ;
 int FUNC_9 () ;
 int VAR_13 ;
 int FUNC_10 (int,TYPE_1__*,int) ;

int FUNC_11 (int VAR_14, char *VAR_15[]) {
  int VAR_16, VAR_17;
  hash_t VAR_18 = 0;
  VAR_11 = VAR_15[0];
  while ((VAR_16 = FUNC_3 (VAR_14, VAR_15, "hv")) != -1) {
    switch (VAR_16) {
    case 'v':
      VAR_13 = 1;
      break;
    case 'h':
      FUNC_9();
      return 2;
    }
  }
  if (VAR_14 <= VAR_10) {
    FUNC_9();
    return 2;
  }

  VAR_4 = FUNC_4 (VAR_1 * sizeof (userpair_t));
  VAR_8 = FUNC_4 (sizeof (struct username_index));
  FUNC_0 (VAR_4 && VAR_8);

  while (VAR_10 < VAR_14) {
    VAR_9 = FUNC_6 (VAR_15[VAR_10], VAR_3);
    if (VAR_9 < 0) {
      FUNC_2 (VAR_12, "%s: cannot open() %s: %m\n", VAR_11, VAR_15[VAR_10]);
      VAR_10++;
      continue;
    }
    VAR_17 = (VAR_1 - VAR_5) * sizeof(userpair_t);
    VAR_16 = FUNC_8 (VAR_9, VAR_4 + VAR_5, VAR_17);
    if (VAR_16 < 0) {
      FUNC_2 (VAR_12, "%s: error reading %s: %m\n", VAR_11, VAR_15[VAR_10]);
      return 1;
    }
    if (VAR_16 == VAR_17) {
      FUNC_2 (VAR_12, "%s: error reading %s: hash space exhausted (%d entries)\n", VAR_11, VAR_15[VAR_10], VAR_1);
      return 1;
    }
    VAR_5 += VAR_16 / sizeof(userpair_t);
    FUNC_1 (VAR_9);
    VAR_10++;
  }

  FUNC_5(0, VAR_5-1);

  for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
    int VAR_19 = VAR_4[VAR_16].user_id;
    hash_t VAR_20 = VAR_4[VAR_16].hash;
    FUNC_0 (VAR_19 < VAR_2-3);
    while (VAR_6.users <= VAR_19) {
      VAR_6.offset[VAR_6.users++] = VAR_0;
      VAR_18 = 0;
    }
    if (VAR_20 != VAR_18) {
      ((hash_t *) VAR_4)[VAR_0++] = VAR_20;
      VAR_18 = VAR_20;
    }
  }
  VAR_6.offset[VAR_6.users++] = VAR_0;
  if (VAR_6.users & 1) { VAR_6.offset[VAR_6.users++] = VAR_0; }

  VAR_6.magic = VAR_7;
  VAR_17 = 8 + 4 * VAR_6.users;
  FUNC_0 (FUNC_10 (1, &VAR_6, VAR_17) == VAR_17);
  VAR_17 = VAR_0 * 8;
  FUNC_0 (FUNC_10 (1, VAR_4, VAR_17) == VAR_17);

  if (VAR_13) {
    FUNC_7();
  }

  return 0;
}
