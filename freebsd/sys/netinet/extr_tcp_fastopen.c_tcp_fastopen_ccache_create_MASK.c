
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_5__ {int v6; int v4; } ;
struct TYPE_4__ {int v6; int v4; } ;
struct tcp_fastopen_ccache_entry {scalar_t__ af; int cookie_len; scalar_t__ disable_time; scalar_t__ server_mss; int cookie; int server_port; TYPE_2__ cce_server_ip; TYPE_1__ cce_client_ip; } ;
struct tcp_fastopen_ccache_bucket {scalar_t__ ccb_num_entries; int ccb_entries; } ;
struct in_conninfo {int inc_flags; int inc_fport; int inc6_faddr; int inc6_laddr; int inc_faddr; int inc_laddr; } ;
struct TYPE_6__ {scalar_t__ bucket_limit; int zone; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tcp_fastopen_ccache_bucket*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct tcp_fastopen_ccache_entry*,int ) ;
 struct tcp_fastopen_ccache_entry* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,struct tcp_fastopen_ccache_entry*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int*,int) ;
 struct tcp_fastopen_ccache_entry* FUNC_6 (int ,int ) ;

__attribute__((used)) static struct tcp_fastopen_ccache_entry *
FUNC_7(struct tcp_fastopen_ccache_bucket *VAR_9,
    struct in_conninfo *VAR_10, uint16_t VAR_11, uint8_t VAR_12, uint8_t *VAR_13)
{
 struct tcp_fastopen_ccache_entry *VAR_14;







 FUNC_0(VAR_9);

 VAR_14 = ((void*)0);
 if (VAR_9->ccb_num_entries < VAR_6.bucket_limit)
  VAR_14 = FUNC_6(VAR_6.zone, VAR_3);

 if (VAR_14 == ((void*)0)) {




  VAR_14 = FUNC_2(&VAR_9->ccb_entries, VAR_7);
  if (VAR_14 == ((void*)0)) {

   return (((void*)0));
  }

  FUNC_3(&VAR_9->ccb_entries, VAR_14, VAR_8);
 } else
  VAR_9->ccb_num_entries++;

 FUNC_1(&VAR_9->ccb_entries, VAR_14, VAR_8);
 VAR_14->af = (VAR_10->inc_flags & VAR_2) ? VAR_1 : VAR_0;
 if (VAR_14->af == VAR_0) {
  VAR_14->cce_client_ip.v4 = VAR_10->inc_laddr;
  VAR_14->cce_server_ip.v4 = VAR_10->inc_faddr;
 } else {
  VAR_14->cce_client_ip.v6 = VAR_10->inc6_laddr;
  VAR_14->cce_server_ip.v6 = VAR_10->inc6_faddr;
 }
 VAR_14->server_port = VAR_10->inc_fport;
 if ((VAR_12 >= VAR_5) &&
     (VAR_12 <= VAR_4) &&
     ((VAR_12 & 0x1) == 0)) {
  VAR_14->server_mss = VAR_11;
  VAR_14->cookie_len = VAR_12;
  FUNC_5(VAR_14->cookie, VAR_13, VAR_12);
  VAR_14->disable_time = 0;
 } else {

  VAR_14->server_mss = 0;
  VAR_14->cookie_len = 0;
  VAR_14->disable_time = FUNC_4();
 }

 return (VAR_14);
}
