
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ n_len; int n_bytes; } ;
typedef TYPE_1__ netobj ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (char*,...) ;

int
FUNC_2(const netobj *VAR_0, const netobj *VAR_1)
{
 int VAR_2;

 VAR_2 = 0;

 FUNC_1("Entering netobj identity check\n");

 if (VAR_0->n_len == VAR_1->n_len) {
  FUNC_1("Preliminary length check passed\n");
  VAR_2 = !FUNC_0(VAR_0->n_bytes, VAR_1->n_bytes, VAR_0->n_len);
  FUNC_1("netobj %smatch\n", VAR_2 ? "" : "mis");
 }

 return (VAR_2);
}
