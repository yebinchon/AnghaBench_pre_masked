
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
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1 (void) {
  int VAR_4, VAR_5, VAR_6, VAR_7;
  hash_t VAR_8;

  if (!VAR_1) {
    return 0;
  }

  VAR_8 = VAR_0[0].word;
  VAR_4 = 1;
  VAR_5 = 0;
  VAR_6 = 0;
  for (VAR_7 = 1; VAR_7 < VAR_1; VAR_7++) {
    if (VAR_8 != VAR_0[VAR_7].word) {
      VAR_8 = VAR_0[VAR_7].word;
      if (!VAR_5) { VAR_6++; }
      VAR_5 = 0;
      VAR_4++;
    } else {
      VAR_5++;
    }
  }

  if (!VAR_5) { VAR_6++; }


  if (VAR_3 > 0) {
    FUNC_0 (VAR_2, "%d distinct words, %d hapax legomena\n", VAR_4, VAR_6);
  }
  return VAR_4;

}
