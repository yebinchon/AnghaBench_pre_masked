
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int size; } ;
struct TYPE_10__ {int repo; } ;
struct TYPE_11__ {char* buffer; TYPE_1__ cached; TYPE_2__ object; } ;
typedef TYPE_3__ git_odb_object ;
typedef TYPE_3__ git_commit ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(git_commit **VAR_1, const char *VAR_2)
{
 git_commit *VAR_3;
 git_odb_object VAR_4;
 int VAR_5;

 VAR_3 = (git_commit*)FUNC_0(sizeof(git_commit));
 FUNC_2(VAR_3, 0x0, sizeof(git_commit));
 VAR_3->object.repo = VAR_0;

 FUNC_2(&VAR_4, 0x0, sizeof(git_odb_object));
 VAR_4.buffer = (char *)VAR_2;
 VAR_4.cached.size = FUNC_3(VAR_4.buffer);

 VAR_5 = FUNC_1(VAR_3, &VAR_4);

 *VAR_1 = VAR_3;
 return VAR_5;
}
