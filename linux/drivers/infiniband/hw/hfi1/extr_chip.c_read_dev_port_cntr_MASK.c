
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_devdata {int dummy; } ;
struct cntr_entry {int flags; int (* rw_cntr ) (struct cntr_entry*,void*,int,int ,int ) ;int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct cntr_entry*,void*,int,int ,int ) ;

__attribute__((used)) static u64 FUNC_3(struct hfi1_devdata *VAR_7, struct cntr_entry *VAR_8,
         u64 *VAR_9, void *VAR_10, int VAR_11)
{
 u64 VAR_12;
 u64 VAR_13 = *VAR_9;

 if (VAR_8->flags & VAR_3) {
  FUNC_0(VAR_7, "Counter %s not enabled", VAR_8->name);
  return 0;
 }

 FUNC_1(VAR_0, "cntr: %s vl %d psval 0x%llx", VAR_8->name, VAR_11, *VAR_9);

 VAR_12 = VAR_8->rw_cntr(VAR_8, VAR_10, VAR_11, VAR_5, 0);


 if (VAR_8->flags & VAR_6) {
  if (VAR_13 == VAR_4) {

   return VAR_4;
  }

  if (VAR_8->flags & VAR_1) {

   u64 VAR_14 = VAR_13 >> 32;
   u64 VAR_15 = (VAR_13 << 32) >> 32;

   if (VAR_15 > VAR_12) {
    if (VAR_14 == VAR_2)
     VAR_12 = VAR_4;
    else
     VAR_14++;
   }

   if (VAR_12 != VAR_4)
    VAR_12 = (VAR_14 << 32) | VAR_12;

  } else {

   if ((VAR_12 < VAR_13) || (VAR_12 > VAR_4))
    VAR_12 = VAR_4;
  }
 }

 *VAR_9 = VAR_12;

 FUNC_1(VAR_0, "\tNew val=0x%llx", VAR_12);

 return VAR_12;
}
