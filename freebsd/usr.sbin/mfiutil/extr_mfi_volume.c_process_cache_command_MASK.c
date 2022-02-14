
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mfi_ld_props {int disk_cache_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mfi_ld_props*,int,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_9, char **VAR_10, struct mfi_ld_props *VAR_11)
{
 uint8_t VAR_12;


 if (FUNC_1(VAR_10[0], "all") == 0 || FUNC_1(VAR_10[0], "enable") == 0) {
  FUNC_0(VAR_11, VAR_0 |
      VAR_1,
      VAR_0 |
      VAR_1);
  return (1);
 }
 if (FUNC_1(VAR_10[0], "none") == 0 || FUNC_1(VAR_10[0], "disable") == 0) {
  FUNC_0(VAR_11, 0, VAR_0 |
      VAR_1);
  return (1);
 }
 if (FUNC_1(VAR_10[0], "reads") == 0) {
   FUNC_0(VAR_11, VAR_0,
      VAR_0 |
      VAR_1);
  return (1);
 }
 if (FUNC_1(VAR_10[0], "writes") == 0) {
  FUNC_0(VAR_11, VAR_1,
      VAR_0 |
      VAR_1);
  return (1);
 }


 if (FUNC_1(VAR_10[0], "write-back") == 0) {
  FUNC_0(VAR_11, VAR_4,
      VAR_4);
  return (1);
 }
 if (FUNC_1(VAR_10[0], "write-through") == 0) {
  FUNC_0(VAR_11, 0, VAR_4);
  return (1);
 }
 if (FUNC_1(VAR_10[0], "bad-bbu-write-cache") == 0) {
  if (VAR_9 < 2) {
   FUNC_2("cache: bad BBU setting required");
   return (-1);
  }
  if (FUNC_1(VAR_10[1], "enable") == 0)
   VAR_12 = VAR_5;
  else if (FUNC_1(VAR_10[1], "disable") == 0)
   VAR_12 = 0;
  else {
   FUNC_2("cache: invalid bad BBU setting");
   return (-1);
  }
  FUNC_0(VAR_11, VAR_12,
      VAR_5);
  return (2);
 }


 if (FUNC_1(VAR_10[0], "read-ahead") == 0) {
  if (VAR_9 < 2) {
   FUNC_2("cache: read-ahead setting required");
   return (-1);
  }
  if (FUNC_1(VAR_10[1], "none") == 0)
   VAR_12 = 0;
  else if (FUNC_1(VAR_10[1], "always") == 0)
   VAR_12 = VAR_3;
  else if (FUNC_1(VAR_10[1], "adaptive") == 0)
   VAR_12 = VAR_3 |
       VAR_2;
  else {
   FUNC_2("cache: invalid read-ahead setting");
   return (-1);
  }
  FUNC_0(VAR_11, VAR_12, VAR_3 |
       VAR_2);
  return (2);
 }


 if (FUNC_1(VAR_10[0], "write-cache") == 0) {
  if (VAR_9 < 2) {
   FUNC_2("cache: write-cache setting required");
   return (-1);
  }
  if (FUNC_1(VAR_10[1], "enable") == 0)
   VAR_11->disk_cache_policy = VAR_7;
  else if (FUNC_1(VAR_10[1], "disable") == 0)
   VAR_11->disk_cache_policy = VAR_6;
  else if (FUNC_1(VAR_10[1], "default") == 0)
   VAR_11->disk_cache_policy = VAR_8;
  else {
   FUNC_2("cache: invalid write-cache setting");
   return (-1);
  }
  return (2);
 }

 FUNC_2("cache: Invalid command");
 return (-1);
}
