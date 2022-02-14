
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_in_data {TYPE_2__* rpc; TYPE_1__* slot; } ;
struct TYPE_4__ {int any_written; int in; } ;
struct TYPE_3__ {int curl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,long*) ;
 int FUNC_1 (int ,char*,size_t) ;

__attribute__((used)) static size_t FUNC_2(char *VAR_2, size_t VAR_3,
  size_t VAR_4, void *VAR_5)
{
 size_t VAR_6 = VAR_3 * VAR_4;
 struct rpc_in_data *VAR_7 = VAR_5;
 long VAR_8;

 if (FUNC_0(VAR_7->slot->curl, VAR_1,
         &VAR_8) != VAR_0)
  return VAR_6;
 if (VAR_8 >= 300)
  return VAR_6;
 if (VAR_6)
  VAR_7->rpc->any_written = 1;
 FUNC_1(VAR_7->rpc->in, VAR_2, VAR_6);
 return VAR_6;
}
