
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint32_t ;
struct mfi_evt_log_state {long newest_seq_num; long oldest_seq_num; long clear_seq_num; long shutdown_seq_num; long boot_seq_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 long FUNC_1 (char*,char**,int ) ;

__attribute__((used)) static int
FUNC_2(struct mfi_evt_log_state *VAR_2, char *VAR_3, uint32_t *VAR_4)
{
 char *VAR_5;
 long VAR_6;

 if (FUNC_0(VAR_3, "newest") == 0) {
  *VAR_4 = VAR_2->newest_seq_num;
  return (0);
 }
 if (FUNC_0(VAR_3, "oldest") == 0) {
  *VAR_4 = VAR_2->oldest_seq_num;
  return (0);
 }
 if (FUNC_0(VAR_3, "clear") == 0) {
  *VAR_4 = VAR_2->clear_seq_num;
  return (0);
 }
 if (FUNC_0(VAR_3, "shutdown") == 0) {
  *VAR_4 = VAR_2->shutdown_seq_num;
  return (0);
 }
 if (FUNC_0(VAR_3, "boot") == 0) {
  *VAR_4 = VAR_2->boot_seq_num;
  return (0);
 }
 VAR_6 = FUNC_1(VAR_3, &VAR_5, 0);
 if (*VAR_5 != '\0' || VAR_6 < 0) {
  VAR_1 = VAR_0;
  return (-1);
 }
 *VAR_4 = VAR_6;
 return (0);
}
