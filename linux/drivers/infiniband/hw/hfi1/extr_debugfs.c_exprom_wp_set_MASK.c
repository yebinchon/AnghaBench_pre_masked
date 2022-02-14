
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct hfi1_devdata*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hfi1_devdata *VAR_4, bool VAR_5)
{
 u64 VAR_6 = 0;

 if (VAR_5) {
  VAR_6 = VAR_2;
  VAR_3 = 1;
  FUNC_0(VAR_4, "Disable Expansion ROM Write Protection\n");
 } else {
  VAR_3 = 0;
  FUNC_0(VAR_4, "Enable Expansion ROM Write Protection\n");
 }

 FUNC_1(VAR_4, VAR_1, VAR_6);
 FUNC_1(VAR_4, VAR_0, VAR_6);

 return 0;
}
