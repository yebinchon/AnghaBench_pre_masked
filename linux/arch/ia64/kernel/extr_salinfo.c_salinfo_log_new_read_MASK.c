
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct salinfo_data_saved {int cpu; scalar_t__ id; int size; scalar_t__ buffer; } ;
struct salinfo_data {int saved_num; int state; int cpu_event; int log_size; int log_buffer; struct salinfo_data_saved* data_saved; } ;
struct TYPE_3__ {scalar_t__ id; } ;
typedef TYPE_1__ sal_log_record_header_t ;


 int FUNC_0 (struct salinfo_data_saved*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int,int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct salinfo_data*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int,int ,struct salinfo_data*) ;

__attribute__((used)) static void
FUNC_8(int VAR_4, struct salinfo_data *VAR_5)
{
 struct salinfo_data_saved *VAR_6;
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9 = FUNC_0(VAR_5->data_saved);

 VAR_5->saved_num = 0;
 FUNC_5(&VAR_2, VAR_7);
retry:
 for (VAR_8 = 0, VAR_6 = VAR_5->data_saved; VAR_8 < VAR_9; ++VAR_8, ++VAR_6) {
  if (VAR_6->buffer && VAR_6->cpu == VAR_4) {
   sal_log_record_header_t *VAR_10 = (sal_log_record_header_t *)(VAR_6->buffer);
   VAR_5->log_size = VAR_6->size;
   FUNC_3(VAR_5->log_buffer, VAR_10, VAR_5->log_size);
   FUNC_1();
   if (VAR_10->id == VAR_6->id) {
    VAR_5->saved_num = VAR_8+1;
    break;
   }

   FUNC_4(VAR_5, VAR_8);
   goto retry;
  }
 }
 FUNC_6(&VAR_2, VAR_7);

 if (!VAR_5->saved_num)
  FUNC_7(VAR_4, VAR_3, VAR_5);
 if (!VAR_5->log_size) {
  VAR_5->state = VAR_1;
  FUNC_2(VAR_4, &VAR_5->cpu_event);
 } else {
  VAR_5->state = VAR_0;
 }
}
