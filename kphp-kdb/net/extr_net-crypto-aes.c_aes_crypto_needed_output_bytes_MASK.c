
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int unprocessed_bytes; } ;
struct connection {TYPE_1__ Out; int crypto; } ;


 int FUNC_0 (int ) ;

int FUNC_1 (struct connection *VAR_0) {
  FUNC_0 (VAR_0->crypto);
  return -VAR_0->Out.unprocessed_bytes & 15;
}
