
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct tentry_info {int value; scalar_t__ paddr; } ;
struct table_info {scalar_t__ data; } ;
struct ta_buf_ifidx {struct ifentry* ife; } ;
struct iftable_cfg {int count; int ch; int ii; scalar_t__ used; int main_ptr; } ;
struct ifidx {int dummy; } ;
struct TYPE_5__ {TYPE_1__* iface; } ;
struct ifentry {scalar_t__ linked; int value; TYPE_2__ ic; int no; } ;
struct TYPE_4__ {int ifindex; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int ,scalar_t__,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ,char*) ;

__attribute__((used)) static int
FUNC_6(void *VAR_2, struct table_info *VAR_3, struct tentry_info *VAR_4,
    void *VAR_5, uint32_t *VAR_6)
{
 struct iftable_cfg *VAR_7;
 struct ifentry *VAR_8;
 struct ta_buf_ifidx *VAR_9;
 char *VAR_10;
 uint16_t VAR_11;
 int VAR_12;

 VAR_9 = (struct ta_buf_ifidx *)VAR_5;
 VAR_10 = (char *)VAR_4->paddr;
 VAR_7 = (struct iftable_cfg *)VAR_2;

 VAR_8 = (struct ifentry *)FUNC_5(VAR_7->ii, 0, VAR_10);

 if (VAR_8 == ((void*)0))
  return (VAR_0);

 if (VAR_8->linked != 0) {

  VAR_11 = VAR_8->ic.iface->ifindex;

  VAR_12 = FUNC_1(&VAR_11, VAR_7->main_ptr, VAR_7->used,
      sizeof(struct ifidx), VAR_1);

  FUNC_0(VAR_12 == 1, ("index %d does not exist", VAR_11));
  VAR_7->used--;
  VAR_3->data = VAR_7->used;
  VAR_8->linked = 0;
 }


 FUNC_4(VAR_7->ii, &VAR_8->no);

 FUNC_2(VAR_7->ch, &VAR_8->ic);
 FUNC_3(VAR_7->ch, &VAR_8->ic);

 VAR_7->count--;
 VAR_4->value = VAR_8->value;

 VAR_9->ife = VAR_8;
 *VAR_6 = 1;

 return (0);
}
