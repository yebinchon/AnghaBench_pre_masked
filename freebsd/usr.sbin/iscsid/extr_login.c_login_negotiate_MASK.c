
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pdu {scalar_t__ pdu_bhs; } ;
struct keys {int * keys_values; int ** keys_names; } ;
struct iscsi_session_limits {int isl_max_recv_data_segment_length; int isl_max_send_data_segment_length; int isl_first_burst_length; int isl_max_burst_length; } ;
struct iscsi_bhs_login_response {int bhslr_flags; } ;
struct TYPE_2__ {scalar_t__ isc_discovery; scalar_t__ isc_header_digest; scalar_t__ isc_data_digest; int isc_iser; int isc_offload; } ;
struct connection {TYPE_1__ conn_conf; struct iscsi_session_limits conn_limits; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct keys*,char*,char*) ;
 int FUNC_1 (struct keys*,char*,int ) ;
 int FUNC_2 (struct keys*) ;
 int FUNC_3 (struct keys*,struct pdu*) ;
 struct keys* FUNC_4 () ;
 int FUNC_5 (struct keys*,struct pdu*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct connection*,int *,int ) ;
 struct pdu* FUNC_9 (struct connection*,int ) ;
 scalar_t__ FUNC_10 (struct pdu*) ;
 struct pdu* FUNC_11 (struct connection*) ;
 int FUNC_12 (struct pdu*) ;
 int FUNC_13 (struct pdu*) ;

__attribute__((used)) static void
FUNC_14(struct connection *VAR_4)
{
 struct pdu *VAR_5, *VAR_6;
 struct keys *VAR_7, *VAR_8;
 struct iscsi_bhs_login_response *VAR_9;
 int VAR_10, VAR_11 = 0;
 struct iscsi_session_limits *VAR_12;

 FUNC_6("beginning operational parameter negotiation");
 VAR_5 = FUNC_9(VAR_4, VAR_2);
 VAR_7 = FUNC_4();

 VAR_12 = &VAR_4->conn_limits;
 FUNC_6("Limits for offload \"%s\" are "
     "MaxRecvDataSegment=%d, max_send_dsl=%d, "
     "MaxBurstLength=%d, FirstBurstLength=%d",
     VAR_4->conn_conf.isc_offload, VAR_12->isl_max_recv_data_segment_length,
     VAR_12->isl_max_send_data_segment_length, VAR_12->isl_max_burst_length,
     VAR_12->isl_first_burst_length);




 if (VAR_4->conn_conf.isc_discovery == 0) {
  if (VAR_4->conn_conf.isc_header_digest != 0)
   FUNC_0(VAR_7, "HeaderDigest", "CRC32C");
  else
   FUNC_0(VAR_7, "HeaderDigest", "None");
  if (VAR_4->conn_conf.isc_data_digest != 0)
   FUNC_0(VAR_7, "DataDigest", "CRC32C");
  else
   FUNC_0(VAR_7, "DataDigest", "None");

  FUNC_0(VAR_7, "ImmediateData", "Yes");
  FUNC_1(VAR_7, "MaxBurstLength",
      VAR_12->isl_max_burst_length);
  FUNC_1(VAR_7, "FirstBurstLength",
      VAR_12->isl_first_burst_length);
  FUNC_0(VAR_7, "InitialR2T", "Yes");
  FUNC_0(VAR_7, "MaxOutstandingR2T", "1");
  if (VAR_4->conn_conf.isc_iser == 1) {
   FUNC_1(VAR_7, "InitiatorRecvDataSegmentLength",
       VAR_12->isl_max_recv_data_segment_length);
   FUNC_1(VAR_7, "TargetRecvDataSegmentLength",
       VAR_12->isl_max_send_data_segment_length);
   FUNC_0(VAR_7, "RDMAExtensions", "Yes");
  } else {
   FUNC_1(VAR_7, "MaxRecvDataSegmentLength",
       VAR_12->isl_max_recv_data_segment_length);
  }
 } else {
  FUNC_0(VAR_7, "HeaderDigest", "None");
  FUNC_0(VAR_7, "DataDigest", "None");
  FUNC_1(VAR_7, "MaxRecvDataSegmentLength",
      VAR_12->isl_max_recv_data_segment_length);
 }

 FUNC_0(VAR_7, "DefaultTime2Wait", "0");
 FUNC_0(VAR_7, "DefaultTime2Retain", "0");
 FUNC_0(VAR_7, "ErrorRecoveryLevel", "0");
 FUNC_5(VAR_7, VAR_5);
 FUNC_2(VAR_7);
 VAR_7 = ((void*)0);
 FUNC_13(VAR_5);
 FUNC_12(VAR_5);
 VAR_5 = ((void*)0);

 VAR_6 = FUNC_11(VAR_4);
 VAR_8 = FUNC_4();
 FUNC_3(VAR_8, VAR_6);
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (VAR_8->keys_names[VAR_10] == ((void*)0))
   break;

  FUNC_8(VAR_4,
      VAR_8->keys_names[VAR_10], VAR_8->keys_values[VAR_10]);
 }

 FUNC_2(VAR_8);
 VAR_8 = ((void*)0);

 for (;;) {
  VAR_9 = (struct iscsi_bhs_login_response *)VAR_6->pdu_bhs;
  if ((VAR_9->bhslr_flags & VAR_0) != 0)
   break;

  VAR_11++;
  if (VAR_11 > 5) {
   FUNC_7("received login response "
       "without the \"T\" flag too many times; giving up");
   break;
  }

  FUNC_6("received login response "
      "without the \"T\" flag; sending another request");

  FUNC_12(VAR_6);

  VAR_5 = FUNC_9(VAR_4,
      VAR_2);
  FUNC_13(VAR_5);
  FUNC_12(VAR_5);

  VAR_6 = FUNC_11(VAR_4);
 }

 if (FUNC_10(VAR_6) != VAR_1)
  FUNC_7("received final login response with wrong NSG 0x%x",
      FUNC_10(VAR_6));
 FUNC_12(VAR_6);

 FUNC_6("operational parameter negotiation done; "
     "transitioning to Full Feature phase");
}
