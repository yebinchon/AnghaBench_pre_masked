
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_bootrom {int pf_offset; long pfidx_addr; scalar_t__ data; int len; int member_0; } ;
struct stat {int st_size; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct t4_bootrom*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (char const*,int ) ;
 char* FUNC_6 (char const*,long*,int *) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10(int VAR_7, const char *VAR_8[])
{
 int VAR_9, VAR_10;
 long VAR_11;
 char *VAR_12;
 struct t4_bootrom VAR_13 = {0};
 const char *VAR_14 = VAR_8[0];
 struct stat VAR_15 = {0};

 if (VAR_7 == 1) {
  VAR_13.pf_offset = 0;
  VAR_13.pfidx_addr = 0;
 } else if (VAR_7 == 3) {
  if (!FUNC_7(VAR_8[1], "pf"))
   VAR_13.pf_offset = 0;
  else if (!FUNC_7(VAR_8[1], "offset"))
   VAR_13.pf_offset = 1;
  else
   return (VAR_1);

  VAR_12 = FUNC_6(VAR_8[2], &VAR_11, ((void*)0));
  if (*VAR_12)
   return (VAR_1);
  VAR_13.pfidx_addr = VAR_11;
 } else {
  FUNC_9("loadboot: incorrect number of arguments.");
  return (VAR_1);
 }

 if (FUNC_7(VAR_14, "clear") == 0)
  return (FUNC_1(VAR_0, &VAR_13));

 VAR_10 = FUNC_5(VAR_14, VAR_4);
 if (VAR_10 < 0) {
  FUNC_8("open(%s)", VAR_14);
  return (VAR_6);
 }

 if (FUNC_2(VAR_10, &VAR_15) < 0) {
  FUNC_8("fstat");
  FUNC_0(VAR_10);
  return (VAR_6);
 }

 VAR_13.len = VAR_15.st_size;
 VAR_13.data = FUNC_3(0, VAR_13.len, VAR_5, VAR_3, VAR_10, 0);
 if (VAR_13.data == VAR_2) {
  FUNC_8("mmap");
  FUNC_0(VAR_10);
  return (VAR_6);
 }

 VAR_9 = FUNC_1(VAR_0, &VAR_13);
 FUNC_4(VAR_13.data, VAR_13.len);
 FUNC_0(VAR_10);
 return (VAR_9);
}
