
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void rpc_cluster_bucket ;
struct TYPE_3__ {int * fun_pos; } ;
struct TYPE_4__ {TYPE_1__ methods; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,void**) ;
 size_t VAR_1 ;
 int FUNC_1 (int,char*,char const*,int) ;

struct rpc_cluster_bucket *FUNC_2 (const char *VAR_2, int VAR_3) {
  FUNC_1 (3, "calculate_key_target: key = %s, key_len = %d\n", VAR_2, VAR_3);
  void *VAR_4[3];
  VAR_4[0] = (void *)VAR_2;
  VAR_4[1] = (void *)(long)VAR_3;
  VAR_4[2] = 0;
  int VAR_5 = FUNC_0(VAR_0->methods.fun_pos[VAR_1], VAR_4);
  if (VAR_5 < 0) { return 0; }
  return VAR_4[2];
}
