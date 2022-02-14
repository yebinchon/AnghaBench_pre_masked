
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_24x7_request_buffer {int interface_version; } ;
struct hv_24x7_data_result_buffer {int interface_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hv_24x7_request_buffer*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hv_24x7_request_buffer *VAR_2,
         struct hv_24x7_data_result_buffer *VAR_3)
{

 FUNC_0(VAR_2, 0, VAR_0);
 FUNC_0(VAR_3, 0, VAR_0);

 VAR_2->interface_version = VAR_1;

}
