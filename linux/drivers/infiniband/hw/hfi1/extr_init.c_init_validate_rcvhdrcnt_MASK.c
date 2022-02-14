
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct hfi1_devdata *VAR_4, uint VAR_5)
{
 if (VAR_5 <= VAR_3) {
  FUNC_0(VAR_4, "Receive header queue count too small\n");
  return -VAR_0;
 }

 if (VAR_5 > VAR_2) {
  FUNC_0(VAR_4,
      "Receive header queue count cannot be greater than %u\n",
      VAR_2);
  return -VAR_0;
 }

 if (VAR_5 % VAR_1) {
  FUNC_0(VAR_4, "Receive header queue count %d must be divisible by %lu\n",
      VAR_5, VAR_1);
  return -VAR_0;
 }

 return 0;
}
