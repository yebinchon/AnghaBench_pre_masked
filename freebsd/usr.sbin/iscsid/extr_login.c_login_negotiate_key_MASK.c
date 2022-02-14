
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_session_limits {int isl_max_send_data_segment_length; int isl_max_recv_data_segment_length; int isl_max_burst_length; int isl_first_burst_length; } ;
struct TYPE_2__ {int isc_iser; } ;
struct connection {int conn_initial_r2t; int conn_immediate_data; int conn_max_send_data_segment_length; int conn_max_recv_data_segment_length; int conn_max_burst_length; int conn_first_burst_length; TYPE_1__ conn_conf; void* conn_data_digest; void* conn_header_digest; int conn_target_alias; struct iscsi_session_limits conn_limits; } ;


 void* VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*,char*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (char const*,int *,int) ;

__attribute__((used)) static void
FUNC_7(struct connection *VAR_1, const char *VAR_2,
    const char *VAR_3)
{
 struct iscsi_session_limits *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = &VAR_1->conn_limits;
 if (FUNC_4(VAR_2, "TargetAlias") == 0) {
  FUNC_5(VAR_1->conn_target_alias, VAR_3,
      sizeof(VAR_1->conn_target_alias));
 } else if (FUNC_4(VAR_3, "Irrelevant") == 0) {

 } else if (FUNC_4(VAR_2, "HeaderDigest") == 0) {
  VAR_5 = FUNC_3(VAR_3, "CRC32C", "None");
  switch (VAR_5) {
  case 1:
   FUNC_0("target prefers CRC32C "
       "for header digest; we'll use it");
   VAR_1->conn_header_digest = VAR_0;
   break;
  case 2:
   FUNC_0("target prefers not to do "
       "header digest; we'll comply");
   break;
  default:
   FUNC_2("target sent unrecognized "
       "HeaderDigest value \"%s\"; will use None", VAR_3);
   break;
  }
 } else if (FUNC_4(VAR_2, "DataDigest") == 0) {
  VAR_5 = FUNC_3(VAR_3, "CRC32C", "None");
  switch (VAR_5) {
  case 1:
   FUNC_0("target prefers CRC32C "
       "for data digest; we'll use it");
   VAR_1->conn_data_digest = VAR_0;
   break;
  case 2:
   FUNC_0("target prefers not to do "
       "data digest; we'll comply");
   break;
  default:
   FUNC_2("target sent unrecognized "
       "DataDigest value \"%s\"; will use None", VAR_3);
   break;
  }
 } else if (FUNC_4(VAR_2, "MaxConnections") == 0) {

 } else if (FUNC_4(VAR_2, "InitialR2T") == 0) {
  if (FUNC_4(VAR_3, "Yes") == 0)
   VAR_1->conn_initial_r2t = 1;
  else
   VAR_1->conn_initial_r2t = 0;
 } else if (FUNC_4(VAR_2, "ImmediateData") == 0) {
  if (FUNC_4(VAR_3, "Yes") == 0)
   VAR_1->conn_immediate_data = 1;
  else
   VAR_1->conn_immediate_data = 0;
 } else if (FUNC_4(VAR_2, "MaxRecvDataSegmentLength") == 0) {
  VAR_6 = FUNC_6(VAR_3, ((void*)0), 10);
  if (VAR_6 <= 0)
   FUNC_1(1, "received invalid "
       "MaxRecvDataSegmentLength");
  if (VAR_6 > VAR_4->isl_max_send_data_segment_length) {
   FUNC_0("capping max_send_data_segment_length "
       "from %d to %d", VAR_6,
       VAR_4->isl_max_send_data_segment_length);
   VAR_6 = VAR_4->isl_max_send_data_segment_length;
  }
  VAR_1->conn_max_send_data_segment_length = VAR_6;

  VAR_1->conn_max_recv_data_segment_length =
      VAR_4->isl_max_recv_data_segment_length;
 } else if (FUNC_4(VAR_2, "MaxBurstLength") == 0) {
  VAR_6 = FUNC_6(VAR_3, ((void*)0), 10);
  if (VAR_6 <= 0)
   FUNC_1(1, "received invalid MaxBurstLength");
  if (VAR_6 > VAR_4->isl_max_burst_length) {
   FUNC_0("capping MaxBurstLength "
       "from %d to %d", VAR_6, VAR_4->isl_max_burst_length);
   VAR_6 = VAR_4->isl_max_burst_length;
  }
  VAR_1->conn_max_burst_length = VAR_6;
 } else if (FUNC_4(VAR_2, "FirstBurstLength") == 0) {
  VAR_6 = FUNC_6(VAR_3, ((void*)0), 10);
  if (VAR_6 <= 0)
   FUNC_1(1, "received invalid FirstBurstLength");
  if (VAR_6 > VAR_4->isl_first_burst_length) {
   FUNC_0("capping FirstBurstLength "
       "from %d to %d", VAR_6, VAR_4->isl_first_burst_length);
   VAR_6 = VAR_4->isl_first_burst_length;
  }
  VAR_1->conn_first_burst_length = VAR_6;
 } else if (FUNC_4(VAR_2, "DefaultTime2Wait") == 0) {

 } else if (FUNC_4(VAR_2, "DefaultTime2Retain") == 0) {

 } else if (FUNC_4(VAR_2, "MaxOutstandingR2T") == 0) {

 } else if (FUNC_4(VAR_2, "DataPDUInOrder") == 0) {

 } else if (FUNC_4(VAR_2, "DataSequenceInOrder") == 0) {

 } else if (FUNC_4(VAR_2, "ErrorRecoveryLevel") == 0) {

 } else if (FUNC_4(VAR_2, "OFMarker") == 0) {

 } else if (FUNC_4(VAR_2, "IFMarker") == 0) {

 } else if (FUNC_4(VAR_2, "RDMAExtensions") == 0) {
  if (VAR_1->conn_conf.isc_iser == 1 &&
      FUNC_4(VAR_3, "Yes") != 0) {
   FUNC_1(1, "received unsupported RDMAExtensions");
  }
 } else if (FUNC_4(VAR_2, "InitiatorRecvDataSegmentLength") == 0) {
  VAR_6 = FUNC_6(VAR_3, ((void*)0), 10);
  if (VAR_6 <= 0)
   FUNC_1(1, "received invalid "
       "InitiatorRecvDataSegmentLength");
  if ((int)VAR_6 > VAR_4->isl_max_recv_data_segment_length) {
   FUNC_0("capping InitiatorRecvDataSegmentLength "
       "from %d to %d", VAR_6,
       VAR_4->isl_max_recv_data_segment_length);
   VAR_6 = VAR_4->isl_max_recv_data_segment_length;
  }
  VAR_1->conn_max_recv_data_segment_length = VAR_6;
 } else if (FUNC_4(VAR_2, "TargetPortalGroupTag") == 0) {

 } else if (FUNC_4(VAR_2, "TargetRecvDataSegmentLength") == 0) {
  VAR_6 = FUNC_6(VAR_3, ((void*)0), 10);
  if (VAR_6 <= 0) {
   FUNC_1(1,
       "received invalid TargetRecvDataSegmentLength");
  }
  if (VAR_6 > VAR_4->isl_max_send_data_segment_length) {
   FUNC_0("capping TargetRecvDataSegmentLength "
       "from %d to %d", VAR_6,
       VAR_4->isl_max_send_data_segment_length);
   VAR_6 = VAR_4->isl_max_send_data_segment_length;
  }
  VAR_1->conn_max_send_data_segment_length = VAR_6;
 } else {
  FUNC_0("unknown key \"%s\"; ignoring", VAR_2);
 }
}
