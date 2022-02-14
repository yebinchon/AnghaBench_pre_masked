
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ hash_t ;
struct TYPE_2__ {scalar_t__ word; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1 (void) {
  int VAR_5, VAR_6, VAR_7, VAR_8;
  hash_t VAR_9;

  if (!VAR_1) {
    return 0;
  }

  VAR_9 = VAR_0[0].word;
  VAR_5 = 1;
  VAR_6 = 0;
  VAR_7 = 0;
  for (VAR_8 = 1; VAR_8 < VAR_1; VAR_8++) {
    if (VAR_9 != VAR_0[VAR_8].word) {
      VAR_9 = VAR_0[VAR_8].word;
      if (!VAR_6) { VAR_7++; }
      VAR_6 = 0;
      VAR_5++;
    } else {
      VAR_6++;
    }
  }

  if (!VAR_6) { VAR_7++; }

  VAR_2 = VAR_7;
  if (VAR_4 > 0) {
    FUNC_0 (VAR_3, "%d distinct words, %d hapax legomena\n", VAR_5, VAR_7);
  }

  return VAR_5 - VAR_2;
}
