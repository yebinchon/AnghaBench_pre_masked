
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; int full_count; void* buf_addr; } ;
struct intel_guc_log {TYPE_2__ relay; TYPE_1__* stats; } ;
struct guc_log_buffer_state {unsigned int read_ptr; unsigned int sampled_write_ptr; unsigned int buffer_full_cnt; unsigned int write_ptr; scalar_t__ flush_to_file; } ;
typedef enum guc_log_buffer_type { ____Placeholder_guc_log_buffer_type } guc_log_buffer_type ;
struct TYPE_3__ {int flush; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct intel_guc_log*,int,unsigned int) ;
 unsigned int FUNC_4 (int) ;
 void* FUNC_5 (struct intel_guc_log*) ;
 int FUNC_6 (struct intel_guc_log*) ;
 int FUNC_7 (void*,void*,unsigned int) ;
 int FUNC_8 (struct intel_guc_log*) ;
 int FUNC_9 (struct guc_log_buffer_state*,struct guc_log_buffer_state*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct intel_guc_log *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 struct guc_log_buffer_state *VAR_9, *VAR_10;
 struct guc_log_buffer_state VAR_11;
 enum guc_log_buffer_type VAR_12;
 void *VAR_13, *VAR_14;
 bool VAR_15;

 FUNC_10(&VAR_3->relay.lock);

 if (FUNC_2(!FUNC_8(VAR_3)))
  goto out_unlock;


 VAR_9 = VAR_13 = VAR_3->relay.buf_addr;


 VAR_10 = VAR_14 = FUNC_5(VAR_3);

 if (FUNC_12(!VAR_10)) {




  FUNC_1("no sub-buffer to capture logs\n");
  VAR_3->relay.full_count++;

  goto out_unlock;
 }


 VAR_13 += VAR_2;
 VAR_14 += VAR_2;

 for (VAR_12 = VAR_0; VAR_12 < VAR_1; VAR_12++) {





  FUNC_9(&VAR_11, VAR_9,
         sizeof(struct guc_log_buffer_state));
  VAR_4 = FUNC_4(VAR_12);
  VAR_5 = VAR_11.read_ptr;
  VAR_6 = VAR_11.sampled_write_ptr;
  VAR_8 = VAR_11.buffer_full_cnt;


  VAR_3->stats[VAR_12].flush += VAR_11.flush_to_file;
  VAR_15 = FUNC_3(VAR_3, VAR_12, VAR_8);


  VAR_9->read_ptr = VAR_6;
  VAR_9->flush_to_file = 0;
  VAR_9++;


  FUNC_9(VAR_10, &VAR_11,
         sizeof(struct guc_log_buffer_state));







  VAR_10->write_ptr = VAR_6;
  VAR_10++;


  if (FUNC_12(VAR_15)) {

   VAR_5 = 0;
   VAR_6 = VAR_4;
  } else if (FUNC_12((VAR_5 > VAR_4) ||
        (VAR_6 > VAR_4))) {
   FUNC_0("invalid log buffer state\n");

   VAR_5 = 0;
   VAR_6 = VAR_4;
  }


  if (VAR_5 > VAR_6) {
   FUNC_7(VAR_14, VAR_13, VAR_6);
   VAR_7 = VAR_4 - VAR_5;
  } else {
   VAR_7 = VAR_6 - VAR_5;
  }
  FUNC_7(VAR_14 + VAR_5,
        VAR_13 + VAR_5, VAR_7);

  VAR_13 += VAR_4;
  VAR_14 += VAR_4;
 }

 FUNC_6(VAR_3);

out_unlock:
 FUNC_11(&VAR_3->relay.lock);
}
