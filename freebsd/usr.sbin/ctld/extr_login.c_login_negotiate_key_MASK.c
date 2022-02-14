
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {struct connection* pdu_connection; } ;
struct keys {int dummy; } ;
struct connection {scalar_t__ conn_session_type; int conn_immediate_data; int conn_max_send_data_segment_limit; size_t conn_max_send_data_segment_length; size_t conn_max_recv_data_segment_length; size_t conn_max_recv_data_segment_limit; int conn_max_burst_limit; size_t conn_max_burst_length; int conn_first_burst_limit; size_t conn_first_burst_length; void* conn_data_digest; void* conn_header_digest; int * conn_initiator_alias; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct keys*,char const*,char const*) ;
 int FUNC_3 (struct keys*,char const*,size_t) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char const*,char*,char*) ;
 int FUNC_8 (struct pdu*,int,int) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 size_t FUNC_10 (char const*,int *,int) ;

__attribute__((used)) static void
FUNC_11(struct pdu *VAR_2, const char *VAR_3,
    const char *VAR_4, bool VAR_5, struct keys *VAR_6)
{
 int VAR_7;
 size_t VAR_8;
 struct connection *VAR_9;

 VAR_9 = VAR_2->pdu_connection;

 if (FUNC_9(VAR_3, "InitiatorName") == 0) {
  if (!VAR_5)
   FUNC_5(1, "initiator resent InitiatorName");
 } else if (FUNC_9(VAR_3, "SessionType") == 0) {
  if (!VAR_5)
   FUNC_5(1, "initiator resent SessionType");
 } else if (FUNC_9(VAR_3, "TargetName") == 0) {
  if (!VAR_5)
   FUNC_5(1, "initiator resent TargetName");
 } else if (FUNC_9(VAR_3, "InitiatorAlias") == 0) {
  if (VAR_9->conn_initiator_alias != ((void*)0))
   FUNC_1(VAR_9->conn_initiator_alias);
  VAR_9->conn_initiator_alias = FUNC_0(VAR_4);
 } else if (FUNC_9(VAR_4, "Irrelevant") == 0) {

 } else if (FUNC_9(VAR_3, "HeaderDigest") == 0) {



  if (VAR_9->conn_session_type == VAR_1) {
   FUNC_4("discovery session; digests disabled");
   FUNC_2(VAR_6, VAR_3, "None");
   return;
  }

  VAR_7 = FUNC_7(VAR_4, "CRC32C", "None");
  switch (VAR_7) {
  case 1:
   FUNC_4("initiator prefers CRC32C "
       "for header digest; we'll use it");
   VAR_9->conn_header_digest = VAR_0;
   FUNC_2(VAR_6, VAR_3, "CRC32C");
   break;
  case 2:
   FUNC_4("initiator prefers not to do "
       "header digest; we'll comply");
   FUNC_2(VAR_6, VAR_3, "None");
   break;
  default:
   FUNC_6("initiator sent unrecognized "
       "HeaderDigest value \"%s\"; will use None", VAR_4);
   FUNC_2(VAR_6, VAR_3, "None");
   break;
  }
 } else if (FUNC_9(VAR_3, "DataDigest") == 0) {
  if (VAR_9->conn_session_type == VAR_1) {
   FUNC_4("discovery session; digests disabled");
   FUNC_2(VAR_6, VAR_3, "None");
   return;
  }

  VAR_7 = FUNC_7(VAR_4, "CRC32C", "None");
  switch (VAR_7) {
  case 1:
   FUNC_4("initiator prefers CRC32C "
       "for data digest; we'll use it");
   VAR_9->conn_data_digest = VAR_0;
   FUNC_2(VAR_6, VAR_3, "CRC32C");
   break;
  case 2:
   FUNC_4("initiator prefers not to do "
       "data digest; we'll comply");
   FUNC_2(VAR_6, VAR_3, "None");
   break;
  default:
   FUNC_6("initiator sent unrecognized "
       "DataDigest value \"%s\"; will use None", VAR_4);
   FUNC_2(VAR_6, VAR_3, "None");
   break;
  }
 } else if (FUNC_9(VAR_3, "MaxConnections") == 0) {
  FUNC_2(VAR_6, VAR_3, "1");
 } else if (FUNC_9(VAR_3, "InitialR2T") == 0) {
  FUNC_2(VAR_6, VAR_3, "Yes");
 } else if (FUNC_9(VAR_3, "ImmediateData") == 0) {
  if (VAR_9->conn_session_type == VAR_1) {
   FUNC_4("discovery session; ImmediateData irrelevant");
   FUNC_2(VAR_6, VAR_3, "Irrelevant");
  } else {
   if (FUNC_9(VAR_4, "Yes") == 0) {
    VAR_9->conn_immediate_data = 1;
    FUNC_2(VAR_6, VAR_3, "Yes");
   } else {
    VAR_9->conn_immediate_data = 0;
    FUNC_2(VAR_6, VAR_3, "No");
   }
  }
 } else if (FUNC_9(VAR_3, "MaxRecvDataSegmentLength") == 0) {
  VAR_8 = FUNC_10(VAR_4, ((void*)0), 10);
  if (VAR_8 <= 0) {
   FUNC_8(VAR_2, 0x02, 0x00);
   FUNC_5(1, "received invalid "
       "MaxRecvDataSegmentLength");
  }







  if ((int)VAR_8 > VAR_9->conn_max_send_data_segment_limit) {
   FUNC_4("capping MaxRecvDataSegmentLength "
       "from %zd to %d", VAR_8,
       VAR_9->conn_max_send_data_segment_limit);
   VAR_8 = VAR_9->conn_max_send_data_segment_limit;
  }
  VAR_9->conn_max_send_data_segment_length = VAR_8;
  VAR_9->conn_max_recv_data_segment_length =
      VAR_9->conn_max_recv_data_segment_limit;
  FUNC_3(VAR_6, VAR_3,
      VAR_9->conn_max_recv_data_segment_length);
 } else if (FUNC_9(VAR_3, "MaxBurstLength") == 0) {
  VAR_8 = FUNC_10(VAR_4, ((void*)0), 10);
  if (VAR_8 <= 0) {
   FUNC_8(VAR_2, 0x02, 0x00);
   FUNC_5(1, "received invalid MaxBurstLength");
  }
  if ((int)VAR_8 > VAR_9->conn_max_burst_limit) {
   FUNC_4("capping MaxBurstLength from %zd to %d",
       VAR_8, VAR_9->conn_max_burst_limit);
   VAR_8 = VAR_9->conn_max_burst_limit;
  }
  VAR_9->conn_max_burst_length = VAR_8;
  FUNC_3(VAR_6, VAR_3, VAR_8);
 } else if (FUNC_9(VAR_3, "FirstBurstLength") == 0) {
  VAR_8 = FUNC_10(VAR_4, ((void*)0), 10);
  if (VAR_8 <= 0) {
   FUNC_8(VAR_2, 0x02, 0x00);
   FUNC_5(1, "received invalid FirstBurstLength");
  }
  if ((int)VAR_8 > VAR_9->conn_first_burst_limit) {
   FUNC_4("capping FirstBurstLength from %zd to %d",
       VAR_8, VAR_9->conn_first_burst_limit);
   VAR_8 = VAR_9->conn_first_burst_limit;
  }
  VAR_9->conn_first_burst_length = VAR_8;
  FUNC_3(VAR_6, VAR_3, VAR_8);
 } else if (FUNC_9(VAR_3, "DefaultTime2Wait") == 0) {
  FUNC_2(VAR_6, VAR_3, VAR_4);
 } else if (FUNC_9(VAR_3, "DefaultTime2Retain") == 0) {
  FUNC_2(VAR_6, VAR_3, "0");
 } else if (FUNC_9(VAR_3, "MaxOutstandingR2T") == 0) {
  FUNC_2(VAR_6, VAR_3, "1");
 } else if (FUNC_9(VAR_3, "DataPDUInOrder") == 0) {
  FUNC_2(VAR_6, VAR_3, "Yes");
 } else if (FUNC_9(VAR_3, "DataSequenceInOrder") == 0) {
  FUNC_2(VAR_6, VAR_3, "Yes");
 } else if (FUNC_9(VAR_3, "ErrorRecoveryLevel") == 0) {
  FUNC_2(VAR_6, VAR_3, "0");
 } else if (FUNC_9(VAR_3, "OFMarker") == 0) {
  FUNC_2(VAR_6, VAR_3, "No");
 } else if (FUNC_9(VAR_3, "IFMarker") == 0) {
  FUNC_2(VAR_6, VAR_3, "No");
 } else if (FUNC_9(VAR_3, "iSCSIProtocolLevel") == 0) {
  VAR_8 = FUNC_10(VAR_4, ((void*)0), 10);
  if (VAR_8 > 2)
   VAR_8 = 2;
  FUNC_3(VAR_6, VAR_3, VAR_8);
 } else {
  FUNC_4("unknown key \"%s\"; responding "
      "with NotUnderstood", VAR_3);
  FUNC_2(VAR_6, VAR_3, "NotUnderstood");
 }
}
