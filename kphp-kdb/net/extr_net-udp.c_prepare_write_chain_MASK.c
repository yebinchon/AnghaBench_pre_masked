
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int total_bytes; } ;
struct udp_message {int our_ip_idx; struct udp_message* next; TYPE_3__ raw; int ipv6; int port; } ;
struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in6 {int sin6_addr; void* sin6_port; int sin6_family; TYPE_1__ sin_addr; void* sin_port; int sin_family; } ;
struct sockaddr_in {int sin6_addr; void* sin6_port; int sin6_family; TYPE_1__ sin_addr; void* sin_port; int sin_family; } ;
struct TYPE_6__ {int msg_namelen; int msg_iovlen; scalar_t__ msg_controllen; int msg_control; int msg_flags; scalar_t__ msg_iov; struct sockaddr_in6* msg_name; } ;
struct our_mmsghdr {TYPE_2__ msg_hdr; int msg_len; } ;
struct TYPE_8__ {scalar_t__ msg_controllen; int msg_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 TYPE_4__* VAR_6 ;
 int FUNC_4 (TYPE_3__*,scalar_t__,scalar_t__,int ) ;
 struct sockaddr_in6* VAR_7 ;
 struct sockaddr_in6* VAR_8 ;
 scalar_t__ VAR_9 ;
 struct our_mmsghdr* VAR_10 ;

int FUNC_5 (struct udp_message *VAR_11, int VAR_12) {
  int VAR_13 = 0, VAR_14 = 0;
  struct our_mmsghdr *VAR_15 = VAR_10;

  while (VAR_11 && VAR_14 < VAR_12) {
    int VAR_16 = FUNC_4 (&VAR_11->raw, VAR_9 + VAR_13, VAR_3 - VAR_13, VAR_4);
    if (VAR_16 < 0) {
      break;
    }
    if (FUNC_2 (VAR_11->ipv6)) {
      struct sockaddr_in *VAR_17 = VAR_15->msg_hdr.msg_name = VAR_7 + VAR_14;
      VAR_17->sin_family = VAR_0;
      VAR_17->sin_port = FUNC_1 (VAR_11->port);
      VAR_17->sin_addr.s_addr = FUNC_0 (VAR_11->ipv6);
      VAR_15->msg_hdr.msg_namelen = sizeof (struct sockaddr_in);
    } else {
      struct sockaddr_in6 *VAR_18 = VAR_15->msg_hdr.msg_name = VAR_8 + VAR_14;
      VAR_18->sin6_family = VAR_1;
      VAR_18->sin6_port = FUNC_1 (VAR_11->port);
      FUNC_3 (&VAR_18->sin6_addr, VAR_11->ipv6, 16);
      VAR_15->msg_hdr.msg_namelen = sizeof (struct sockaddr_in6);
    }
    VAR_15->msg_hdr.msg_iov = VAR_9 + VAR_13;
    VAR_15->msg_hdr.msg_iovlen = VAR_16;
    VAR_15->msg_hdr.msg_flags = VAR_5;
    VAR_15->msg_len = VAR_11->raw.total_bytes;

    int VAR_19 = VAR_11->our_ip_idx;
    if (VAR_19 > 0 && VAR_19 < VAR_2 && VAR_6[VAR_19].msg_controllen) {
      VAR_15->msg_hdr.msg_control = VAR_6[VAR_19].msg_control;
      VAR_15->msg_hdr.msg_controllen = VAR_6[VAR_19].msg_controllen;
    } else {
      VAR_15->msg_hdr.msg_control = 0;
      VAR_15->msg_hdr.msg_controllen = 0;
    }

    VAR_13 += VAR_16;
    ++VAR_14;
    ++VAR_15;
    VAR_11 = VAR_11->next;
  }
  return VAR_14;
}
