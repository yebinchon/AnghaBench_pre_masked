
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct ide_proc_devset {int (* mulf ) (TYPE_1__*) ;int (* divf ) (TYPE_1__*) ;int min; int max; struct ide_devset* setting; scalar_t__ name; } ;
struct ide_devset {scalar_t__ set; scalar_t__ get; } ;
struct TYPE_5__ {struct ide_proc_devset* settings; } ;
typedef TYPE_1__ ide_drive_t ;


 struct ide_proc_devset* VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct ide_proc_devset const*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct seq_file*,char*,...) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_2, void *VAR_3)
{
 const struct ide_proc_devset *VAR_4, *VAR_5, *VAR_6;
 const struct ide_devset *VAR_7;
 ide_drive_t *VAR_8 = (ide_drive_t *) VAR_2->private;
 int VAR_9, VAR_10, VAR_11;

 FUNC_3();

 FUNC_1(&VAR_1);
 VAR_5 = VAR_0;
 VAR_6 = VAR_8->settings;
 FUNC_4(VAR_2, "name\t\t\tvalue\t\tmin\t\tmax\t\tmode\n");
 FUNC_4(VAR_2, "----\t\t\t-----\t\t---\t\t---\t\t----\n");
 while (VAR_5->name || (VAR_6 && VAR_6->name)) {

  if (VAR_5->name && VAR_6 && VAR_6->name) {
   if (FUNC_5(VAR_6->name, VAR_5->name) < 0)
    VAR_4 = VAR_6++;
   else
    VAR_4 = VAR_5++;
  } else if (VAR_6 && VAR_6->name) {
   VAR_4 = VAR_6++;
  } else
   VAR_4 = VAR_5++;
  VAR_10 = VAR_4->mulf ? VAR_4->mulf(VAR_8) : 1;
  VAR_11 = VAR_4->divf ? VAR_4->divf(VAR_8) : 1;
  FUNC_4(VAR_2, "%-24s", VAR_4->name);
  VAR_9 = FUNC_0(VAR_8, VAR_4);
  if (VAR_9 >= 0)
   FUNC_4(VAR_2, "%-16d", VAR_9 * VAR_10 / VAR_11);
  else
   FUNC_4(VAR_2, "%-16s", "write-only");
  FUNC_4(VAR_2, "%-16d%-16d", (VAR_4->min * VAR_10 + VAR_11 - 1) / VAR_11, VAR_4->max * VAR_10 / VAR_11);
  VAR_7 = VAR_4->setting;
  if (VAR_7->get)
   FUNC_4(VAR_2, "r");
  if (VAR_7->set)
   FUNC_4(VAR_2, "w");
  FUNC_4(VAR_2, "\n");
 }
 FUNC_2(&VAR_1);
 return 0;
}
