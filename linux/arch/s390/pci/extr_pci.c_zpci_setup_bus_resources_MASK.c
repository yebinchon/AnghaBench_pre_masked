
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zpci_dev {int domain; TYPE_1__* bars; int res_name; } ;
struct resource {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {unsigned long size; int map_idx; int val; struct resource* res; scalar_t__ mio_wb; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (int) ;
 int VAR_5 ;
 struct resource* FUNC_1 (struct zpci_dev*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_2 (struct list_head*,struct resource*) ;
 int FUNC_3 (int ,int,char*,int,int) ;
 int FUNC_4 (struct zpci_dev*) ;
 int FUNC_5 (struct zpci_dev*,int) ;
 scalar_t__ FUNC_6 (struct zpci_dev*) ;

__attribute__((used)) static int FUNC_7(struct zpci_dev *VAR_6,
        struct list_head *VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10;
 struct resource *VAR_11;
 int VAR_12, VAR_13;

 FUNC_3(VAR_6->res_name, sizeof(VAR_6->res_name),
   "PCI Bus %04x:%02x", VAR_6->domain, VAR_5);

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  if (!VAR_6->bars[VAR_12].size)
   continue;
  VAR_13 = FUNC_4(VAR_6);
  if (VAR_13 < 0)
   return VAR_13;
  VAR_6->bars[VAR_12].map_idx = VAR_13;


  VAR_10 = VAR_1;
  if (VAR_6->bars[VAR_12].val & 8)
   VAR_10 |= VAR_3;
  if (VAR_6->bars[VAR_12].val & 4)
   VAR_10 |= VAR_2;

  if (FUNC_6(VAR_6))
   VAR_8 = (unsigned long) VAR_6->bars[VAR_12].mio_wb;
  else
   VAR_8 = FUNC_0(VAR_13);
  VAR_9 = 1UL << VAR_6->bars[VAR_12].size;

  VAR_11 = FUNC_1(VAR_6, VAR_8, VAR_9, VAR_10);
  if (!VAR_11) {
   FUNC_5(VAR_6, VAR_13);
   return -VAR_0;
  }
  VAR_6->bars[VAR_12].res = VAR_11;
  FUNC_2(VAR_7, VAR_11);
 }

 return 0;
}
