
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct dirent {char* d_name; } ;
struct TYPE_9__ {char* ptr; } ;
struct TYPE_8__ {int flags; int parent_len; TYPE_3__ path; int ic; int dir; } ;
typedef TYPE_1__ git_path_diriter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,char const*,size_t) ;
 int FUNC_3 (TYPE_3__*,char) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int *,char const**,size_t*) ;
 scalar_t__ FUNC_7 (char*) ;
 struct dirent* FUNC_8 (int ) ;
 size_t FUNC_9 (char const*) ;

int FUNC_10(git_path_diriter *VAR_5)
{
 struct dirent *VAR_6;
 const char *VAR_7;
 size_t VAR_8;
 bool VAR_9 = !(VAR_5->flags & VAR_2);
 int VAR_10 = 0;

 FUNC_0(VAR_5);

 VAR_4 = 0;

 do {
  if ((VAR_6 = FUNC_8(VAR_5->dir)) == ((void*)0)) {
   if (!VAR_4)
    return VAR_1;

   FUNC_5(VAR_0,
    "could not read directory '%s'", VAR_5->path.ptr);
   return -1;
  }
 } while (VAR_9 && FUNC_7(VAR_6->d_name));

 VAR_7 = VAR_6->d_name;
 VAR_8 = FUNC_9(VAR_7);







 FUNC_4(&VAR_5->path, VAR_5->parent_len);

 if (VAR_5->parent_len > 0 &&
  VAR_5->path.ptr[VAR_5->parent_len-1] != '/')
  FUNC_3(&VAR_5->path, '/');

 FUNC_2(&VAR_5->path, VAR_7, VAR_8);

 if (FUNC_1(&VAR_5->path))
  return -1;

 return VAR_10;
}
