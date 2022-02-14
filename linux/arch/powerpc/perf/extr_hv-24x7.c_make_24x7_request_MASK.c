
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_24x7_request_buffer {int failing_request_ix; int detailed_rc; struct hv_24x7_request* requests; } ;
struct hv_24x7_request {int starting_lpar_ix; int starting_ix; int data_offset; int performance_domain; } ;
struct hv_24x7_data_result_buffer {int failing_request_ix; int detailed_rc; struct hv_24x7_request* requests; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ,long,long,int ,int ) ;
 int FUNC_2 (struct hv_24x7_request_buffer*) ;

__attribute__((used)) static int FUNC_3(struct hv_24x7_request_buffer *VAR_3,
        struct hv_24x7_data_result_buffer *VAR_4)
{
 long VAR_5;






 VAR_5 = FUNC_0(VAR_2,
   FUNC_2(VAR_3), VAR_1,
   FUNC_2(VAR_4), VAR_1);

 if (VAR_5) {
  struct hv_24x7_request *VAR_6;

  VAR_6 = VAR_3->requests;
  FUNC_1("hcall failed: [%d %#x %#x %d] => ret 0x%lx (%ld) detail=0x%x failing ix=%x\n",
          VAR_6->performance_domain, VAR_6->data_offset,
          VAR_6->starting_ix, VAR_6->starting_lpar_ix,
          VAR_5, VAR_5, VAR_4->detailed_rc,
          VAR_4->failing_request_ix);
  return -VAR_0;
 }

 return 0;
}
