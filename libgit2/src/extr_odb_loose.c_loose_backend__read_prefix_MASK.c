
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int loose_backend ;
struct TYPE_3__ {size_t len; int type; void* data; } ;
typedef TYPE_1__ git_rawobj ;
typedef int git_oid ;
typedef int git_odb_backend ;
typedef int git_object_t ;
typedef int git_buf ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,int *,int *,int const*,size_t) ;
 int FUNC_4 (void**,size_t*,int *,int *,int const*) ;
 int FUNC_5 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_6(
 git_oid *VAR_3,
 void **VAR_4,
 size_t *VAR_5,
 git_object_t *VAR_6,
 git_odb_backend *VAR_7,
 const git_oid *VAR_8,
 size_t VAR_9)
{
 int VAR_10 = 0;

 FUNC_0(VAR_9 >= VAR_2 && VAR_9 <= VAR_1);

 if (VAR_9 == VAR_1) {

  VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  if (!VAR_10)
   FUNC_2(VAR_3, VAR_8);
 } else {
  git_buf VAR_11 = VAR_0;
  git_rawobj VAR_12;

  FUNC_0(VAR_7 && VAR_8);

  if ((VAR_10 = FUNC_3(&VAR_11, VAR_3,
    (loose_backend *)VAR_7, VAR_8, VAR_9)) == 0 &&
   (VAR_10 = FUNC_5(&VAR_12, &VAR_11)) == 0)
  {
   *VAR_4 = VAR_12.data;
   *VAR_5 = VAR_12.len;
   *VAR_6 = VAR_12.type;
  }

  FUNC_1(&VAR_11);
 }

 return VAR_10;
}
