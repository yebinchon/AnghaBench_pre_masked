
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct xive_cpu {int dummy; } ;
typedef scalar_t__ s64 ;
typedef int __be64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int *,int *,int *,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (char*,unsigned int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_8(unsigned int VAR_11, struct xive_cpu *VAR_12)
{
 s64 VAR_13;
 u32 VAR_14;
 __be64 VAR_15;
 u64 VAR_16;

 if (VAR_9 == VAR_8)
  return;


 if (FUNC_1(VAR_10 + VAR_4 + VAR_7) & VAR_3)
  FUNC_2(VAR_10 + VAR_5);


 VAR_14 = VAR_9 + VAR_11;
 for (;;) {
  VAR_13 = FUNC_5(VAR_14, VAR_2, 0);
  if (VAR_13 != VAR_0)
   break;
  FUNC_3(VAR_1);
 }
 if (VAR_13) {
  FUNC_7("Failed to enable pool VP on CPU %d\n", VAR_11);
  return;
 }


 VAR_13 = FUNC_4(VAR_14, ((void*)0), &VAR_15, ((void*)0), ((void*)0));
 if (VAR_13) {
  FUNC_7("Failed to get pool VP info CPU %d\n", VAR_11);
  return;
 }
 VAR_16 = FUNC_0(VAR_15);


 FUNC_6(VAR_10 + VAR_4 + VAR_6, 0xff);
 FUNC_6(VAR_10 + VAR_4 + VAR_7, VAR_3 | VAR_16);
}
