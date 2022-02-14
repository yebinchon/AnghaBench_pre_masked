
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct hv_24x7_request_buffer {int dummy; } ;
struct hv_24x7_data_result_buffer {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct hv_24x7_request_buffer*,struct hv_24x7_data_result_buffer*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct pmu *VAR_4, unsigned int VAR_5)
{
 struct hv_24x7_request_buffer *VAR_6;
 struct hv_24x7_data_result_buffer *VAR_7;


 FUNC_0(FUNC_1(VAR_3));

 FUNC_2(VAR_3, VAR_5);
 if (VAR_5 & ~VAR_0)
  return;

 VAR_6 = (void *)FUNC_3(VAR_1);
 VAR_7 = (void *)FUNC_3(VAR_2);

 FUNC_4(VAR_6, VAR_7);

 FUNC_5(VAR_2);
 FUNC_5(VAR_1);
}
