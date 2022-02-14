
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
typedef int git_dir_flag ;
struct TYPE_6__ {char* ptr; int size; } ;
struct TYPE_5__ {char* path; char* basename; int is_dir; TYPE_2__ full; } ;
typedef TYPE_1__ git_attr_path ;





 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char const*,char const*,int*) ;
 char* FUNC_3 (char*,char) ;

int FUNC_4(
 git_attr_path *VAR_0, const char *VAR_1, const char *VAR_2, git_dir_flag VAR_3)
{
 ssize_t VAR_4;


 FUNC_0(&VAR_0->full, 0);

 if (FUNC_2(&VAR_0->full, VAR_1, VAR_2, &VAR_4) < 0)
  return -1;

 VAR_0->path = VAR_0->full.ptr + VAR_4;


 while (VAR_0->full.size > 0) {
  if (VAR_0->full.ptr[VAR_0->full.size - 1] != '/')
   break;
  VAR_0->full.size--;
 }
 VAR_0->full.ptr[VAR_0->full.size] = '\0';


 while (*VAR_0->path == '/')
  VAR_0->path++;


 VAR_0->basename = FUNC_3(VAR_0->path, '/');
 if (VAR_0->basename)
  VAR_0->basename++;
 if (!VAR_0->basename || !*VAR_0->basename)
  VAR_0->basename = VAR_0->path;

 switch (VAR_3)
 {
 case 130:
  VAR_0->is_dir = 0;
  break;

 case 129:
  VAR_0->is_dir = 1;
  break;

 case 128:
 default:
  VAR_0->is_dir = (int)FUNC_1(VAR_0->full.ptr);
  break;
 }

 return 0;
}
