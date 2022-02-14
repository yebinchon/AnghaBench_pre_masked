
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dir_len; int found; int * res_oid; int * short_oid; scalar_t__ short_oid_len; } ;
typedef TYPE_1__ loose_locate_object_state ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned char*,scalar_t__) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, git_buf *VAR_3) {
 loose_locate_object_state *VAR_4 = (loose_locate_object_state *)VAR_2;

 if (FUNC_0(VAR_3) - VAR_4->dir_len != VAR_1 - 2) {

  return 0;
 }

 if (FUNC_1(VAR_3->ptr) == 0) {


  if (!FUNC_2(VAR_4->short_oid + 2,
   (unsigned char *)VAR_3->ptr + VAR_4->dir_len,
   VAR_4->short_oid_len - 2)) {

   if (!VAR_4->found) {
    VAR_4->res_oid[0] = VAR_4->short_oid[0];
    VAR_4->res_oid[1] = VAR_4->short_oid[1];
    FUNC_3(VAR_4->res_oid+2, VAR_3->ptr+VAR_4->dir_len, VAR_1-2);
   }
   VAR_4->found++;
  }
 }

 if (VAR_4->found > 1)
  return VAR_0;

 return 0;
}
