
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
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int const*,int ) ;
 scalar_t__ FUNC_3 (int *,int *,int const*) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_5(void **VAR_2, size_t *VAR_3, git_object_t *VAR_4, git_odb_backend *VAR_5, const git_oid *VAR_6)
{
 git_buf VAR_7 = VAR_0;
 git_rawobj VAR_8;
 int VAR_9 = 0;

 FUNC_0(VAR_5 && VAR_6);

 if (FUNC_3(&VAR_7, (loose_backend *)VAR_5, VAR_6) < 0) {
  VAR_9 = FUNC_2("no matching loose object",
   VAR_6, VAR_1);
 } else if ((VAR_9 = FUNC_4(&VAR_8, &VAR_7)) == 0) {
  *VAR_2 = VAR_8.data;
  *VAR_3 = VAR_8.len;
  *VAR_4 = VAR_8.type;
 }

 FUNC_1(&VAR_7);

 return VAR_9;
}
