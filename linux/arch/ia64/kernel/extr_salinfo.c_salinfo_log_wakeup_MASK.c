
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct salinfo_data_saved {int * buffer; int size; int id; int cpu; } ;
struct salinfo_data {int read_wait; int cpu_event; struct salinfo_data_saved* data_saved; int saved_num; } ;
struct TYPE_2__ {int id; } ;
typedef TYPE_1__ sal_log_record_header_t ;


 int FUNC_0 (struct salinfo_data_saved*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 struct salinfo_data* VAR_1 ;
 struct salinfo_data_saved* VAR_2 ;
 int FUNC_3 (struct salinfo_data*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

void
FUNC_8(int VAR_3, u8 *VAR_4, u64 VAR_5, int VAR_6)
{
 struct salinfo_data *VAR_7 = VAR_1 + VAR_3;
 struct salinfo_data_saved *VAR_8;
 unsigned long VAR_9 = 0;
 int VAR_10;
 int VAR_11 = FUNC_0(VAR_7->data_saved);

 FUNC_1(VAR_3 >= FUNC_0(VAR_2));

 if (VAR_6)
  FUNC_5(&VAR_0, VAR_9);
 if (VAR_4) {
  for (VAR_10 = 0, VAR_8 = VAR_7->data_saved; VAR_10 < VAR_11; ++VAR_10, ++VAR_8) {
   if (!VAR_8->buffer)
    break;
  }
  if (VAR_10 == VAR_11) {
   if (!VAR_7->saved_num) {
    FUNC_3(VAR_7, 0);
    VAR_8 = VAR_7->data_saved + VAR_11 - 1;
   } else
    VAR_8 = ((void*)0);
  }
  if (VAR_8) {
   VAR_8->cpu = FUNC_4();
   VAR_8->id = ((sal_log_record_header_t *)VAR_4)->id;
   VAR_8->size = VAR_5;
   VAR_8->buffer = VAR_4;
  }
 }
 FUNC_2(FUNC_4(), &VAR_7->cpu_event);
 if (VAR_6) {
  FUNC_7(&VAR_7->read_wait);
  FUNC_6(&VAR_0, VAR_9);
 }
}
