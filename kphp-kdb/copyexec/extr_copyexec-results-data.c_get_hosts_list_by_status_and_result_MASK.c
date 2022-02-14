
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const) ;
 char* FUNC_1 (unsigned long long,int,unsigned int,int) ;
 int FUNC_2 (int,char*,...) ;

char *FUNC_3 (unsigned long long VAR_0, int VAR_1, const char *const VAR_2, unsigned VAR_3) {
  FUNC_2 (3, "get_hosts_list_by_status_and_result (volume_id:%llu, transaction_id: %d, status: %s, result:0x%x)\n", VAR_0, VAR_1, VAR_2, VAR_3);
  int VAR_4 = FUNC_0 (VAR_2);
  if (VAR_4 < 0) {
    FUNC_2 (3, "get_hosts_list_by_status_and_result: unknown status \"%s\"\n", VAR_2);
    return ((void*)0);
  }
  return FUNC_1 (VAR_0, VAR_1, (((unsigned) VAR_4) << 28) | VAR_3, 0xffffffffU);
}
