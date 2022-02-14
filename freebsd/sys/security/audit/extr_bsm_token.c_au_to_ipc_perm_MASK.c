
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int u_char ;
typedef int token_t ;
struct ipc_perm {int key; int seq; int mode; int cgid; int cuid; int gid; int uid; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,int) ;

token_t *
FUNC_4(struct ipc_perm *VAR_1)
{
 token_t *VAR_2;
 u_char *VAR_3 = ((void*)0);
 u_int16_t VAR_4 = 0;

 FUNC_3(VAR_2, VAR_3, sizeof(u_char) + 12 * sizeof(u_int16_t) +
     sizeof(u_int32_t));

 FUNC_0(VAR_3, VAR_0);
 if (sizeof(VAR_1->uid) != sizeof(u_int32_t)) {
  FUNC_1(VAR_3, VAR_4);
  FUNC_1(VAR_3, VAR_1->uid);
  FUNC_1(VAR_3, VAR_4);
  FUNC_1(VAR_3, VAR_1->gid);
  FUNC_1(VAR_3, VAR_4);
  FUNC_1(VAR_3, VAR_1->cuid);
  FUNC_1(VAR_3, VAR_4);
  FUNC_1(VAR_3, VAR_1->cgid);
 } else {
  FUNC_2(VAR_3, VAR_1->uid);
  FUNC_2(VAR_3, VAR_1->gid);
  FUNC_2(VAR_3, VAR_1->cuid);
  FUNC_2(VAR_3, VAR_1->cgid);
 }

 FUNC_1(VAR_3, VAR_4);
 FUNC_1(VAR_3, VAR_1->mode);

 FUNC_1(VAR_3, VAR_4);

 FUNC_1(VAR_3, VAR_1->seq);

 FUNC_2(VAR_3, VAR_1->key);

 return (VAR_2);
}
