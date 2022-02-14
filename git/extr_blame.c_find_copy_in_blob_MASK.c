
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct handle_split_cb_data {scalar_t__ num_lines; int plno; int tlno; scalar_t__ lno; struct handle_split_cb_data* split; struct blame_origin* parent; struct handle_split_cb_data* ent; struct blame_scoreboard* sb; } ;
struct blame_scoreboard {int xdl_opts; } ;
struct blame_origin {TYPE_2__* commit; } ;
struct blame_entry {scalar_t__ num_lines; int plno; int tlno; scalar_t__ lno; struct blame_entry* split; struct blame_origin* parent; struct blame_entry* ent; struct blame_scoreboard* sb; } ;
struct TYPE_9__ {char* ptr; int size; } ;
typedef TYPE_3__ mmfile_t ;
typedef int d ;
struct TYPE_7__ {int oid; } ;
struct TYPE_8__ {TYPE_1__ object; } ;


 char const* FUNC_0 (struct blame_scoreboard*,scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_3__*,int ,struct handle_split_cb_data*,int ) ;
 int FUNC_3 (struct blame_scoreboard*,struct handle_split_cb_data*,int ,int ,scalar_t__,struct blame_origin*,struct handle_split_cb_data*) ;
 int VAR_0 ;
 int FUNC_4 (struct handle_split_cb_data*,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct blame_scoreboard *VAR_1,
         struct blame_entry *VAR_2,
         struct blame_origin *VAR_3,
         struct blame_entry *VAR_4,
         mmfile_t *VAR_5)
{
 const char *VAR_6;
 mmfile_t VAR_7;
 struct handle_split_cb_data VAR_8;

 FUNC_4(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.sb = VAR_1; VAR_8.ent = VAR_2; VAR_8.parent = VAR_3; VAR_8.split = VAR_4;



 VAR_6 = FUNC_0(VAR_1, VAR_2->lno);
 VAR_7.ptr = (char *) VAR_6;
 VAR_7.size = FUNC_0(VAR_1, VAR_2->lno + VAR_2->num_lines) - VAR_6;





 FUNC_4(VAR_4, 0, sizeof(struct blame_entry [3]));
 if (FUNC_2(VAR_5, &VAR_7, VAR_0, &VAR_8, VAR_1->xdl_opts))
  FUNC_1("unable to generate diff (%s)",
      FUNC_5(&VAR_3->commit->object.oid));

 FUNC_3(VAR_1, VAR_2, VAR_8.tlno, VAR_8.plno, VAR_2->num_lines, VAR_3, VAR_4);
}
