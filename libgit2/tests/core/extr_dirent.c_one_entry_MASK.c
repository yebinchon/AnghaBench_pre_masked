
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
struct TYPE_4__ {int names; TYPE_2__ path; } ;
typedef TYPE_1__ walk_data ;
typedef TYPE_2__ git_buf ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, git_buf *VAR_3)
{
 walk_data *VAR_4 = (walk_data *) VAR_2;

 if (VAR_2 != VAR_1)
  return VAR_0;

 if (VAR_3 != &VAR_4->path)
  return VAR_0;

 return FUNC_0(VAR_4->names, VAR_3->ptr);
}
