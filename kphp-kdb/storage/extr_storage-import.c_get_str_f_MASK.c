
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int key; } ;
typedef TYPE_1__ hash_entry_t ;


 unsigned int VAR_0 ;
 TYPE_1__** VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static hash_entry_t *FUNC_4 (const char *VAR_4, int VAR_5) {
  unsigned int VAR_6 = 0, VAR_7 = 0;
  const char *VAR_8 = VAR_4;
  while (*VAR_8) {
    unsigned char VAR_9 = *VAR_8++;
    VAR_6 *= 131;
    VAR_6 += VAR_9;
    VAR_7 *= 239;
    VAR_7 += VAR_9;
  }
  VAR_6 %= VAR_0;
  VAR_7 = 1 + (VAR_7 % (VAR_0 - 1));
  while (VAR_1[VAR_6]) {
    if (!FUNC_1 (VAR_1[VAR_6]->key, VAR_4)) {
      return VAR_1[VAR_6];
    }
    if ( (VAR_6 += VAR_7) >= VAR_0) {
      VAR_6 -= VAR_0;
    }
  }
  if (VAR_5) {
    VAR_3++;
    FUNC_0 (VAR_3 <= VAR_2);
    VAR_1[VAR_6] = FUNC_2 (sizeof (hash_entry_t));
    VAR_1[VAR_6]->key = FUNC_3 (VAR_4);
    return VAR_1[VAR_6];
  }
  return ((void*)0);
}
