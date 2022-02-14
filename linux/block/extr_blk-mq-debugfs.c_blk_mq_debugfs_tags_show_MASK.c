
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct blk_mq_tags {int breserved_tags; scalar_t__ nr_reserved_tags; int bitmap_tags; int active_queues; scalar_t__ nr_tags; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,struct seq_file*) ;
 int FUNC_2 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_3 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_0,
         struct blk_mq_tags *VAR_1)
{
 FUNC_2(VAR_0, "nr_tags=%u\n", VAR_1->nr_tags);
 FUNC_2(VAR_0, "nr_reserved_tags=%u\n", VAR_1->nr_reserved_tags);
 FUNC_2(VAR_0, "active_queues=%d\n",
     FUNC_0(&VAR_1->active_queues));

 FUNC_3(VAR_0, "\nbitmap_tags:\n");
 FUNC_1(&VAR_1->bitmap_tags, VAR_0);

 if (VAR_1->nr_reserved_tags) {
  FUNC_3(VAR_0, "\nbreserved_tags:\n");
  FUNC_1(&VAR_1->breserved_tags, VAR_0);
 }
}
