
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct salinfo_data {scalar_t__ state; int read_wait; int cpu_event; scalar_t__ log_buffer; scalar_t__ saved_num; } ;
struct TYPE_2__ {scalar_t__ severity; } ;
typedef TYPE_1__ sal_log_record_header_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,struct salinfo_data*) ;
 int FUNC_4 (struct salinfo_data*,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int ,struct salinfo_data*) ;

__attribute__((used)) static int
FUNC_9(struct salinfo_data *VAR_5, int VAR_6)
{
 sal_log_record_header_t *VAR_7;
 unsigned long VAR_8;
 FUNC_5(&VAR_2, VAR_8);
 VAR_5->state = VAR_1;
 if (!FUNC_2(VAR_6, &VAR_5->cpu_event)) {
  FUNC_6(&VAR_2, VAR_8);
  return 0;
 }
 FUNC_0(VAR_6, &VAR_5->cpu_event);
 if (VAR_5->saved_num) {
  FUNC_4(VAR_5, VAR_5->saved_num - 1);
  VAR_5->saved_num = 0;
 }
 FUNC_6(&VAR_2, VAR_8);
 VAR_7 = (sal_log_record_header_t *)(VAR_5->log_buffer);

 if (VAR_7->severity != VAR_3)
  FUNC_8(VAR_6, VAR_4, VAR_5);

 FUNC_3(VAR_6, VAR_5);
 if (VAR_5->state == VAR_0) {
  FUNC_5(&VAR_2, VAR_8);
  FUNC_1(VAR_6, &VAR_5->cpu_event);
  FUNC_7(&VAR_5->read_wait);
  FUNC_6(&VAR_2, VAR_8);
 }
 return 0;
}
