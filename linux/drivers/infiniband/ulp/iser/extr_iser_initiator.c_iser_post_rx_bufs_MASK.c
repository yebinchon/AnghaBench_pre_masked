
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_conn {int post_recv_buf_count; } ;
struct iser_conn {int min_posted_rx; struct ib_conn ib_conn; } ;
struct iscsi_session {scalar_t__ discovery_sess; } ;
struct iscsi_hdr {int flags; int opcode; } ;
struct iscsi_conn {struct iscsi_session* session; struct iser_conn* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (struct iser_conn*,int ) ;

__attribute__((used)) static int FUNC_4(struct iscsi_conn *VAR_2, struct iscsi_hdr *VAR_3)
{
 struct iser_conn *VAR_4 = VAR_2->dd_data;
 struct ib_conn *VAR_5 = &VAR_4->ib_conn;
 struct iscsi_session *VAR_6 = VAR_2->session;

 FUNC_1("req op %x flags %x\n", VAR_3->opcode, VAR_3->flags);

 if ((VAR_3->flags & VAR_1) != VAR_1)
  return 0;





 FUNC_0(VAR_5->post_recv_buf_count != 1);

 if (VAR_6->discovery_sess) {
  FUNC_2("Discovery session, re-using login RX buffer\n");
  return 0;
 } else
  FUNC_2("Normal session, posting batch of RX %d buffers\n",
     VAR_4->min_posted_rx);


 if (FUNC_3(VAR_4, VAR_4->min_posted_rx))
  return -VAR_0;

 return 0;
}
