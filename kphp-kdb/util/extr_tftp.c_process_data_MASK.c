
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int block; scalar_t__ len; int d; } ;
struct TYPE_8__ {TYPE_1__ data; } ;
struct TYPE_9__ {scalar_t__ source_port; TYPE_2__ u; int ipv6; int dest_port; } ;
typedef TYPE_3__ tftp_packet_t ;
struct TYPE_10__ {scalar_t__* tid; int last_block; scalar_t__ last_block_len; scalar_t__ block_size; int source_ipv6; } ;
typedef TYPE_4__ tftp_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,long long) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int,char*,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6 (tftp_packet_t *VAR_7) {







  VAR_2++;
  if (VAR_6 == VAR_0) {
    return FUNC_4 (VAR_4, "Data packet was sent to server");
  }
  tftp_connection_t *VAR_8 = FUNC_0 (VAR_7->dest_port, 0);
  if (VAR_8 == ((void*)0)) {
    return FUNC_4 (VAR_5, ((void*)0));
  }
  if (VAR_7->u.data.block == 1 && !VAR_8->tid[1-VAR_6]) {
    VAR_8->tid[1-VAR_6] = VAR_7->source_port;
  }
  if (VAR_8->tid[1-VAR_6] != VAR_7->source_port) {
    return FUNC_4 (VAR_5, ((void*)0));
  }
  if (FUNC_1 (VAR_8->source_ipv6, VAR_7->ipv6, 16)) {
    return FUNC_4 (VAR_4, "Connection IP isn't matched.");
  }
  if (VAR_7->u.data.block == VAR_8->last_block) {
    FUNC_5 (3, "Receive duplicate data packet for block number %d. Resend acknowledgement packet.\n", VAR_7->u.data.block);
    return FUNC_3 (VAR_7->u.data.block);
  }
  if (VAR_7->u.data.block != (unsigned short) (VAR_8->last_block + 1)) {

    return -1;
  }
  if (VAR_7->u.data.len > 0) {
    if (FUNC_2 (VAR_1, VAR_7->u.data.d, VAR_7->u.data.len, (long long) VAR_8->block_size * VAR_8->last_block) != VAR_7->u.data.len) {
      return FUNC_4 (VAR_3, ((void*)0));
    }
  }
  VAR_8->last_block++;
  VAR_8->last_block_len = VAR_7->u.data.len;
  return FUNC_3 (VAR_7->u.data.block);
}
