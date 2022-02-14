
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netobj {scalar_t__ n_len; int n_bytes; } ;
typedef int hbuff ;
typedef int cbuff ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,scalar_t__,char*,int,char*,int) ;

void
FUNC_2(const struct netobj *VAR_2)
{
 char VAR_3[VAR_0*2];
 char VAR_4[VAR_0];

 if (VAR_1 < 2) {
  return;
 }

 if (VAR_2 == ((void*)0)) {
  FUNC_0("Null netobj pointer\n");
 }
 else if (VAR_2->n_len == 0) {
  FUNC_0("Size zero netobj\n");
 } else {
  FUNC_1(VAR_2->n_bytes, VAR_2->n_len,
      VAR_3, sizeof(VAR_3), VAR_4, sizeof(VAR_4));
  FUNC_0("netobj: len: %d  data: %s :::  %s\n",
      VAR_2->n_len, VAR_3, VAR_4);
 }
}
