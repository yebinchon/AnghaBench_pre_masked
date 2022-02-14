
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int total_bytes; } ;
struct TYPE_5__ {int total_bytes; } ;
struct TYPE_4__ {int total_bytes; } ;
struct connection {int flags; TYPE_3__ Out; TYPE_2__ out; TYPE_1__ out_p; scalar_t__ crypto; } ;


 int VAR_0 ;

int FUNC_0 (struct connection *VAR_1) {
  if (VAR_1->flags & VAR_0) {
    return (VAR_1->crypto ? VAR_1->out_p.total_bytes : VAR_1->out.total_bytes);
  } else {
    return VAR_1->Out.total_bytes;
  }
}
