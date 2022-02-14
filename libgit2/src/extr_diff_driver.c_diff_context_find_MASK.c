
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ptr; scalar_t__ size; } ;
struct TYPE_5__ {TYPE_2__ line; int driver; int (* match_line ) (int ,TYPE_2__*) ;} ;
typedef TYPE_1__ git_diff_find_context_payload ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char const*,size_t) ;
 int FUNC_2 (char*,int ,size_t) ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static long FUNC_4(
 const char *VAR_0,
 long VAR_1,
 char *VAR_2,
 long VAR_3,
 void *VAR_4)
{
 git_diff_find_context_payload *VAR_5 = VAR_4;

 if (FUNC_1(&VAR_5->line, VAR_0, (size_t)VAR_1) < 0)
  return -1;
 FUNC_0(&VAR_5->line);

 if (!VAR_5->line.size)
  return -1;

 if (!VAR_5->match_line || !VAR_5->match_line(VAR_5->driver, &VAR_5->line))
  return -1;

 if (VAR_3 > (long)VAR_5->line.size)
  VAR_3 = (long)VAR_5->line.size;
 FUNC_2(VAR_2, VAR_5->line.ptr, (size_t)VAR_3);

 return VAR_3;
}
