
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcp_fastopen_ccache_entry {int dummy; } ;
struct tcp_fastopen_ccache_bucket {int dummy; } ;
struct TYPE_8__ {int v; int c; } ;
struct TYPE_7__ {scalar_t__ bucket_limit; int buckets; int mask; void* zone; TYPE_1__* base; int secret; } ;
struct TYPE_6__ {scalar_t__ newest_psk; scalar_t__ newest; } ;
struct TYPE_5__ {int ccb_num_entries; TYPE_3__* ccb_ccache; int ccb_mtx; int ccb_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 TYPE_4__ VAR_11 ;
 TYPE_3__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 TYPE_2__ VAR_16 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_17 ;
 TYPE_1__* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,char*) ;
 void* FUNC_7 (char*,int,int *,int *,int *,int *,int ,int ) ;

void
FUNC_8(void)
{
 unsigned int VAR_18;

 VAR_10 = FUNC_7("tfo", sizeof(unsigned int),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_9, 0);
 FUNC_6(&VAR_15, "tfo_keylock");
 FUNC_2(&VAR_11.c,
     &VAR_15, 0);
 VAR_11.v = VAR_17;
 VAR_16.newest = VAR_6 - 1;
 VAR_16.newest_psk = VAR_7 - 1;


 if (VAR_12.bucket_limit == 0)
  VAR_12.bucket_limit =
      VAR_5;


 if ((VAR_13 == 0) ||
     !FUNC_5(VAR_13))
  VAR_12.buckets =
   VAR_4;
 else
  VAR_12.buckets = VAR_13;

 VAR_12.mask = VAR_12.buckets - 1;
 VAR_12.secret = FUNC_1();

 VAR_12.base = FUNC_3(VAR_12.buckets *
     sizeof(struct tcp_fastopen_ccache_bucket), VAR_1,
     VAR_2 | VAR_3);

 for (VAR_18 = 0; VAR_18 < VAR_12.buckets; VAR_18++) {
  FUNC_0(&VAR_12.base[VAR_18].ccb_entries);
  FUNC_4(&VAR_12.base[VAR_18].ccb_mtx, "tfo_ccache_bucket",
    ((void*)0), VAR_0);
  if (VAR_14) {

   VAR_12.base[VAR_18].ccb_num_entries = 0;
  } else {

   VAR_12.base[VAR_18].ccb_num_entries = -1;
  }
  VAR_12.base[VAR_18].ccb_ccache = &VAR_12;
 }
 VAR_12.zone = FUNC_7("tfo_ccache_entries",
     sizeof(struct tcp_fastopen_ccache_entry), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_8, 0);
}
