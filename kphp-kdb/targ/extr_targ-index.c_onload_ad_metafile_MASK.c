
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int dummy; } ;
struct aio_connection {scalar_t__ basic_type; scalar_t__ extra; } ;
struct advert {int ad_id; TYPE_1__* mf; int flags; } ;
struct TYPE_3__ {int len; long long pos; int data; struct aio_connection* aio; struct advert* ad; } ;
typedef TYPE_1__ core_mf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long long VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,char*,int,long long,...) ;
 int FUNC_2 (TYPE_1__*) ;
 long long VAR_11 ;
 int FUNC_3 () ;
 int FUNC_4 (long long) ;
 long long VAR_12 ;
 int FUNC_5 (int,int,long long) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

int FUNC_6 (struct connection *VAR_15, int VAR_16) {
  if (VAR_14 > 0) {
    FUNC_1 (VAR_13, "onload_ad_metafile(%d,%lld)\n", VAR_15, VAR_16);
  }
  struct aio_connection *VAR_17 = (struct aio_connection *)VAR_15;
  core_mf_t *VAR_18 = (core_mf_t *) VAR_17->extra;
  struct advert *VAR_19 = VAR_18->ad;

  FUNC_0 (VAR_17->basic_type == VAR_10);
  FUNC_0 (VAR_19->mf == VAR_18);
  FUNC_0 (VAR_18->aio == VAR_17);

  if (VAR_16 < VAR_18->len) {
    VAR_4++;
    if (VAR_14 >= 0) {
      FUNC_1 (VAR_13, "ERROR reading ad %d data from index at position %lld [pending aio queries: %d]: read %d bytes out of %d: %m\n", VAR_19->ad_id, VAR_18->pos, VAR_3, VAR_16, VAR_18->len);
    }

    VAR_5 -= VAR_18->len;
    VAR_6--;
    VAR_18->aio = 0;

    FUNC_2 (VAR_18);
    VAR_19->mf = 0;

    return 0;
  }

  VAR_18->aio = 0;

  if (VAR_14 > 0) {
    FUNC_1 (VAR_13, "*** Read ad %d data from index at position %lld: read %d bytes at address %d, magic %08x\n", VAR_19->ad_id, VAR_18->pos, VAR_16, VAR_18->data, * (int *) VAR_18->data);
  }

  VAR_1 = VAR_18->data;
  VAR_2 = VAR_1 + VAR_18->len;
  long long VAR_20 = VAR_11;
  VAR_11 = VAR_18->pos + VAR_18->len;

  FUNC_4 (VAR_18->pos);
  FUNC_5 (VAR_19->ad_id, 1, VAR_18->len);
  FUNC_3 ();

  FUNC_0 (VAR_12 == VAR_18->len);

  VAR_11 = VAR_20;
  VAR_2 = VAR_1 = 0;

  VAR_19->flags &= ~VAR_0;

  VAR_9--;
  VAR_7++;
  VAR_8 += VAR_18->len;

  VAR_5 -= VAR_18->len;
  VAR_6--;
  VAR_18->aio = 0;

  FUNC_2 (VAR_18);
  VAR_19->mf = 0;

  return 1;
}
