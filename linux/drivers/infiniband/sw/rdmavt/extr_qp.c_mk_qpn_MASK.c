
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qpn_table {struct rvt_qpn_map* map; } ;
struct rvt_qpn_map {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned FUNC_0(struct rvt_qpn_table *VAR_1,
         struct rvt_qpn_map *VAR_2, unsigned VAR_3)
{
 return (VAR_2 - VAR_1->map) * VAR_0 + VAR_3;
}
