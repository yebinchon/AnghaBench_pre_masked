
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_event {int dummy; } ;
struct hv_24x7_request_buffer {int dummy; } ;
struct hv_24x7_data_result_buffer {int results; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct perf_event*,struct hv_24x7_request_buffer*) ;
 int FUNC_2 (struct perf_event*,struct hv_24x7_data_result_buffer*,int ,int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct hv_24x7_request_buffer*,struct hv_24x7_data_result_buffer*) ;
 int FUNC_5 (struct hv_24x7_request_buffer*,struct hv_24x7_data_result_buffer*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct perf_event *VAR_2, u64 *VAR_3)
{
 int VAR_4;
 struct hv_24x7_request_buffer *VAR_5;
 struct hv_24x7_data_result_buffer *VAR_6;

 FUNC_0(sizeof(*VAR_5) > 4096);
 FUNC_0(sizeof(*VAR_6) > 4096);

 VAR_5 = (void *)FUNC_3(VAR_0);
 VAR_6 = (void *)FUNC_3(VAR_1);

 FUNC_4(VAR_5, VAR_6);

 VAR_4 = FUNC_1(VAR_2, VAR_5);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_5(VAR_5, VAR_6);
 if (VAR_4)
  goto out;


 VAR_4 = FUNC_2(VAR_2, VAR_6,
        VAR_6->results, VAR_3, ((void*)0));

out:
 FUNC_6(VAR_0);
 FUNC_6(VAR_1);
 return VAR_4;
}
