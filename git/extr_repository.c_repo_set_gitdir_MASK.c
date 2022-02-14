
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct set_gitdir_args {int index_file; int graft_file; int alternate_db; int object_dir; int commondir; } ;
struct repository {char* gitdir; char* commondir; int index_file; int graft_file; TYPE_1__* objects; } ;
struct TYPE_4__ {int path; int next; } ;
struct TYPE_3__ {char* alternate_db; TYPE_2__* odb; int * odb_tail; } ;


 int FUNC_0 (int *,int ,char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (struct repository*,int ) ;
 TYPE_2__* FUNC_4 (int,int) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (int ) ;

void FUNC_7(struct repository *VAR_0,
       const char *VAR_1,
       const struct set_gitdir_args *VAR_2)
{
 const char *VAR_3 = FUNC_2(VAR_1);





 char *VAR_4 = VAR_0->gitdir;

 VAR_0->gitdir = FUNC_5(VAR_3 ? VAR_3 : VAR_1);
 FUNC_1(VAR_4);

 FUNC_3(VAR_0, VAR_2->commondir);

 if (!VAR_0->objects->odb) {
  VAR_0->objects->odb = FUNC_4(1, sizeof(*VAR_0->objects->odb));
  VAR_0->objects->odb_tail = &VAR_0->objects->odb->next;
 }
 FUNC_0(&VAR_0->objects->odb->path, VAR_2->object_dir,
   VAR_0->commondir, "objects");

 FUNC_1(VAR_0->objects->alternate_db);
 VAR_0->objects->alternate_db = FUNC_6(VAR_2->alternate_db);
 FUNC_0(&VAR_0->graft_file, VAR_2->graft_file,
   VAR_0->commondir, "info/grafts");
 FUNC_0(&VAR_0->index_file, VAR_2->index_file,
   VAR_0->gitdir, "index");
}
