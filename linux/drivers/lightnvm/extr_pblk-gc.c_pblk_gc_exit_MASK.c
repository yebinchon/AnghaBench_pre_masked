
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_gc {scalar_t__ gc_writer_ts; int gc_line_reader_wq; int gc_reader_wq; scalar_t__ gc_reader_ts; scalar_t__ gc_ts; scalar_t__ gc_active; int gc_timer; scalar_t__ gc_enabled; } ;
struct pblk {struct pblk_gc gc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct pblk *VAR_0, bool VAR_1)
{
 struct pblk_gc *VAR_2 = &VAR_0->gc;

 VAR_2->gc_enabled = 0;
 FUNC_0(&VAR_2->gc_timer);
 VAR_2->gc_active = 0;

 if (VAR_2->gc_ts)
  FUNC_3(VAR_2->gc_ts);

 if (VAR_2->gc_reader_ts)
  FUNC_3(VAR_2->gc_reader_ts);

 if (VAR_1) {
  FUNC_2(VAR_2->gc_reader_wq);
  FUNC_2(VAR_2->gc_line_reader_wq);
 }

 FUNC_1(VAR_2->gc_reader_wq);
 FUNC_1(VAR_2->gc_line_reader_wq);

 if (VAR_2->gc_writer_ts)
  FUNC_3(VAR_2->gc_writer_ts);
}
