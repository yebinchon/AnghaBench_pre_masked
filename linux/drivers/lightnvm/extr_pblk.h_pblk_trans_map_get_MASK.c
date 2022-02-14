
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ppa_addr {int dummy; } ;
struct pblk {int addrf_len; scalar_t__ trans_map; } ;
typedef size_t sector_t ;


 struct ppa_addr FUNC_0 (struct pblk*,int ) ;

__attribute__((used)) static inline struct ppa_addr FUNC_1(struct pblk *VAR_0,
        sector_t VAR_1)
{
 struct ppa_addr VAR_2;

 if (VAR_0->addrf_len < 32) {
  u32 *VAR_3 = (u32 *)VAR_0->trans_map;

  VAR_2 = FUNC_0(VAR_0, VAR_3[VAR_1]);
 } else {
  struct ppa_addr *VAR_4 = (struct ppa_addr *)VAR_0->trans_map;

  VAR_2 = VAR_4[VAR_1];
 }

 return VAR_2;
}
