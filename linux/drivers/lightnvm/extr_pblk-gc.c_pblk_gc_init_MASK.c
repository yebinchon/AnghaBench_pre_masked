
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_gc {int gc_enabled; void* gc_ts; void* gc_writer_ts; void* gc_reader_ts; void* gc_line_reader_wq; int r_list; int w_list; int gc_sem; int r_lock; int w_lock; int lock; void* gc_reader_wq; int pipeline_gc; int read_inflight_gc; scalar_t__ w_entries; scalar_t__ gc_forced; scalar_t__ gc_active; int gc_timer; } ;
struct pblk {struct pblk_gc gc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_3 (char*,int,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (void*) ;
 scalar_t__ VAR_6 ;
 void* FUNC_6 (int ,struct pblk*,char*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct pblk*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int ) ;

int FUNC_14(struct pblk *VAR_11)
{
 struct pblk_gc *VAR_12 = &VAR_11->gc;
 int VAR_13;

 VAR_12->gc_ts = FUNC_6(VAR_9, VAR_11, "pblk-gc-ts");
 if (FUNC_1(VAR_12->gc_ts)) {
  FUNC_10(VAR_11, "could not allocate GC main kthread\n");
  return FUNC_2(VAR_12->gc_ts);
 }

 VAR_12->gc_writer_ts = FUNC_6(VAR_10, VAR_11,
       "pblk-gc-writer-ts");
 if (FUNC_1(VAR_12->gc_writer_ts)) {
  FUNC_10(VAR_11, "could not allocate GC writer kthread\n");
  VAR_13 = FUNC_2(VAR_12->gc_writer_ts);
  goto fail_free_main_kthread;
 }

 VAR_12->gc_reader_ts = FUNC_6(VAR_7, VAR_11,
       "pblk-gc-reader-ts");
 if (FUNC_1(VAR_12->gc_reader_ts)) {
  FUNC_10(VAR_11, "could not allocate GC reader kthread\n");
  VAR_13 = FUNC_2(VAR_12->gc_reader_ts);
  goto fail_free_writer_kthread;
 }

 FUNC_13(&VAR_12->gc_timer, VAR_8, 0);
 FUNC_8(&VAR_12->gc_timer, VAR_6 + FUNC_9(VAR_1));

 VAR_12->gc_active = 0;
 VAR_12->gc_forced = 0;
 VAR_12->gc_enabled = 1;
 VAR_12->w_entries = 0;
 FUNC_4(&VAR_12->read_inflight_gc, 0);
 FUNC_4(&VAR_12->pipeline_gc, 0);




 VAR_12->gc_line_reader_wq = FUNC_3("pblk-gc-line-reader-wq",
   VAR_4 | VAR_5, VAR_2);
 if (!VAR_12->gc_line_reader_wq) {
  FUNC_10(VAR_11, "could not allocate GC line reader workqueue\n");
  VAR_13 = -VAR_0;
  goto fail_free_reader_kthread;
 }


 VAR_12->gc_reader_wq = FUNC_3("pblk-gc-line_wq",
     VAR_4 | VAR_5, 1);
 if (!VAR_12->gc_reader_wq) {
  FUNC_10(VAR_11, "could not allocate GC reader workqueue\n");
  VAR_13 = -VAR_0;
  goto fail_free_reader_line_wq;
 }

 FUNC_12(&VAR_12->lock);
 FUNC_12(&VAR_12->w_lock);
 FUNC_12(&VAR_12->r_lock);

 FUNC_11(&VAR_12->gc_sem, VAR_3);

 FUNC_0(&VAR_12->w_list);
 FUNC_0(&VAR_12->r_list);

 return 0;

fail_free_reader_line_wq:
 FUNC_5(VAR_12->gc_line_reader_wq);
fail_free_reader_kthread:
 FUNC_7(VAR_12->gc_reader_ts);
fail_free_writer_kthread:
 FUNC_7(VAR_12->gc_writer_ts);
fail_free_main_kthread:
 FUNC_7(VAR_12->gc_ts);

 return VAR_13;
}
