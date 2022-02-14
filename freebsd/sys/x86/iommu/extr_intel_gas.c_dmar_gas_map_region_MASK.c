
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int u_int ;
struct dmar_map_entry {int flags; scalar_t__ start; scalar_t__ end; } ;
struct dmar_domain {int dummy; } ;
typedef scalar_t__ dmar_gaddr_t ;


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
 int FUNC_2 (int,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct dmar_map_entry*,int) ;
 int FUNC_5 (struct dmar_domain*,struct dmar_map_entry*,int) ;
 int FUNC_6 (struct dmar_domain*,scalar_t__,scalar_t__,int *,int,int ) ;

int
FUNC_7(struct dmar_domain *VAR_11, struct dmar_map_entry *VAR_12,
    u_int VAR_13, u_int VAR_14, vm_page_t *VAR_15)
{
 dmar_gaddr_t VAR_16;
 int VAR_17;

 FUNC_2(VAR_12->flags == 0, ("used RMRR entry %p %p %x", VAR_11,
     VAR_12, VAR_12->flags));
 FUNC_2((VAR_14 & ~(VAR_0)) == 0,
     ("invalid flags 0x%x", VAR_14));

 VAR_16 = VAR_12->start;
 FUNC_0(VAR_11);
 VAR_17 = FUNC_5(VAR_11, VAR_12, VAR_14);
 if (VAR_17 != 0) {
  FUNC_1(VAR_11);
  return (VAR_17);
 }
 VAR_12->flags |= VAR_13;
 FUNC_1(VAR_11);
 if (VAR_12->end == VAR_12->start)
  return (0);

 VAR_17 = FUNC_6(VAR_11, VAR_12->start, VAR_12->end - VAR_12->start,
     VAR_15 + FUNC_3(VAR_16 - VAR_12->start),
     ((VAR_13 & VAR_1) != 0 ? VAR_6 : 0) |
     ((VAR_13 & VAR_4) != 0 ? VAR_9 : 0) |
     ((VAR_13 & VAR_2) != 0 ? VAR_7 : 0) |
     ((VAR_13 & VAR_3) != 0 ? VAR_8 : 0),
     (VAR_14 & VAR_0) != 0 ? VAR_5 : 0);
 if (VAR_17 == VAR_10) {
  FUNC_4(VAR_12, 0);
  return (VAR_17);
 }
 FUNC_2(VAR_17 == 0,
     ("unexpected error %d from domain_map_buf", VAR_17));

 return (0);
}
