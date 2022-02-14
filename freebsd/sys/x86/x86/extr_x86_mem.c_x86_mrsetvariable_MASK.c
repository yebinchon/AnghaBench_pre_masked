
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_range_softc {int mr_cap; int mr_ndesc; struct mem_range_desc* mr_desc; } ;
struct mem_range_desc {int mr_flags; scalar_t__ mr_base; scalar_t__ mr_len; int mr_owner; } ;


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
 int VAR_12 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (struct mem_range_desc*,struct mem_range_desc*) ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static int
FUNC_4(struct mem_range_softc *VAR_13, struct mem_range_desc *VAR_14,
    int *VAR_15)
{
 struct mem_range_desc *VAR_16, *VAR_17;
 int VAR_18;
 VAR_18 = (VAR_13->mr_cap & VAR_9) ? VAR_12 + VAR_10 + VAR_11 : 0;
 VAR_16 = VAR_13->mr_desc + VAR_18;
 VAR_17 = ((void*)0);
 for (; VAR_18 < VAR_13->mr_ndesc; VAR_18++, VAR_16++) {
  if (VAR_16->mr_flags & VAR_4) {

   if (VAR_16->mr_base == VAR_14->mr_base &&
       VAR_16->mr_len == VAR_14->mr_len) {


    if (VAR_16->mr_flags & VAR_6)
     return (VAR_1);


    if (!(VAR_14->mr_flags & VAR_7) &&
        (VAR_16->mr_flags & VAR_5) ==
        VAR_8)
     return (VAR_0);


    VAR_17 = VAR_16;
    break;
   }


   if (FUNC_2(VAR_16, VAR_14)) {

    if (FUNC_3(VAR_16->mr_flags,
        VAR_14->mr_flags))
     return (VAR_2);
   }
  } else if (VAR_17 == ((void*)0)) {
   VAR_17 = VAR_16;
  }
 }


 if (VAR_17 == ((void*)0))
  return (VAR_3);


 VAR_17->mr_base = VAR_14->mr_base;
 VAR_17->mr_len = VAR_14->mr_len;
 VAR_17->mr_flags = FUNC_1(VAR_4, VAR_14->mr_flags);
 FUNC_0(VAR_14->mr_owner, VAR_17->mr_owner, sizeof(VAR_14->mr_owner));
 return (0);
}
