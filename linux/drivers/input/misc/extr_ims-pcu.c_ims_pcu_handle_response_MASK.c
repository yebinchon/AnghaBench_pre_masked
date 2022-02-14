
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ims_pcu {int* read_buf; int expected_response; int cmd_done; int read_pos; int cmd_buf_len; int cmd_buf; int ack_id; int setup_complete; } ;



 int FUNC_0 (int *) ;
 int FUNC_1 (struct ims_pcu*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int ) ;

__attribute__((used)) static void FUNC_4(struct ims_pcu *VAR_0)
{
 switch (VAR_0->read_buf[0]) {
 case 128:
  if (FUNC_2(VAR_0->setup_complete))
   FUNC_1(VAR_0);
  break;

 default:





  if (VAR_0->read_buf[0] == VAR_0->expected_response &&
      VAR_0->read_buf[1] == VAR_0->ack_id - 1) {

   FUNC_3(VAR_0->cmd_buf, VAR_0->read_buf, VAR_0->read_pos);
   VAR_0->cmd_buf_len = VAR_0->read_pos;
   FUNC_0(&VAR_0->cmd_done);
  }
  break;
 }
}
