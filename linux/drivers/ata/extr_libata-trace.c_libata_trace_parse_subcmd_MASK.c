
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*) ;
 int FUNC_2 (struct trace_seq*,int ) ;

const char *
FUNC_3(struct trace_seq *VAR_0, unsigned char VAR_1,
     unsigned char VAR_2, unsigned char VAR_3)
{
 const char *VAR_4 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 145:
  switch (VAR_3 & 0x5f) {
  case 140:
   FUNC_1(VAR_0, " READ_LOG_DMA_EXT");
   break;
  case 139:
   FUNC_1(VAR_0, " ZAC_MGMT_IN");
   break;
  }
  break;
 case 144:
  switch (VAR_3 & 0x5f) {
  case 137:
   FUNC_1(VAR_0, " WRITE_LOG_DMA_EXT");
   break;
  case 138:
   FUNC_1(VAR_0, " DATASET_MANAGEMENT");
   break;
  }
  break;
 case 143:
  switch (VAR_2) {
  case 136:
   FUNC_1(VAR_0, " ABORT_QUEUE");
   break;
  case 135:
   FUNC_1(VAR_0, " SET_FEATURES");
   break;
  case 133:
   FUNC_1(VAR_0, " ZERO_EXT");
   break;
  case 134:
   FUNC_1(VAR_0, " ZAC_MGMT_OUT");
   break;
  }
  break;
 case 142:
  switch (VAR_2) {
  case 132:
   FUNC_1(VAR_0, " REPORT_ZONES");
   break;
  }
  break;
 case 141:
  switch (VAR_2) {
  case 131:
   FUNC_1(VAR_0, " CLOSE_ZONE");
   break;
  case 130:
   FUNC_1(VAR_0, " FINISH_ZONE");
   break;
  case 129:
   FUNC_1(VAR_0, " OPEN_ZONE");
   break;
  case 128:
   FUNC_1(VAR_0, " RESET_WRITE_POINTER");
   break;
  }
  break;
 }
 FUNC_2(VAR_0, 0);

 return VAR_4;
}
