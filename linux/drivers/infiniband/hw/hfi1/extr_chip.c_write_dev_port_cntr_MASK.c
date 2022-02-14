
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_devdata {int dummy; } ;
struct cntr_entry {int flags; int (* rw_cntr ) (struct cntr_entry*,void*,int,int ,int) ;int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct cntr_entry*,void*,int,int ,int) ;
 int FUNC_3 (struct cntr_entry*,void*,int,int ,int) ;
 int FUNC_4 (struct cntr_entry*,void*,int,int ,int) ;

__attribute__((used)) static u64 FUNC_5(struct hfi1_devdata *VAR_5,
          struct cntr_entry *VAR_6,
          u64 *VAR_7, void *VAR_8, int VAR_9, u64 VAR_10)
{
 u64 VAR_11;

 if (VAR_6->flags & VAR_2) {
  FUNC_0(VAR_5, "Counter %s not enabled", VAR_6->name);
  return 0;
 }

 FUNC_1(VAR_0, "cntr: %s vl %d psval 0x%llx", VAR_6->name, VAR_9, *VAR_7);

 if (VAR_6->flags & VAR_4) {
  *VAR_7 = VAR_10;
  if (VAR_6->flags & VAR_1) {
   VAR_11 = VAR_6->rw_cntr(VAR_6, VAR_8, VAR_9, VAR_3,
          (VAR_10 << 32) >> 32);
   VAR_11 = VAR_10;
  } else {
   VAR_11 = VAR_6->rw_cntr(VAR_6, VAR_8, VAR_9, VAR_3,
          VAR_10);
  }
 } else {
  VAR_11 = VAR_6->rw_cntr(VAR_6, VAR_8, VAR_9, VAR_3, VAR_10);
 }

 *VAR_7 = VAR_11;

 FUNC_1(VAR_0, "\tNew val=0x%llx", VAR_11);

 return VAR_11;
}
