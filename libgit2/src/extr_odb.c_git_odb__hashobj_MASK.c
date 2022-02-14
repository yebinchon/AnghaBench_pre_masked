
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int header ;
struct TYPE_5__ {char* data; size_t len; int type; } ;
typedef TYPE_1__ git_rawobj ;
typedef int git_oid ;
struct TYPE_6__ {char* data; size_t len; } ;
typedef TYPE_2__ git_buf_vec ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (size_t*,char*,int,size_t,int ) ;

int FUNC_5(git_oid *VAR_1, git_rawobj *VAR_2)
{
 git_buf_vec VAR_3[2];
 char VAR_4[64];
 size_t VAR_5;
 int VAR_6;

 FUNC_0(VAR_1 && VAR_2);

 if (!FUNC_3(VAR_2->type)) {
  FUNC_1(VAR_0, "invalid object type");
  return -1;
 }

 if (!VAR_2->data && VAR_2->len != 0) {
  FUNC_1(VAR_0, "invalid object");
  return -1;
 }

 if ((VAR_6 = FUNC_4(&VAR_5,
  VAR_4, sizeof(VAR_4), VAR_2->len, VAR_2->type)) < 0)
  return VAR_6;

 VAR_3[0].data = VAR_4;
 VAR_3[0].len = VAR_5;
 VAR_3[1].data = VAR_2->data;
 VAR_3[1].len = VAR_2->len;

 return FUNC_2(VAR_1, VAR_3, 2);
}
