
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udp_message {int our_ip_idx; } ;
struct process_id {scalar_t__ ip; } ;
struct TYPE_2__ {scalar_t__ ip; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*,int) ;

int FUNC_2 ( struct process_id *VAR_5, int VAR_6, struct udp_message *VAR_7) {
  FUNC_1 (3, "default_udp_check_perm: crypto_flags = 0x%02x\n", VAR_6 & 0xff);

  int VAR_8 = VAR_2;
  int VAR_9 = VAR_6 & 127;
  if (VAR_9 != VAR_4 && VAR_9 != VAR_3) {
    FUNC_1 (1, "unknown crypto protocol %d\n", VAR_9);
    return -1;
  }
  if (VAR_5->ip != VAR_0.ip) {
    VAR_8 = 0;
  }
  if (!(VAR_6 & 128)) {
    VAR_8 = 0;
  }
  if (VAR_7->our_ip_idx != 1 && VAR_7->our_ip_idx != 2) {
    VAR_8 = 0;
  }
  int VAR_10 = (VAR_6 >> 8) & 0xfff;


  int VAR_11 = VAR_1;
  if (VAR_9 == VAR_4) {
    VAR_11 = 0;
  }

  if ((VAR_10 != (FUNC_0 () & 0xfff)) ) {
    VAR_11 = 0;
  }
  FUNC_1 (3, "check_perm returns %d\n", VAR_8 | VAR_11);
  return VAR_8 | VAR_11;
}
