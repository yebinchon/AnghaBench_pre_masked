
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 char* FUNC_1 (int ) ;
__attribute__((used)) static inline char *FUNC_2(int VAR_0)
{

 static char *VAR_1[] = {
  [134] = "SDP_MID_HELLO",
  [133] = "SDP_MID_HELLO_ACK",
  [139] = "SDP_MID_ABORT",
  [135] = "SDP_MID_DISCONN",
  [131] = "SDP_MID_SENDSM",
  [132] = "SDP_MID_RDMARDCOMPL",
  [128] = "SDP_MID_SRCAVAIL_CANCEL",
  [138] = "SDP_MID_CHRCVBUF",
  [137] = "SDP_MID_CHRCVBUF_ACK",
  [136] = "SDP_MID_DATA",
  [129] = "SDP_MID_SRCAVAIL",
  [130] = "SDP_MID_SINKAVAIL",
 };

 if (VAR_0 >= FUNC_0(VAR_1))
  return ((void*)0);

 return VAR_1[VAR_0];
}
