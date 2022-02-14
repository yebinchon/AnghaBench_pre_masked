
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int index_header ;
struct TYPE_5__ {scalar_t__ magic; TYPE_1__* data; int created_at; } ;
struct TYPE_4__ {scalar_t__ drive_old_mx; scalar_t__ drive_r; scalar_t__ drive_l; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 int * VAR_3 ;
 int FUNC_3 (int ,char*,...) ;
 TYPE_2__ VAR_4 ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,TYPE_2__*,int) ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int VAR_6 ;

int FUNC_7 (char *VAR_7) {
  if (VAR_7 == ((void*)0) || FUNC_2 (0, VAR_7, -1) < 0) {
    VAR_4.magic = VAR_0;
    VAR_4.created_at = FUNC_6 (((void*)0));

    int VAR_8;
    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
      VAR_4.data[VAR_8].drive_l = VAR_4.data[VAR_8].drive_r = VAR_4.data[VAR_8].drive_old_mx = 0;
    }
    return 0;
  }

  FUNC_0 (FUNC_4 (VAR_3[0], 0, VAR_2) == 0);

  int VAR_9 = sizeof (index_header);
  int VAR_10 = FUNC_5 (VAR_3[0], &VAR_4, VAR_9);
  if (VAR_10 != VAR_9) {
    FUNC_3 (VAR_5, "error reading header from index file: read %d bytes instead of %d: %m\n", VAR_10, VAR_9);
  }
  FUNC_0 (VAR_10 == VAR_9);

  if (VAR_4.magic != VAR_0) {
    FUNC_3 (VAR_5, "bad letters index file header\n");
    FUNC_0 (0);
  }

  if (VAR_6 > 1) {
    FUNC_3 (VAR_5, "header loaded\n");
  }

  FUNC_1 (0);
  return 1;
}
