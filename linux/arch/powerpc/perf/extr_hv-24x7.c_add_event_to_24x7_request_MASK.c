
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct perf_event {int dummy; } ;
struct hv_24x7_request_buffer {scalar_t__ num_requests; int interface_version; scalar_t__ requests; } ;
struct hv_24x7_request {int performance_domain; int max_num_thread_groups; int starting_thread_group_ix; void* max_ix; void* starting_ix; void* max_num_lpars; void* starting_lpar_ix; int data_offset; void* data_size; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;


 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (struct perf_event*) ;
 int FUNC_6 (struct perf_event*) ;
 int FUNC_7 (struct perf_event*) ;
 int FUNC_8 (struct perf_event*) ;
 int FUNC_9 (struct perf_event*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct perf_event *VAR_1,
    struct hv_24x7_request_buffer *VAR_2)
{
 u16 VAR_3;
 int VAR_4;
 size_t VAR_5;
 struct hv_24x7_request *VAR_6;

 if (VAR_2->num_requests >=
     FUNC_10(VAR_2->interface_version)) {
  FUNC_11("Too many requests for 24x7 HCALL %d\n",
    VAR_2->num_requests);
  return -VAR_0;
 }

 switch (FUNC_6(VAR_1)) {
 case 129:
  VAR_3 = FUNC_4(VAR_1);
  break;
 case 128:
  VAR_3 = FUNC_5(VAR_1);
  break;
 default:
  VAR_3 = FUNC_9(VAR_1);
 }

 VAR_5 = FUNC_0(VAR_2->interface_version);

 VAR_4 = VAR_2->num_requests++;
 VAR_6 = (void *) VAR_2->requests + VAR_4 * VAR_5;

 VAR_6->performance_domain = FUNC_6(VAR_1);
 VAR_6->data_size = FUNC_1(8);
 VAR_6->data_offset = FUNC_2(FUNC_8(VAR_1));
 VAR_6->starting_lpar_ix = FUNC_1(FUNC_7(VAR_1));
 VAR_6->max_num_lpars = FUNC_1(1);
 VAR_6->starting_ix = FUNC_1(VAR_3);
 VAR_6->max_ix = FUNC_1(1);

 if (VAR_2->interface_version > 1) {
  if (FUNC_3(VAR_6->performance_domain))
   VAR_6->max_num_thread_groups = -1;
  else if (VAR_6->performance_domain != 129) {
   VAR_6->starting_thread_group_ix = VAR_3 % 2;
   VAR_6->max_num_thread_groups = 1;
  }
 }

 return 0;
}
