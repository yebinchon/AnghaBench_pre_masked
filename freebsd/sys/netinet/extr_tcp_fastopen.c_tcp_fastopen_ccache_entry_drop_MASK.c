
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_fastopen_ccache_entry {int dummy; } ;
struct tcp_fastopen_ccache_bucket {int ccb_num_entries; int ccb_entries; } ;
struct TYPE_2__ {int zone; } ;


 int FUNC_0 (struct tcp_fastopen_ccache_bucket*) ;
 int FUNC_1 (int *,struct tcp_fastopen_ccache_entry*,int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,struct tcp_fastopen_ccache_entry*) ;

__attribute__((used)) static void
FUNC_3(struct tcp_fastopen_ccache_entry *VAR_2,
    struct tcp_fastopen_ccache_bucket *VAR_3)
{

 FUNC_0(VAR_3);

 FUNC_1(&VAR_3->ccb_entries, VAR_2, VAR_1);
 VAR_3->ccb_num_entries--;
 FUNC_2(VAR_0.zone, VAR_2);
}
