
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ total_bytes; scalar_t__ unprocessed_bytes; } ;
struct connection {scalar_t__ generation; int fd; int status; int flags; int write_low_watermark; TYPE_2__ Out; TYPE_1__* first_query; } ;
struct TYPE_3__ {scalar_t__ req_generation; struct connection* requester; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct connection*) ;
 int VAR_3 ;
 int FUNC_1 (struct connection*,struct connection*) ;
 int FUNC_2 (int ,char*,int,int,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_3 (struct connection *VAR_6) {
  struct connection *VAR_7 = VAR_6->first_query->requester;
  FUNC_0 (VAR_7);
  if (VAR_7->generation != VAR_6->first_query->req_generation || VAR_7->Out.total_bytes + VAR_7->Out.unprocessed_bytes <= VAR_1) {
    return 0;
  }

  if (VAR_5 > 0) {
    FUNC_2 (VAR_4, "forwarding response from outbound connection %d to connection %d stopped: already %ld+%ld bytes in output buffers.\n", VAR_6->fd, VAR_7->fd, VAR_7->Out.total_bytes, VAR_7->Out.unprocessed_bytes);
  }
  VAR_7->write_low_watermark = VAR_2;
  VAR_6->flags |= VAR_0;
  FUNC_1 (VAR_7, VAR_6);
  VAR_6->status = VAR_3;
  return 1;
}
