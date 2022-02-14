
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lock_file {TYPE_2__* tempfile; } ;
struct index_state {scalar_t__ updated_skipworktree; scalar_t__ updated_workdir; } ;
struct TYPE_3__ {int buf; } ;
struct TYPE_4__ {TYPE_1__ filename; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct lock_file*) ;
 int FUNC_1 (struct lock_file*) ;
 int FUNC_2 (struct index_state*,TYPE_2__*,int ) ;
 int FUNC_3 (int *,char*,char*,char*,int *) ;
 int VAR_1 ;
 int FUNC_4 (char*,char*,int ,char*,int ) ;
 int FUNC_5 (char*,char*,int ,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct index_state *VAR_2, struct lock_file *VAR_3,
     unsigned VAR_4)
{
 int VAR_5;





 FUNC_4("index", "do_write_index", VAR_1,
       "%s", VAR_3->tempfile->filename.buf);
 VAR_5 = FUNC_2(VAR_2, VAR_3->tempfile, 0);
 FUNC_5("index", "do_write_index", VAR_1,
       "%s", VAR_3->tempfile->filename.buf);

 if (VAR_5)
  return VAR_5;
 if (VAR_4 & VAR_0)
  VAR_5 = FUNC_1(VAR_3);
 else
  VAR_5 = FUNC_0(VAR_3);

 FUNC_3(((void*)0), "post-index-change",
   VAR_2->updated_workdir ? "1" : "0",
   VAR_2->updated_skipworktree ? "1" : "0", ((void*)0));
 VAR_2->updated_workdir = 0;
 VAR_2->updated_skipworktree = 0;

 return VAR_5;
}
