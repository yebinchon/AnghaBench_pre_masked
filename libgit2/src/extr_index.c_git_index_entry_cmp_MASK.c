
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int path; } ;
typedef TYPE_1__ git_index_entry ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(const void *VAR_0, const void *VAR_1)
{
 int VAR_2;
 const git_index_entry *VAR_3 = VAR_0;
 const git_index_entry *VAR_4 = VAR_1;

 VAR_2 = FUNC_1(VAR_3->path, VAR_4->path);

 if (VAR_2 == 0)
  VAR_2 = (FUNC_0(VAR_3) - FUNC_0(VAR_4));

 return VAR_2;
}
