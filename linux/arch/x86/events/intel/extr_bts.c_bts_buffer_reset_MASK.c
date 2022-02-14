
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_output_handle {int head; unsigned long size; unsigned long wakeup; } ;
struct bts_phys {unsigned long offset; unsigned long displacement; unsigned long size; int page; } ;
struct bts_buffer {int nr_pages; size_t cur_buf; unsigned int nr_bufs; unsigned long end; int head; struct bts_phys* buf; scalar_t__ snapshot; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bts_phys*,unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct perf_output_handle*,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct bts_buffer *VAR_4, struct perf_output_handle *VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13;
 struct bts_phys *VAR_14, *VAR_15;
 int VAR_16;

 if (VAR_4->snapshot)
  return 0;

 VAR_6 = VAR_5->head & ((VAR_4->nr_pages << VAR_3) - 1);

 VAR_14 = &VAR_4->buf[VAR_4->cur_buf];
 VAR_7 = VAR_14->offset + VAR_14->displacement + VAR_14->size - VAR_6;
 VAR_9 = VAR_7;
 if (VAR_7 > VAR_5->size) {
  VAR_7 = VAR_5->size;
  VAR_7 -= VAR_7 % VAR_0;
 }
 if (VAR_7 <= VAR_1) {

  VAR_13 = VAR_4->cur_buf + 1;
  if (VAR_13 >= VAR_4->nr_bufs)
   VAR_13 = 0;
  VAR_15 = &VAR_4->buf[VAR_13];
  VAR_10 = FUNC_1(VAR_14->page) - VAR_14->displacement - VAR_14->size +
        VAR_15->displacement;
  VAR_11 = VAR_9 + VAR_10;
  if (VAR_5->size >= VAR_11) {
   VAR_8 = VAR_15->size;
   if (VAR_8 + VAR_11 > VAR_5->size) {
    VAR_8 = VAR_5->size - VAR_11;
    VAR_8 -= VAR_8 % VAR_0;
   }
   if (VAR_8 > VAR_7 || !VAR_7) {
    if (VAR_9)
     FUNC_0(VAR_14, VAR_6);
    VAR_16 = FUNC_3(VAR_5, VAR_11);
    if (VAR_16)
     return VAR_16;

    VAR_14 = VAR_15;
    VAR_7 = VAR_8;
    VAR_6 = VAR_14->offset + VAR_14->displacement;





    VAR_4->cur_buf = VAR_13;
    FUNC_2(&VAR_4->head, VAR_6);
   }
  }
 }


 VAR_12 = VAR_1 + VAR_0 + VAR_5->wakeup -
   VAR_5->head;
 if (VAR_7 > VAR_12) {
  VAR_7 = VAR_12;
  VAR_7 -= VAR_7 % VAR_0;
 }

 VAR_4->end = VAR_6 + VAR_7;





 if (!VAR_7)
  return -VAR_2;

 return 0;
}
