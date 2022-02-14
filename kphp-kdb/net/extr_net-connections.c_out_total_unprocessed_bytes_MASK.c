
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int unprocessed_bytes; } ;
struct TYPE_3__ {int total_bytes; } ;
struct connection {int flags; TYPE_2__ Out; TYPE_1__ out; scalar_t__ crypto; } ;


 int VAR_0 ;

int FUNC_0 (struct connection *VAR_1) {
  if (VAR_1->flags & VAR_0) {
    return (VAR_1->crypto ? VAR_1->out.total_bytes : 0);
  } else {
    return VAR_1->Out.unprocessed_bytes;
  }
}
