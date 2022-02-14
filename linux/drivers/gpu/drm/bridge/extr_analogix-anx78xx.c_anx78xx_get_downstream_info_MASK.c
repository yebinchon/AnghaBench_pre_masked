
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct anx78xx {int aux; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct anx78xx *VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_2->aux, VAR_0, &VAR_3);
 if (VAR_4 < 0) {
  FUNC_1("Get sink count failed %d\n", VAR_4);
  return VAR_4;
 }

 if (!FUNC_0(VAR_3)) {
  FUNC_1("Downstream disconnected\n");
  return -VAR_1;
 }

 return 0;
}
