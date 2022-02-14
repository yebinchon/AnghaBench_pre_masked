
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* l; int * next; } ;
typedef TYPE_2__ temp_letter ;
struct TYPE_6__ {int data; } ;
struct TYPE_4__ {char const* data; int data_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (long long) ;
 int VAR_2 ;
 int * VAR_3 ;
 char** VAR_4 ;
 int* VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int,int) ;
 TYPE_3__* VAR_7 ;
 void** FUNC_5 (int *,long long) ;
 int FUNC_6 (int ,char const*,int) ;
 int VAR_8 ;
 size_t FUNC_7 (char*,char*,int,...) ;
 scalar_t__ FUNC_8 (char const*) ;

int FUNC_9 (long long VAR_9, int VAR_10, int VAR_11, const char *VAR_12) {
  if (FUNC_8 (VAR_12) >= VAR_1) {
    return 0;
  }

  void **VAR_13 = FUNC_5 (&VAR_6, VAR_9);
  if (VAR_13 != ((void*)0)) {
    temp_letter *VAR_14 = (temp_letter *)*VAR_13;
    FUNC_0 (VAR_14 != ((void*)0) && VAR_14->l != ((void*)0) && VAR_14->next != ((void*)0));

    int VAR_15 = FUNC_8 (VAR_14->l->data);
    FUNC_0 (VAR_15 < VAR_14->l->data_len);
    FUNC_6 (VAR_7->data, VAR_14->l->data, VAR_15 + 1);

    FUNC_0 (FUNC_3 (VAR_7->data) >= 4);

    int VAR_16 = FUNC_2 (VAR_3[0]);
    FUNC_0 (VAR_16 != -1 && VAR_5[VAR_16] == 1);
    VAR_4[VAR_16][0] = '0' + VAR_10;

    int VAR_17 = FUNC_2 (VAR_3[VAR_0 - 4]);
    if (VAR_17 != -1) {
      FUNC_0 (VAR_17 == VAR_2 - 4 && VAR_5[VAR_17] == 10);
      VAR_4[VAR_17][FUNC_7 (VAR_4[VAR_17], "%010d", VAR_8 + VAR_11 - 1)] = '"';
    } else {
      VAR_11 = 0;
    }

    int VAR_18 = FUNC_2 (VAR_3[VAR_0 - 3]);
    FUNC_0 (VAR_18 == VAR_2 - 3 && VAR_5[VAR_18] == 10);
    VAR_4[VAR_18][FUNC_7 (VAR_4[VAR_18], "%010d", VAR_8)] = '"';

    int VAR_19 = FUNC_2 (VAR_3[VAR_0 - 1]);
    FUNC_0 (VAR_19 == VAR_2 - 1);
    FUNC_7 (VAR_4[VAR_19] - 12, "%010d:\"%s\";}", (int)FUNC_8 (VAR_12), VAR_12);

    FUNC_1 (VAR_9);
    FUNC_4 (VAR_10, VAR_11);
    return 1;
  }

  return 0;
}
