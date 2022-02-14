
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmpbuf ;
struct TYPE_5__ {int Word; } ;
struct TYPE_6__ {int IOCCapabilities; int MsgVersion; int MsgLength; int Function; int HeaderVersion; int IOCNumber; int MsgFlags; int VP_ID; int VF_ID; int IOCExceptions; int IOCStatus; int IOCLogInfo; int MaxChainDepth; int WhoInit; int NumberOfPorts; int MaxMSIxVectors; int RequestCredit; int ProductID; int IOCRequestFrameSize; int MaxInitiators; int MaxTargets; int MaxSasExpanders; int MaxEnclosures; int ProtocolFlags; int HighPriorityCredit; int MaxReplyDescriptorPostQueueDepth; int ReplyFrameSize; int MaxVolumes; int MaxDevHandle; int MaxPersistentEntries; int MinDevHandle; TYPE_1__ FWVersion; } ;
typedef TYPE_2__ MPI2_IOC_FACTS_REPLY ;


 char* VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,char*,char*,int) ;
 int VAR_2 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(int VAR_3, char **VAR_4)
{
 MPI2_IOC_FACTS_REPLY *VAR_5;
 char VAR_6[128];
 int VAR_7, VAR_8;

 VAR_8 = FUNC_4(VAR_2);
 if (VAR_8 < 0) {
  VAR_7 = VAR_1;
  FUNC_7("mps_open");
  return (VAR_7);
 }

 if ((VAR_5 = FUNC_3(VAR_8)) == ((void*)0)) {
  FUNC_6("could not get controller IOCFacts\n");
  FUNC_1(VAR_8);
  return (VAR_1);
 }






 FUNC_0(VAR_6, sizeof(VAR_6));
 FUNC_5(VAR_5->IOCCapabilities, "\3ScsiTaskFull" "\4DiagTrace" "\5SnapBuf" "\6ExtBuf" "\7EEDP" "\10BiDirTarg" "\11Multicast" "\14TransRetry" "\15IR" "\16EventReplay" "\17RaidAccel" "\20MSIXIndex" "\21HostDisc" "\22FastPath" "\23RDPQArray" "\24AtomicReqDesc" "\25PCIeSRIOV", VAR_6, sizeof(VAR_6));

 FUNC_6("          MsgVersion: %02d.%02d\n",
     VAR_5->MsgVersion >> 8, VAR_5->MsgVersion & 0xff);
 FUNC_6("           MsgLength: %d\n", VAR_5->MsgLength);
 FUNC_6("            Function: 0x%x\n", VAR_5->Function);
 FUNC_6("       HeaderVersion: %02d,%02d\n",
     VAR_5->HeaderVersion >> 8, VAR_5->HeaderVersion & 0xff);
 FUNC_6("           IOCNumber: %d\n", VAR_5->IOCNumber);
 FUNC_6("            MsgFlags: 0x%x\n", VAR_5->MsgFlags);
 FUNC_6("               VP_ID: %d\n", VAR_5->VP_ID);
 FUNC_6("               VF_ID: %d\n", VAR_5->VF_ID);
 FUNC_6("       IOCExceptions: %d\n", VAR_5->IOCExceptions);
 FUNC_6("           IOCStatus: %d\n", VAR_5->IOCStatus);
 FUNC_6("          IOCLogInfo: 0x%x\n", VAR_5->IOCLogInfo);
 FUNC_6("       MaxChainDepth: %d\n", VAR_5->MaxChainDepth);
 FUNC_6("             WhoInit: 0x%x\n", VAR_5->WhoInit);
 FUNC_6("       NumberOfPorts: %d\n", VAR_5->NumberOfPorts);
 FUNC_6("      MaxMSIxVectors: %d\n", VAR_5->MaxMSIxVectors);
 FUNC_6("       RequestCredit: %d\n", VAR_5->RequestCredit);
 FUNC_6("           ProductID: 0x%x\n", VAR_5->ProductID);
 FUNC_6("     IOCCapabilities: 0x%x %s\n", VAR_5->IOCCapabilities,
     VAR_6);
 FUNC_6("           FWVersion: 0x%08x\n", VAR_5->FWVersion.Word);
 FUNC_6(" IOCRequestFrameSize: %d\n", VAR_5->IOCRequestFrameSize);
 FUNC_6("       MaxInitiators: %d\n", VAR_5->MaxInitiators);
 FUNC_6("          MaxTargets: %d\n", VAR_5->MaxTargets);
 FUNC_6("     MaxSasExpanders: %d\n", VAR_5->MaxSasExpanders);
 FUNC_6("       MaxEnclosures: %d\n", VAR_5->MaxEnclosures);

 FUNC_0(VAR_6, sizeof(VAR_6));
 FUNC_5(VAR_5->ProtocolFlags,
     "\4NvmeDevices\2ScsiTarget\1ScsiInitiator", VAR_6, sizeof(VAR_6));
 FUNC_6("       ProtocolFlags: 0x%x %s\n", VAR_5->ProtocolFlags, VAR_6);
 FUNC_6("  HighPriorityCredit: %d\n", VAR_5->HighPriorityCredit);
 FUNC_6("MaxRepDescPostQDepth: %d\n",
     VAR_5->MaxReplyDescriptorPostQueueDepth);
 FUNC_6("      ReplyFrameSize: %d\n", VAR_5->ReplyFrameSize);
 FUNC_6("          MaxVolumes: %d\n", VAR_5->MaxVolumes);
 FUNC_6("        MaxDevHandle: %d\n", VAR_5->MaxDevHandle);
 FUNC_6("MaxPersistentEntries: %d\n", VAR_5->MaxPersistentEntries);
 FUNC_6("        MinDevHandle: %d\n", VAR_5->MinDevHandle);

 FUNC_2(VAR_5);
 return (0);
}
