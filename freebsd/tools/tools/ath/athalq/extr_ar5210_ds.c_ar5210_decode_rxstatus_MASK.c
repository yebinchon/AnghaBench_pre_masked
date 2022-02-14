
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tstamp_usec; int tstamp_sec; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;
struct ar5210_desc {int ds_link; int ds_data; int ds_status0; int ds_status1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ar5210_desc*,int *,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(struct if_ath_alq_payload *VAR_12)
{
 struct ar5210_desc VAR_13;


 FUNC_4(&VAR_13, &VAR_12->payload, sizeof(struct ar5210_desc));

 FUNC_5("[%u.%06u] [%llu] RXSTATUS\n",
     (unsigned int) FUNC_2(VAR_12->hdr.tstamp_sec),
     (unsigned int) FUNC_2(VAR_12->hdr.tstamp_usec),
     (unsigned long long) FUNC_3(VAR_12->hdr.threadid));

 FUNC_5("  link=0x%08x, data=0x%08x\n",
     VAR_13.ds_link,
     VAR_13.ds_data);


 FUNC_5("  DataLen=%d, ArMore=%d, RSSI=%d, RcvAntenna=0x%x\n",
     VAR_13.ds_status0 & VAR_1,
     FUNC_0(VAR_13.ds_status0, VAR_7),
     FUNC_1(VAR_13.ds_status0, VAR_10),
     FUNC_0(VAR_13.ds_status0, VAR_9));


 FUNC_5("  RxDone=%d, RxFrameOk=%d, CrcErr=%d, DecryptCrcErr=%d\n",
     FUNC_0(VAR_13.ds_status1, VAR_3),
     FUNC_0(VAR_13.ds_status1, VAR_4),
     FUNC_0(VAR_13.ds_status1, VAR_0),
     FUNC_0(VAR_13.ds_status1, VAR_2));
 FUNC_5("  KeyIdxValid=%d\n",
     FUNC_0(VAR_13.ds_status1, VAR_6));

 FUNC_5("  PhyErrCode=0x%02x\n",
     FUNC_1(VAR_13.ds_status1, VAR_8));

 FUNC_5("  KeyMiss=%d\n",
     FUNC_0(VAR_13.ds_status1, VAR_5));

 FUNC_5("  Timetamp: 0x%05x\n",
     FUNC_1(VAR_13.ds_status1, VAR_11));

 FUNC_5("\n ------\n");
}
