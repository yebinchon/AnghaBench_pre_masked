
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; } ;
struct pack_backend {struct pack_backend* pack_folder; TYPE_1__ packs; } ;
struct git_pack_file {int dummy; } ;
typedef int git_odb_backend ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pack_backend*) ;
 int FUNC_2 (struct git_pack_file*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct git_pack_file* FUNC_4 (TYPE_1__*,size_t) ;

__attribute__((used)) static void FUNC_5(git_odb_backend *VAR_0)
{
 struct pack_backend *VAR_1;
 size_t VAR_2;

 FUNC_0(VAR_0);

 VAR_1 = (struct pack_backend *)VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_1->packs.length; ++VAR_2) {
  struct git_pack_file *VAR_3 = FUNC_4(&VAR_1->packs, VAR_2);
  FUNC_2(VAR_3);
 }

 FUNC_3(&VAR_1->packs);
 FUNC_1(VAR_1->pack_folder);
 FUNC_1(VAR_1);
}
