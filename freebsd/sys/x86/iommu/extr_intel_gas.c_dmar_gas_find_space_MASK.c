
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int u_int ;
struct dmar_map_entry {scalar_t__ flags; } ;
struct dmar_gas_match_args {int size; int offset; struct dmar_map_entry* entry; int gas_flags; struct bus_dma_tag_common const* common; struct dmar_domain* domain; } ;
struct dmar_domain {scalar_t__ end; int rb_root; } ;
struct bus_dma_tag_common {scalar_t__ lowaddr; scalar_t__ highaddr; } ;
typedef int dmar_gaddr_t ;


 int FUNC_0 (struct dmar_domain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dmar_gas_match_args*,int ) ;
 int FUNC_4 (struct dmar_gas_match_args*) ;

__attribute__((used)) static int
FUNC_5(struct dmar_domain *VAR_2,
    const struct bus_dma_tag_common *VAR_3, dmar_gaddr_t VAR_4,
    int VAR_5, u_int VAR_6, struct dmar_map_entry *VAR_7)
{
 struct dmar_gas_match_args VAR_8;
 int VAR_9;

 FUNC_0(VAR_2);
 FUNC_1(VAR_7->flags == 0, ("dirty entry %p %p", VAR_2, VAR_7));
 FUNC_1((VAR_4 & VAR_0) == 0, ("size %jx", (uintmax_t)VAR_4));

 VAR_8.domain = VAR_2;
 VAR_8.size = VAR_4;
 VAR_8.offset = VAR_5;
 VAR_8.common = VAR_3;
 VAR_8.gas_flags = VAR_6;
 VAR_8.entry = VAR_7;


 if (VAR_3->lowaddr > 0) {
  VAR_9 = FUNC_3(&VAR_8, FUNC_2(&VAR_2->rb_root));
  if (VAR_9 == 0)
   return (0);
  FUNC_1(VAR_9 == VAR_1,
      ("error %d from dmar_gas_lowermatch", VAR_9));
 }

 if (VAR_3->highaddr >= VAR_2->end)
  return (VAR_1);
 VAR_9 = FUNC_4(&VAR_8);
 FUNC_1(VAR_9 == VAR_1,
     ("error %d from dmar_gas_uppermatch", VAR_9));
 return (VAR_9);
}
