
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int repo; TYPE_2__* opts; } ;
typedef TYPE_1__ tag_state ;
struct TYPE_8__ {char* tag_name; } ;
typedef TYPE_2__ tag_options ;
typedef int git_object ;
struct TYPE_9__ {char* ptr; int member_0; } ;
typedef TYPE_3__ git_buf ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (int **,int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,char*,char*) ;

__attribute__((used)) static void FUNC_8(tag_state *VAR_0)
{
 tag_options *VAR_1 = VAR_0->opts;
 git_object *VAR_2;
 git_buf VAR_3 = {0};

 FUNC_0(!VAR_1->tag_name, "Name required");

 FUNC_1(FUNC_5(&VAR_2, VAR_0->repo, VAR_1->tag_name),
   "Failed to lookup rev", VAR_1->tag_name);

 FUNC_1(FUNC_4(&VAR_3, VAR_2),
   "Unable to get abbreviated OID", VAR_1->tag_name);

 FUNC_1(FUNC_6(VAR_0->repo, VAR_1->tag_name),
   "Unable to delete tag", VAR_1->tag_name);

 FUNC_7("Deleted tag '%s' (was %s)\n", VAR_1->tag_name, VAR_3.ptr);

 FUNC_2(&VAR_3);
 FUNC_3(VAR_2);
}
