
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zero ;
typedef int uint32_t ;
struct pdu {int pdu_data_len; int * pdu_data; int * pdu_bhs; struct connection* pdu_connection; } ;
struct iovec {int iov_len; int * iov_base; } ;
struct TYPE_2__ {scalar_t__ isc_iser; } ;
struct connection {int conn_socket; TYPE_1__ conn_conf; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 size_t FUNC_3 (struct pdu*) ;
 void FUNC_4 (struct pdu*) ;
 int FUNC_5 (struct pdu*,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,struct iovec*,int) ;

void
FUNC_8(struct pdu *VAR_0)
{
 struct connection *VAR_1;
 ssize_t VAR_2, VAR_3;
 size_t VAR_4;
 uint32_t VAR_5 = 0;
 struct iovec VAR_6[3];
 int VAR_7;

 VAR_1 = VAR_0->pdu_connection;





 FUNC_0(VAR_1->conn_conf.isc_iser == 0);

 FUNC_5(VAR_0, VAR_0->pdu_data_len);
 VAR_6[0].iov_base = VAR_0->pdu_bhs;
 VAR_6[0].iov_len = sizeof(*VAR_0->pdu_bhs);
 VAR_3 = VAR_6[0].iov_len;
 VAR_7 = 1;

 if (VAR_0->pdu_data_len > 0) {
  VAR_6[1].iov_base = VAR_0->pdu_data;
  VAR_6[1].iov_len = VAR_0->pdu_data_len;
  VAR_3 += VAR_6[1].iov_len;
  VAR_7 = 2;

  VAR_4 = FUNC_3(VAR_0);
  if (VAR_4 > 0) {
   FUNC_0(VAR_4 < sizeof(VAR_5));
   VAR_6[2].iov_base = &VAR_5;
   VAR_6[2].iov_len = VAR_4;
   VAR_3 += VAR_6[2].iov_len;
   VAR_7 = 3;
  }
 }

 VAR_2 = FUNC_7(VAR_1->conn_socket, VAR_6, VAR_7);
 if (VAR_2 < 0) {
  if (FUNC_6())
   FUNC_2(1, "exiting due to timeout");
  FUNC_1(1, "writev");
 }
 if (VAR_2 != VAR_3)
  FUNC_2(1, "short write");
}
