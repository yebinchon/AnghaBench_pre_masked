
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int uintmax_t ;
typedef int u_int ;
struct dmar_map_entry {scalar_t__ end; int flags; scalar_t__ start; } ;
struct dmar_domain {scalar_t__ end; } ;
struct bus_dma_tag_common {int dummy; } ;
typedef int dmar_gaddr_t ;


 int FUNC_0 (struct dmar_domain*) ;
 int FUNC_1 (struct dmar_domain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (struct dmar_map_entry*,int) ;
 struct dmar_map_entry* FUNC_4 (struct dmar_domain*,int ) ;
 int FUNC_5 (struct dmar_domain*) ;
 int FUNC_6 (struct dmar_domain*,struct bus_dma_tag_common const*,int ,int,int,struct dmar_map_entry*) ;
 int FUNC_7 (struct dmar_domain*,struct dmar_map_entry*) ;
 int FUNC_8 (struct dmar_domain*,scalar_t__,scalar_t__,int *,int,int ) ;

int
FUNC_9(struct dmar_domain *VAR_13,
    const struct bus_dma_tag_common *VAR_14, dmar_gaddr_t VAR_15, int VAR_16,
    u_int VAR_17, u_int VAR_18, vm_page_t *VAR_19, struct dmar_map_entry **VAR_20)
{
 struct dmar_map_entry *VAR_21;
 int VAR_22;

 FUNC_2((VAR_18 & ~(VAR_1 | VAR_0)) == 0,
     ("invalid flags 0x%x", VAR_18));

 VAR_21 = FUNC_4(VAR_13, (VAR_18 & VAR_1) != 0 ?
     VAR_6 : 0);
 if (VAR_21 == ((void*)0))
  return (VAR_11);
 FUNC_0(VAR_13);
 VAR_22 = FUNC_6(VAR_13, VAR_14, VAR_15, VAR_16, VAR_18,
     VAR_21);
 if (VAR_22 == VAR_11) {
  FUNC_1(VAR_13);
  FUNC_7(VAR_13, VAR_21);
  return (VAR_22);
 }




 FUNC_2(VAR_22 == 0,
     ("unexpected error %d from dmar_gas_find_entry", VAR_22));
 FUNC_2(VAR_21->end < VAR_13->end, ("allocated GPA %jx, max GPA %jx",
     (uintmax_t)VAR_21->end, (uintmax_t)VAR_13->end));
 VAR_21->flags |= VAR_17;
 FUNC_1(VAR_13);

 VAR_22 = FUNC_8(VAR_13, VAR_21->start, VAR_21->end - VAR_21->start,
     VAR_19,
     ((VAR_17 & VAR_2) != 0 ? VAR_7 : 0) |
     ((VAR_17 & VAR_5) != 0 ? VAR_10 : 0) |
     ((VAR_17 & VAR_3) != 0 ? VAR_8 : 0) |
     ((VAR_17 & VAR_4) != 0 ? VAR_9 : 0),
     (VAR_18 & VAR_1) != 0 ? VAR_6 : 0);
 if (VAR_22 == VAR_11) {
  FUNC_3(VAR_21, 1);
  return (VAR_22);
 }
 FUNC_2(VAR_22 == 0,
     ("unexpected error %d from domain_map_buf", VAR_22));

 *VAR_20 = VAR_21;
 return (0);
}
