
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(int VAR_1, const char *VAR_2, const char *VAR_3)
{
 if (VAR_1) {
  FUNC_0(VAR_0, ",\n");
  FUNC_2(VAR_0, VAR_1);
 } else {
  FUNC_0(VAR_0, ", ");
 }
 if (FUNC_1(VAR_3, "bool")) {
  FUNC_0(VAR_0, "sizeof (bool_t), (xdrproc_t) xdr_bool");
 } else {
  FUNC_0(VAR_0, "sizeof (");
  if (FUNC_3(VAR_3) && VAR_2) {
   FUNC_0(VAR_0, "%s ", VAR_2);
  }
  FUNC_0(VAR_0, "%s), (xdrproc_t) xdr_%s", VAR_3, VAR_3);
 }
}
