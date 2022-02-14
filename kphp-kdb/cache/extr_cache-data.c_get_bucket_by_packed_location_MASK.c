
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int server_id; scalar_t__ node_id; } ;
union cache_packed_local_copy_location {int i; TYPE_1__ p; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0 (int VAR_1) {
  union cache_packed_local_copy_location VAR_2;
  VAR_2.i = VAR_1;
  return (VAR_2.p.server_id + (((int) VAR_2.p.node_id) << 8)) % VAR_0;
}
