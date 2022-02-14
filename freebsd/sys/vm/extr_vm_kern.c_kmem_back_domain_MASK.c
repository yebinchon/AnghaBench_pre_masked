
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* vm_object_t ;
struct TYPE_16__ {int rtree; } ;
struct TYPE_15__ {int flags; int oflags; int valid; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_2__* VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,scalar_t__,TYPE_1__*,int,int,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (TYPE_2__*,int ,int,int,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 TYPE_1__* FUNC_11 (int *,int ) ;

int
FUNC_12(int VAR_23, vm_object_t VAR_24, vm_offset_t VAR_25,
    vm_size_t VAR_26, int VAR_27)
{
 vm_offset_t VAR_28, VAR_29;
 vm_page_t VAR_30, VAR_31;
 vm_prot_t VAR_32;
 int VAR_33;

 FUNC_0(VAR_24 == VAR_21,
     ("kmem_back_domain: only supports kernel object."));

 VAR_28 = VAR_25 - VAR_14;
 VAR_33 = FUNC_6(VAR_27) | VAR_9 | VAR_13;
 VAR_33 &= ~(VAR_10 | VAR_12 | VAR_11);
 if (VAR_27 & VAR_4)
  VAR_33 |= VAR_11;
 VAR_32 = (VAR_27 & VAR_2) != 0 ? VAR_16 : VAR_18;

 VAR_29 = 0;
 FUNC_1(VAR_24);
retry:
 VAR_31 = FUNC_11(&VAR_24->rtree, FUNC_4(VAR_28 + VAR_29));
 for (; VAR_29 < VAR_26; VAR_29 += VAR_6, VAR_31 = VAR_30) {
  VAR_30 = FUNC_9(VAR_24, FUNC_4(VAR_28 + VAR_29),
      VAR_23, VAR_33, VAR_31);






  if (VAR_30 == ((void*)0)) {
   if ((VAR_27 & VAR_3) == 0)
    goto retry;
   FUNC_2(VAR_24);
   FUNC_5(VAR_24, VAR_25, VAR_29);
   return (VAR_0);
  }
  FUNC_0(FUNC_10(VAR_30) == VAR_23,
      ("kmem_back_domain: Domain mismatch %d != %d",
      FUNC_10(VAR_30), VAR_23));
  if (VAR_27 & VAR_5 && (VAR_30->flags & VAR_7) == 0)
   FUNC_8(VAR_30);
  FUNC_0((VAR_30->oflags & VAR_20) != 0,
      ("kmem_malloc: page %p is managed", VAR_30));
  VAR_30->valid = VAR_15;
  FUNC_7(VAR_22, VAR_25 + VAR_29, VAR_30, VAR_32,
      VAR_32 | VAR_8, 0);




 }
 FUNC_2(VAR_24);

 return (VAR_1);
}
