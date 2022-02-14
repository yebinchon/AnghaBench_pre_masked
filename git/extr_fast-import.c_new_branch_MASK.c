
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* versions; } ;
struct branch {int pack_id; scalar_t__ active; scalar_t__ num_notes; TYPE_2__ branch_tree; struct branch* table_next_branch; int name; } ;
struct TYPE_3__ {void* mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 struct branch** VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_6 ;
 unsigned int FUNC_2 (char const*,int ) ;
 struct branch* FUNC_3 (char const*) ;
 struct branch* FUNC_4 (int *,int,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static struct branch *FUNC_7(const char *VAR_7)
{
 unsigned int VAR_8 = FUNC_2(VAR_7, FUNC_6(VAR_7)) % VAR_5;
 struct branch *VAR_9 = FUNC_3(VAR_7);

 if (VAR_9)
  FUNC_1("Invalid attempt to create duplicate branch: %s", VAR_7);
 if (FUNC_0(VAR_7, VAR_1))
  FUNC_1("Branch name doesn't conform to GIT standards: %s", VAR_7);

 VAR_9 = FUNC_4(&VAR_6, 1, sizeof(struct branch));
 VAR_9->name = FUNC_5(VAR_7);
 VAR_9->table_next_branch = VAR_4[VAR_8];
 VAR_9->branch_tree.versions[0].mode = VAR_2;
 VAR_9->branch_tree.versions[1].mode = VAR_2;
 VAR_9->num_notes = 0;
 VAR_9->active = 0;
 VAR_9->pack_id = VAR_0;
 VAR_4[VAR_8] = VAR_9;
 VAR_3++;
 return VAR_9;
}
