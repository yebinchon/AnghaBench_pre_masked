
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct xlp_msi_data {unsigned int msi_alloc_mask; int msi_lock; } ;
struct msi_msg {int address_hi; int address_lo; int data; } ;
struct msi_desc {int dummy; } ;
struct TYPE_2__ {int picbase; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (unsigned int) ;
 struct xlp_msi_data* FUNC_6 (int) ;
 int FUNC_7 (int,struct msi_desc*) ;
 TYPE_1__* FUNC_8 (int) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int,int,int,int) ;
 int FUNC_12 (int,int,int,int) ;
 int FUNC_13 () ;
 int FUNC_14 (int,struct msi_msg*) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int,int,int) ;

__attribute__((used)) static int FUNC_18(uint64_t VAR_2, int VAR_3, int VAR_4,
 struct msi_desc *VAR_5)
{
 struct xlp_msi_data *VAR_6;
 struct msi_msg VAR_7;
 unsigned long VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 uint64_t VAR_14;


 VAR_11 = FUNC_3(VAR_4);
 VAR_12 = FUNC_9(VAR_3, FUNC_10(VAR_4, 0));
 VAR_6 = FUNC_6(VAR_12);
 VAR_14 = FUNC_0(VAR_3, VAR_4);

 FUNC_15(&VAR_6->msi_lock, VAR_8);
 if (VAR_6->msi_alloc_mask == 0) {
  FUNC_17(VAR_2, VAR_11, VAR_14);

  if (FUNC_4())
   VAR_10 = FUNC_1(VAR_4);
  else
   VAR_10 = FUNC_2(VAR_4);
  FUNC_12(VAR_3, VAR_11, VAR_11, VAR_10);
  FUNC_11(FUNC_8(VAR_3)->picbase, VAR_10, VAR_11,
     VAR_3 * FUNC_13(), 1 );
 }


 VAR_9 = FUNC_5(VAR_6->msi_alloc_mask);
 if (VAR_9 == VAR_1) {
  FUNC_16(&VAR_6->msi_lock, VAR_8);
  return -VAR_0;
 }
 VAR_6->msi_alloc_mask |= (1u << VAR_9);
 FUNC_16(&VAR_6->msi_lock, VAR_8);

 VAR_7.address_hi = VAR_14 >> 32;
 VAR_7.address_lo = VAR_14 & 0xffffffff;
 VAR_7.data = 0xc00 | VAR_9;

 VAR_12 = VAR_12 + VAR_9;
 VAR_13 = FUNC_7(VAR_12, VAR_5);
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_14(VAR_12, &VAR_7);
 return 0;
}
