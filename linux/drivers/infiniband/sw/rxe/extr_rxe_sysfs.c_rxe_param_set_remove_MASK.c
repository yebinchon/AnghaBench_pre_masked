
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int intf ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_device* FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ib_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*,char*,int) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_2, const struct kernel_param *VAR_3)
{
 int VAR_4;
 char VAR_5[32];
 struct ib_device *VAR_6;

 VAR_4 = FUNC_5(VAR_2, VAR_5, sizeof(VAR_5));
 if (!VAR_4) {
  FUNC_3("add: invalid interface name\n");
  return -VAR_0;
 }

 if (FUNC_6("all", VAR_5, VAR_4) == 0) {
  FUNC_4("rxe_sys: remove all");
  FUNC_2(VAR_1);
  return 0;
 }

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 if (!VAR_6) {
  FUNC_3("not configured on %s\n", VAR_5);
  return -VAR_0;
 }

 FUNC_1(VAR_6);

 return 0;
}
