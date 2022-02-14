
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct metafile {int num; struct aio_connection* aio; scalar_t__ data; } ;
struct connection {int dummy; } ;
struct aio_connection {scalar_t__ basic_type; scalar_t__ extra; } ;
struct TYPE_5__ {scalar_t__ metafile_index; } ;
typedef TYPE_1__ list_t ;
struct TYPE_7__ {int tot_lists; } ;
struct TYPE_6__ {scalar_t__ data; } ;


 int FUNC_0 (int) ;
 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,long long) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*,...) ;
 long long FUNC_7 (int) ;
 long long FUNC_8 (int) ;
 int FUNC_9 (int ,scalar_t__,long long,long long) ;
 TYPE_2__** VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 long long VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (scalar_t__,long long) ;

int FUNC_12 (struct connection *VAR_18, int VAR_19) {
  FUNC_10 (4, "onload_metafile(%p,%d) total_aio_time = %lf\n", VAR_18, VAR_19, VAR_16);

  struct aio_connection *VAR_20 = (struct aio_connection *)VAR_18;
  struct metafile *VAR_21 = (struct metafile *) VAR_20->extra;

  FUNC_3 (VAR_20->basic_type == VAR_4);
  FUNC_3 (VAR_21 != ((void*)0));

  if (VAR_21->aio != VAR_20) {
    FUNC_6 (VAR_12, "assertion (meta->aio == a) will fail\n");
    FUNC_6 (VAR_12, "%p != %p\n", VAR_21->aio, VAR_20);
  }

  FUNC_3 (VAR_21->aio == VAR_20);

  long long VAR_22, VAR_23;
  int VAR_24 = VAR_21->num;
  if (VAR_24 <= VAR_0.tot_lists) {
    VAR_23 = FUNC_7 (VAR_24);
    FUNC_3 (VAR_23 >= 0);
    VAR_22 = FUNC_7 (VAR_24 + 1) - VAR_23;
    FUNC_3 (VAR_22 >= 4);
  } else {
    FUNC_3 (VAR_24 <= VAR_0.tot_lists + VAR_15);
    VAR_23 = FUNC_8 (VAR_24 - VAR_0.tot_lists - 1);
    FUNC_3 (VAR_23 >= 0);
    VAR_22 = FUNC_8 (VAR_24 - VAR_0.tot_lists) - VAR_23;
    FUNC_3 (VAR_22 >= 4);
  }
  FUNC_3 (!(VAR_22 & 3));
  if (VAR_3 && VAR_19 == VAR_22) {
    if (VAR_24 <= VAR_0.tot_lists) {
      FUNC_3 (FUNC_4 (VAR_6[VAR_24]->data, VAR_22 - 4) == *(((unsigned *)(VAR_6[VAR_24]->data)) + (VAR_22 >> 2) - 1));
    } else {
      if (FUNC_4 (VAR_6[VAR_24]->data, VAR_22) != VAR_10[VAR_24 - VAR_0.tot_lists - 1]) {
        FUNC_10 (0, "x = %d, y = %d, total = %d\n", VAR_24, VAR_24 - VAR_0.tot_lists - 1, VAR_15);
      }
      FUNC_3 (FUNC_4 (VAR_6[VAR_24]->data, VAR_22) == VAR_10[VAR_24 - VAR_0.tot_lists - 1]);
    }
  }

  if (VAR_19 != VAR_22) {
    if (VAR_17 > 0 || VAR_2) {
      FUNC_6 (VAR_12, "ERROR reading metafile #%d: read %d bytes out of %lld: %m\n", VAR_21->num, VAR_19, VAR_22);
    }
  }
  if (VAR_17 > 2) {
    FUNC_6 (VAR_12, "*** Read metafile: read %d bytes\n", VAR_19);
  }

  if (VAR_19 != VAR_22) {
    VAR_21->aio = ((void*)0);
    FUNC_11 (VAR_21->data, VAR_22);
    VAR_14 -= VAR_22;
    VAR_21->data = 0;
    VAR_7 ++;
  } else {
    FUNC_9 (VAR_1, VAR_21->data, VAR_22, VAR_23);
    VAR_21->aio = ((void*)0);
    VAR_9 ++;
    FUNC_2 (VAR_21->num);
    VAR_8 ++;
    VAR_13 += VAR_19;
    if (VAR_24 <= VAR_0.tot_lists) {

      list_t *VAR_25 = FUNC_1 (FUNC_0 (VAR_24), -1);
      if (!VAR_25 || VAR_25->metafile_index >= 0) {
        FUNC_3 (!VAR_25 || VAR_25->metafile_index == VAR_21->num);
        FUNC_5 (VAR_21->num);
      }
      VAR_5 ++;
    } else {
      VAR_11 ++;
    }
  }
  FUNC_10 (4, "onload_metafile finished\n");
  return 1;
}
