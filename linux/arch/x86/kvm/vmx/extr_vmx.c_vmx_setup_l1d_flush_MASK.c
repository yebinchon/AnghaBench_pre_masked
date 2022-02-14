
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;
typedef enum vmx_l1d_flush_state { ____Placeholder_vmx_l1d_flush_state } vmx_l1d_flush_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct page* FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (scalar_t__,unsigned int,unsigned int) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_8(enum vmx_l1d_flush_state VAR_21)
{
 struct page *VAR_22;
 unsigned int VAR_23;

 if (!FUNC_2(VAR_12)) {
  VAR_17 = VAR_11;
  return 0;
 }

 if (!VAR_15) {
  VAR_17 = VAR_9;
  return 0;
 }

 if (FUNC_1(VAR_13)) {
  u64 VAR_24;

  FUNC_5(VAR_4, VAR_24);
  if (VAR_24 & VAR_0) {
   VAR_17 = VAR_11;
   return 0;
  }
 }


 if (VAR_21 == VAR_7) {
  switch (VAR_16) {
  case 128:
   VAR_21 = VAR_10;
   break;
  case 131:
  case 133:
  case 132:
   VAR_21 = VAR_8;
   break;
  case 130:
  case 129:
   VAR_21 = VAR_6;
   break;
  }
 } else if (VAR_16 == 129) {
  VAR_21 = VAR_6;
 }

 if (VAR_21 != VAR_10 && !VAR_19 &&
     !FUNC_1(VAR_14)) {




  VAR_22 = FUNC_0(VAR_2, VAR_3);
  if (!VAR_22)
   return -VAR_1;
  VAR_19 = FUNC_4(VAR_22);






  for (VAR_23 = 0; VAR_23 < 1u << VAR_3; ++VAR_23) {
   FUNC_3(VAR_19 + VAR_23 * VAR_5, VAR_23 + 1,
          VAR_5);
  }
 }

 VAR_17 = VAR_21;

 if (VAR_21 != VAR_10)
  FUNC_7(&VAR_20);
 else
  FUNC_6(&VAR_20);

 if (VAR_21 == VAR_8)
  FUNC_7(&VAR_18);
 else
  FUNC_6(&VAR_18);
 return 0;
}
