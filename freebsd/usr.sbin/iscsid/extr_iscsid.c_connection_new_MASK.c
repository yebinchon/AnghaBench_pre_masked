
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session_limits {int isl_max_recv_data_segment_length; int isl_max_send_data_segment_length; int isl_max_burst_length; int isl_first_burst_length; char* isc_initiator_addr; char* isc_target_addr; scalar_t__ isc_iser; } ;
struct iscsi_daemon_request {int idr_limits; int idr_tsih; int idr_isid; int idr_conf; int idr_session_id; } ;
struct iscsi_daemon_connect {int idc_iser; int idc_to_addrlen; int idc_to_addr; int idc_from_addrlen; int idc_from_addr; int idc_protocol; int idc_socktype; int idc_domain; int idc_session_id; } ;
struct connection {int conn_initial_r2t; int conn_immediate_data; int conn_max_recv_data_segment_length; int conn_max_send_data_segment_length; int conn_max_burst_length; int conn_first_burst_length; int conn_iscsi_fd; scalar_t__ conn_socket; struct iscsi_session_limits conn_conf; int conn_session_id; struct iscsi_session_limits conn_limits; int conn_tsih; struct iscsi_session_limits conn_isid; void* conn_data_digest; void* conn_header_digest; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; } ;
typedef int sockbuf ;
typedef int idc ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 struct connection* FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct connection*,char*) ;
 int FUNC_4 (int,int ,struct iscsi_daemon_connect*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct iscsi_session_limits*,int *,int) ;
 int FUNC_10 (struct iscsi_daemon_connect*,int ,int) ;
 int FUNC_11 (struct connection*,char const*,struct addrinfo**,int) ;
 int FUNC_12 (scalar_t__,int ,int ,int*,int) ;
 scalar_t__ FUNC_13 (int ,int ,int ) ;
 char* FUNC_14 (int ) ;

__attribute__((used)) static struct connection *
FUNC_15(int VAR_7, const struct iscsi_daemon_request *VAR_8)
{
 struct connection *VAR_9;
 struct iscsi_session_limits *VAR_10;
 struct addrinfo *VAR_11, *VAR_12;
 const char *VAR_13, *VAR_14;



 int VAR_15, VAR_16;

 VAR_9 = FUNC_1(1, sizeof(*VAR_9));
 if (VAR_9 == ((void*)0))
  FUNC_6(1, "calloc");




 VAR_9->conn_header_digest = VAR_0;
 VAR_9->conn_data_digest = VAR_0;
 VAR_9->conn_initial_r2t = 1;
 VAR_9->conn_immediate_data = 1;
 VAR_9->conn_max_recv_data_segment_length = 8192;
 VAR_9->conn_max_send_data_segment_length = 8192;
 VAR_9->conn_max_burst_length = 262144;
 VAR_9->conn_first_burst_length = 65536;
 VAR_9->conn_iscsi_fd = VAR_7;

 VAR_9->conn_session_id = VAR_8->idr_session_id;
 FUNC_9(&VAR_9->conn_conf, &VAR_8->idr_conf, sizeof(VAR_9->conn_conf));
 FUNC_9(&VAR_9->conn_isid, &VAR_8->idr_isid, sizeof(VAR_9->conn_isid));
 VAR_9->conn_tsih = VAR_8->idr_tsih;
 VAR_10 = &VAR_9->conn_limits;
 FUNC_9(VAR_10, &VAR_8->idr_limits, sizeof(*VAR_10));
 if (VAR_10->isl_max_recv_data_segment_length == 0)
  VAR_10->isl_max_recv_data_segment_length = (1 << 24) - 1;
 if (VAR_10->isl_max_send_data_segment_length == 0)
  VAR_10->isl_max_send_data_segment_length =
      VAR_10->isl_max_recv_data_segment_length;
 if (VAR_10->isl_max_burst_length == 0)
  VAR_10->isl_max_burst_length = (1 << 24) - 1;
 if (VAR_10->isl_first_burst_length == 0)
  VAR_10->isl_first_burst_length = (1 << 24) - 1;
 if (VAR_10->isl_first_burst_length > VAR_10->isl_max_burst_length)
  VAR_10->isl_first_burst_length = VAR_10->isl_max_burst_length;






 if (VAR_9->conn_max_send_data_segment_length >
     VAR_10->isl_max_send_data_segment_length) {
  VAR_9->conn_max_send_data_segment_length =
      VAR_10->isl_max_send_data_segment_length;
 }

 VAR_13 = VAR_9->conn_conf.isc_initiator_addr;
 VAR_14 = VAR_9->conn_conf.isc_target_addr;

 if (VAR_13[0] != '\0')
  FUNC_11(VAR_9, VAR_13, &VAR_11, 1);
 else
  VAR_11 = ((void*)0);

 FUNC_11(VAR_9, VAR_14, &VAR_12, 0);
 if (VAR_9->conn_conf.isc_iser) {
  FUNC_3(VAR_9, "iSER not supported");
  FUNC_7(1, "iscsid(8) compiled without ICL_KERNEL_PROXY "
      "does not support iSER");
 }

 VAR_9->conn_socket = FUNC_13(VAR_12->ai_family, VAR_12->ai_socktype,
     VAR_12->ai_protocol);
 if (VAR_9->conn_socket < 0) {
  FUNC_3(VAR_9, FUNC_14(VAR_6));
  FUNC_6(1, "failed to create socket for %s", VAR_13);
 }
 VAR_16 = VAR_2;
 if (FUNC_12(VAR_9->conn_socket, VAR_3, VAR_4,
     &VAR_16, sizeof(VAR_16)) == -1)
  FUNC_8("setsockopt(SO_RCVBUF) failed");
 VAR_16 = VAR_2;
 if (FUNC_12(VAR_9->conn_socket, VAR_3, VAR_5,
     &VAR_16, sizeof(VAR_16)) == -1)
  FUNC_8("setsockopt(SO_SNDBUF) failed");
 if (VAR_11 != ((void*)0)) {
  VAR_15 = FUNC_0(VAR_9->conn_socket, VAR_11->ai_addr,
      VAR_11->ai_addrlen);
  if (VAR_15 != 0) {
   FUNC_3(VAR_9, FUNC_14(VAR_6));
   FUNC_6(1, "failed to bind to %s", VAR_13);
  }
 }
 FUNC_5("connecting to %s", VAR_14);
 VAR_15 = FUNC_2(VAR_9->conn_socket, VAR_12->ai_addr, VAR_12->ai_addrlen);
 if (VAR_15 != 0) {
  FUNC_3(VAR_9, FUNC_14(VAR_6));
  FUNC_6(1, "failed to connect to %s", VAR_14);
 }

 return (VAR_9);
}
