
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_5,
        const struct kernel_param *VAR_6)
{
 int VAR_7 = 0;

 if (!FUNC_1(VAR_5, "status", sizeof("status") - 1)) {
  VAR_4 = VAR_2;
  FUNC_0("Assuming SCI_EVT clearing on EC_SC accesses\n");
 } else if (!FUNC_1(VAR_5, "query", sizeof("query") - 1)) {
  VAR_4 = VAR_1;
  FUNC_0("Assuming SCI_EVT clearing on QR_EC writes\n");
 } else if (!FUNC_1(VAR_5, "event", sizeof("event") - 1)) {
  VAR_4 = VAR_0;
  FUNC_0("Assuming SCI_EVT clearing on event reads\n");
 } else
  VAR_7 = -VAR_3;
 return VAR_7;
}
