
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfe_ipv6_tcp_connection_match {scalar_t__ max_win; scalar_t__ max_end; scalar_t__ end; } ;
struct TYPE_2__ {struct sfe_ipv6_tcp_connection_match tcp; } ;
struct sfe_ipv6_connection_match {int flags; TYPE_1__ protocol_state; } ;
struct sfe_ipv6_connection {struct sfe_ipv6_connection_match* reply_match; struct sfe_ipv6_connection_match* original_match; } ;
struct sfe_connection_create {scalar_t__ src_td_max_window; scalar_t__ dest_td_max_window; int flags; scalar_t__ dest_td_max_end; scalar_t__ dest_td_end; scalar_t__ src_td_max_end; scalar_t__ src_td_end; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct sfe_ipv6_connection *VAR_2,
     struct sfe_connection_create *VAR_3)
{
 struct sfe_ipv6_connection_match *VAR_4;
 struct sfe_ipv6_connection_match *VAR_5;
 struct sfe_ipv6_tcp_connection_match *VAR_6;
 struct sfe_ipv6_tcp_connection_match *VAR_7;

 VAR_4 = VAR_2->original_match;
 VAR_5 = VAR_2->reply_match;
 VAR_6 = &VAR_4->protocol_state.tcp;
 VAR_7 = &VAR_5->protocol_state.tcp;


 if (VAR_6->max_win < VAR_3->src_td_max_window) {
  VAR_6->max_win = VAR_3->src_td_max_window;
 }
 if ((s32)(VAR_6->end - VAR_3->src_td_end) < 0) {
  VAR_6->end = VAR_3->src_td_end;
 }
 if ((s32)(VAR_6->max_end - VAR_3->src_td_max_end) < 0) {
  VAR_6->max_end = VAR_3->src_td_max_end;
 }


 if (VAR_7->max_win < VAR_3->dest_td_max_window) {
  VAR_7->max_win = VAR_3->dest_td_max_window;
 }
 if ((s32)(VAR_7->end - VAR_3->dest_td_end) < 0) {
  VAR_7->end = VAR_3->dest_td_end;
 }
 if ((s32)(VAR_7->max_end - VAR_3->dest_td_max_end) < 0) {
  VAR_7->max_end = VAR_3->dest_td_max_end;
 }


 VAR_4->flags &= ~VAR_1;
 VAR_5->flags &= ~VAR_1;
 if (VAR_3->flags & VAR_0) {
  VAR_4->flags |= VAR_1;
  VAR_5->flags |= VAR_1;
 }
}
