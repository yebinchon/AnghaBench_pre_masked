
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tentry_info {int value; int flags; scalar_t__ paddr; } ;
struct table_info {int dummy; } ;
struct ta_buf_ifidx {struct ifentry* ife; } ;
struct ipfw_iface {scalar_t__ resolved; int ifindex; } ;
struct iftable_cfg {int count; int ch; int ii; } ;
struct ifidx {int value; } ;
struct TYPE_2__ {struct ipfw_iface* iface; } ;
struct ifentry {int value; TYPE_1__ ic; int no; struct iftable_cfg* icfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ifidx* FUNC_0 (struct table_info*,int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,char*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_5, struct table_info *VAR_6, struct tentry_info *VAR_7,
    void *VAR_8, uint32_t *VAR_9)
{
 struct iftable_cfg *VAR_10;
 struct ifentry *VAR_11, *VAR_12;
 struct ta_buf_ifidx *VAR_13;
 struct ipfw_iface *VAR_14;
 struct ifidx *VAR_15;
 char *VAR_16;
 uint32_t VAR_17;

 VAR_13 = (struct ta_buf_ifidx *)VAR_8;
 VAR_16 = (char *)VAR_7->paddr;
 VAR_10 = (struct iftable_cfg *)VAR_5;
 VAR_11 = VAR_13->ife;

 VAR_11->icfg = VAR_10;
 VAR_11->value = VAR_7->value;

 VAR_12 = (struct ifentry *)FUNC_3(VAR_10->ii, 0, VAR_16);

 if (VAR_12 != ((void*)0)) {
  if ((VAR_7->flags & VAR_3) == 0)
   return (VAR_0);


  VAR_17 = VAR_12->value;
  VAR_12->value = VAR_7->value;
  VAR_7->value = VAR_17;

  VAR_14 = VAR_12->ic.iface;
  if (VAR_14->resolved != 0) {

   VAR_15 = FUNC_0(VAR_6, &VAR_14->ifindex);
   VAR_15->value = VAR_11->value;
  }


  VAR_7->flags |= VAR_4;
  *VAR_9 = 0;
  return (0);
 }

 if ((VAR_7->flags & VAR_2) != 0)
  return (VAR_1);


 FUNC_2(VAR_10->ii, &VAR_11->no);


 FUNC_1(VAR_10->ch, &VAR_11->ic);
 VAR_10->count++;

 VAR_13->ife = ((void*)0);
 *VAR_9 = 1;

 return (0);
}
