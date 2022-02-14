
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cec_msg {int* msg; int len; } ;
struct cec_log_addrs {int** features; int* log_addr; int cec_version; int* all_device_types; } ;
struct cec_adapter {struct cec_log_addrs log_addrs; } ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int const VAR_1 ;

__attribute__((used)) static void FUNC_1(struct cec_adapter *VAR_2,
      struct cec_msg *VAR_3,
      unsigned int VAR_4)
{
 const struct cec_log_addrs *VAR_5 = &VAR_2->log_addrs;
 const u8 *VAR_6 = VAR_5->features[VAR_4];
 bool VAR_7 = 0;
 unsigned int VAR_8;


 VAR_3->msg[0] = (VAR_5->log_addr[VAR_4] << 4) | 0x0f;
 VAR_3->len = 4;
 VAR_3->msg[1] = VAR_0;
 VAR_3->msg[2] = VAR_2->log_addrs.cec_version;
 VAR_3->msg[3] = VAR_5->all_device_types[VAR_4];


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5->features[0]); VAR_8++) {
  VAR_3->msg[VAR_3->len++] = VAR_6[VAR_8];
  if ((VAR_6[VAR_8] & VAR_1) == 0) {
   if (VAR_7)
    break;
   VAR_7 = 1;
  }
 }
}
