
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct table_info {scalar_t__ data; } ;
struct ip_fw_chain {int dummy; } ;
struct iftable_cfg {scalar_t__ used; int main_ptr; struct table_info* ti; } ;
struct ifidx {int value; scalar_t__ spare; scalar_t__ kidx; } ;
struct TYPE_4__ {TYPE_1__* iface; } ;
struct ifentry {int linked; TYPE_2__ ic; int value; struct iftable_cfg* icfg; } ;
struct TYPE_3__ {scalar_t__ ifindex; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__*,struct ifidx*,int ,scalar_t__,int,int ) ;
 int FUNC_2 (scalar_t__*,int ,scalar_t__,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct ip_fw_chain *VAR_1, void *VAR_2, uint16_t VAR_3)
{
 struct ifentry *VAR_4;
 struct ifidx VAR_5;
 struct iftable_cfg *VAR_6;
 struct table_info *VAR_7;
 int VAR_8;

 VAR_4 = (struct ifentry *)VAR_2;
 VAR_6 = VAR_4->icfg;
 VAR_7 = VAR_6->ti;

 FUNC_0(VAR_7 != ((void*)0), ("ti=NULL, check change_ti handler"));

 if (VAR_4->linked == 0 && VAR_3 != 0) {

  VAR_5.kidx = VAR_3;
  VAR_5.spare = 0;
  VAR_5.value = VAR_4->value;
  VAR_8 = FUNC_1(&VAR_3, &VAR_5, VAR_6->main_ptr, VAR_6->used,
      sizeof(struct ifidx), VAR_0);
  FUNC_0(VAR_8 == 1, ("index %d already exists", VAR_3));
  VAR_6->used++;
  VAR_7->data = VAR_6->used;
  VAR_4->linked = 1;
 } else if (VAR_4->linked != 0 && VAR_3 == 0) {

  VAR_3 = VAR_4->ic.iface->ifindex;

  VAR_8 = FUNC_2(&VAR_3, VAR_6->main_ptr, VAR_6->used,
      sizeof(struct ifidx), VAR_0);

  FUNC_0(VAR_8 == 1, ("index %d does not exist", VAR_3));
  VAR_6->used--;
  VAR_7->data = VAR_6->used;
  VAR_4->linked = 0;
 }
}
