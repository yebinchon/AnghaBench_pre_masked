
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int path; } ;
typedef TYPE_1__ git_index_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(void **VAR_2, void *VAR_3)
{
 const git_index_entry *VAR_4 = VAR_3;
 FUNC_1(VAR_2);
 FUNC_2(VAR_1, "'%s' appears multiple times at stage %d",
  VAR_4->path, FUNC_0(VAR_4));
 return VAR_0;
}
