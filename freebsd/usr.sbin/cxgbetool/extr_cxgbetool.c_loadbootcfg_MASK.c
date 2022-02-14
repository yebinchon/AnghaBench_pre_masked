
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_data {scalar_t__ data; int len; int member_0; } ;
struct stat {int st_size; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct t4_data*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (char const*,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(int VAR_7, const char *VAR_8[])
{
 int VAR_9, VAR_10;
 struct t4_data VAR_11 = {0};
 const char *VAR_12 = VAR_8[0];
 struct stat VAR_13 = {0};

 if (VAR_7 != 1) {
  FUNC_8("loadbootcfg: incorrect number of arguments.");
  return (VAR_1);
 }

 if (FUNC_6(VAR_12, "clear") == 0)
  return (FUNC_1(VAR_0, &VAR_11));

 VAR_10 = FUNC_5(VAR_12, VAR_4);
 if (VAR_10 < 0) {
  FUNC_7("open(%s)", VAR_12);
  return (VAR_6);
 }

 if (FUNC_2(VAR_10, &VAR_13) < 0) {
  FUNC_7("fstat");
  FUNC_0(VAR_10);
  return (VAR_6);
 }

 VAR_11.len = VAR_13.st_size;
 VAR_11.data = FUNC_3(0, VAR_11.len, VAR_5, VAR_3, VAR_10, 0);
 if (VAR_11.data == VAR_2) {
  FUNC_7("mmap");
  FUNC_0(VAR_10);
  return (VAR_6);
 }

 VAR_9 = FUNC_1(VAR_0, &VAR_11);
 FUNC_4(VAR_11.data, VAR_11.len);
 FUNC_0(VAR_10);
 return (VAR_9);
}
