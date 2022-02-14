
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long u64 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 long long FUNC_1 (struct hfi1_devdata*,int ) ;
 int FUNC_2 (struct hfi1_devdata*,int ,long long) ;

__attribute__((used)) static int FUNC_3(struct hfi1_devdata *VAR_5)
{
 u64 VAR_6;
 u64 VAR_7 = ~(u64)0;
 u64 VAR_8;


 VAR_8 = FUNC_1(VAR_5, VAR_2);
 FUNC_2(VAR_5, VAR_2, 0ull);
 VAR_6 = FUNC_1(VAR_5, VAR_2);
 if (VAR_6)
  goto err_exit;


 FUNC_2(VAR_5, VAR_0, VAR_7);
 VAR_6 = FUNC_1(VAR_5, VAR_3);
 if (VAR_6)
  goto err_exit;


 FUNC_2(VAR_5, VAR_1, VAR_7);
 VAR_6 = FUNC_1(VAR_5, VAR_3);
 if (VAR_6 != VAR_7)
  goto err_exit;


 FUNC_2(VAR_5, VAR_0, VAR_7);
 FUNC_2(VAR_5, VAR_2, VAR_8);

 return 0;
err_exit:
 FUNC_2(VAR_5, VAR_2, VAR_8);
 FUNC_0(VAR_5, "Interrupt registers not properly mapped by VMM\n");
 return -VAR_4;
}
