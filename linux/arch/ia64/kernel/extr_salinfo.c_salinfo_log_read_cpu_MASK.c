
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct salinfo_data {int type; scalar_t__ log_buffer; int log_size; } ;
struct TYPE_2__ {scalar_t__ severity; } ;
typedef TYPE_1__ sal_log_record_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static long
FUNC_2(void *VAR_1)
{
 struct salinfo_data *VAR_2 = VAR_1;
 sal_log_record_header_t *VAR_3;
 VAR_2->log_size = FUNC_1(VAR_2->type, (u64 *) VAR_2->log_buffer);
 VAR_3 = (sal_log_record_header_t *)(VAR_2->log_buffer);

 if (VAR_3->severity == VAR_0)
  FUNC_0(VAR_2->type);
 return 0;
}
