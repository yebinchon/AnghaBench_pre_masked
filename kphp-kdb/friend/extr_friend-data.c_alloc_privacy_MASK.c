
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int y; int* List; } ;
typedef TYPE_1__ privacy_t ;


 int* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (int*,int*,size_t) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_5 (int) ;

privacy_t *FUNC_6 (void) {
  int VAR_6 = VAR_1, *VAR_7, VAR_8;
  FUNC_0 (VAR_0[VAR_1] == -1);
  if (VAR_6 >= 255) {
    VAR_6++;
  }

  VAR_8 = sizeof(privacy_t) + VAR_6*4 + 4;
  VAR_4 += VAR_1;
  VAR_2++;

  privacy_t *VAR_9 = FUNC_5 (VAR_8);
  FUNC_4 (VAR_9, 0, sizeof(privacy_t));
  VAR_9->y = (FUNC_2() << 8) + (VAR_6 >= 255 ? 255 : VAR_6);
  VAR_7 = VAR_9->List;
  if (VAR_6 >= 255) {
    *VAR_7++ = VAR_1;
  }

  FUNC_3 (VAR_7, VAR_0, (VAR_1+1)*4);

  if (VAR_5 > 2) {
    FUNC_1 (VAR_3, "in-core privacy: ");
    for (VAR_8 = 0; VAR_8 <= VAR_1; VAR_8++) {
      FUNC_1 (VAR_3, " %08x", VAR_7[VAR_8]);
    }
    FUNC_1 (VAR_3, "\n");
  }

  return VAR_9;
}
