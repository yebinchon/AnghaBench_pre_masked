
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_block {int list; int flags; int data; int datalen; } ;
struct log_writes_c {int sectorsize; int log_kthread; int blocks_lock; int logging_blocks; int pending_blocks; } ;
struct log_write_entry {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pending_block*) ;
 int FUNC_3 (char*,size_t,int ) ;
 struct pending_block* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct log_writes_c *VAR_3, char *VAR_4)
{
 struct pending_block *VAR_5;
 size_t VAR_6 = VAR_3->sectorsize - sizeof(struct log_write_entry);

 VAR_5 = FUNC_4(sizeof(struct pending_block), VAR_1);
 if (!VAR_5) {
  FUNC_0("Error allocating pending block");
  return -VAR_0;
 }

 VAR_5->data = FUNC_3(VAR_4, VAR_6 - 1, VAR_1);
 if (!VAR_5->data) {
  FUNC_0("Error copying mark data");
  FUNC_2(VAR_5);
  return -VAR_0;
 }
 FUNC_1(&VAR_3->pending_blocks);
 VAR_5->datalen = FUNC_8(VAR_5->data);
 VAR_5->flags |= VAR_2;
 FUNC_6(&VAR_3->blocks_lock);
 FUNC_5(&VAR_5->list, &VAR_3->logging_blocks);
 FUNC_7(&VAR_3->blocks_lock);
 FUNC_9(VAR_3->log_kthread);
 return 0;
}
