
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hfi1_pportdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct hfi1_pportdata*) ;
 scalar_t__ FUNC_1 (struct hfi1_pportdata*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct hfi1_pportdata *VAR_6,
       u32 VAR_7, u32 VAR_8)
{
 u32 VAR_9 = FUNC_1(VAR_6);
 u32 VAR_10 = FUNC_0(VAR_6);
 int VAR_11, VAR_12, VAR_13;

 VAR_11 = FUNC_2(VAR_10, VAR_7);
 VAR_12 = VAR_11;

 if (VAR_11 == VAR_1 ||
     VAR_11 == VAR_3) {
  FUNC_6("invalid logical state transition %s -> %s\n",
   FUNC_3(VAR_10),
   FUNC_3(VAR_7));
  return VAR_11;
 }

 VAR_11 = FUNC_5(VAR_9, VAR_8);
 VAR_13 = VAR_11;

 if (VAR_11 == VAR_1 ||
     VAR_11 == VAR_3) {
  FUNC_6("invalid physical state transition %s -> %s\n",
   FUNC_4(VAR_9),
   FUNC_4(VAR_8));
  return VAR_11;
 }

 if (VAR_12 == VAR_2 &&
     VAR_13 == VAR_2)
  return VAR_2;





 if ((VAR_9 == VAR_5) &&
     (VAR_8 == VAR_4))
  return VAR_2;





 return VAR_0;
}
