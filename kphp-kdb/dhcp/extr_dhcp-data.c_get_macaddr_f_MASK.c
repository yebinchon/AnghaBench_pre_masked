
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {long long macaddr; struct TYPE_5__* hnext; } ;
typedef TYPE_1__ dhcp_map_macaddr_ip_en_t ;


 unsigned long long VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static dhcp_map_macaddr_ip_en_t *FUNC_2 (long long VAR_3, int VAR_4) {
  int VAR_5 = ((unsigned long long) VAR_3) % VAR_0;
  FUNC_0 (VAR_5 >= 0 && VAR_5 < VAR_0);
  dhcp_map_macaddr_ip_en_t **VAR_6 = VAR_1 + VAR_5, *VAR_7;
  while (*VAR_6) {
    VAR_7 = *VAR_6;
    if (VAR_3 == VAR_7->macaddr) {
      *VAR_6 = VAR_7->hnext;
      if (VAR_4 >= 0) {
        VAR_7->hnext = VAR_1[VAR_5];
        VAR_1[VAR_5] = VAR_7;
      }
      return VAR_7;
    }
    VAR_6 = &VAR_7->hnext;
  }
  if (VAR_4 > 0) {
    VAR_2++;
    VAR_7 = FUNC_1 (sizeof (dhcp_map_macaddr_ip_en_t));
    VAR_7->macaddr = VAR_3;
    VAR_7->hnext = VAR_1[VAR_5];
    return VAR_1[VAR_5] = VAR_7;
  }
  return ((void*)0);
}
