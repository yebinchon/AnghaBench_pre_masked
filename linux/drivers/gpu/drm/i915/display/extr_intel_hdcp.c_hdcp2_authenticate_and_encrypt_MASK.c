
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_connector {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_connector*) ;
 scalar_t__ FUNC_2 (struct intel_connector*) ;
 int FUNC_3 (struct intel_connector*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct intel_connector *VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = 3;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_2 = FUNC_1(VAR_1);
  if (!VAR_2)
   break;


  FUNC_0("HDCP2.2 Auth %d of %d Failed.(%d)\n",
         VAR_3 + 1, VAR_4, VAR_2);
  if (FUNC_2(VAR_1) < 0)
   FUNC_0("Port deauth failed.\n");
 }

 if (VAR_3 != VAR_4) {




  FUNC_4(VAR_0);
  VAR_2 = FUNC_3(VAR_1);
  if (VAR_2 < 0) {
   FUNC_0("Encryption Enable Failed.(%d)\n", VAR_2);
   if (FUNC_2(VAR_1) < 0)
    FUNC_0("Port deauth failed.\n");
  }
 }

 return VAR_2;
}
