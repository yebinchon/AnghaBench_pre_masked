
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct obj {int oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct obj* FUNC_0 (int *,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,char*,char const*) ;

int
FUNC_4(const char *VAR_4, u_long VAR_5, u_long VAR_6, u_long VAR_7,
    u_long VAR_8, u_int VAR_9, u_long VAR_10, u_int VAR_11, u_int VAR_12)
{
 char VAR_13[VAR_2];
 struct obj *VAR_14;
 int VAR_15, VAR_16;

 VAR_16 = FUNC_3(VAR_13, VAR_2, "/dev/proto/%s/busdma", VAR_4);
 if (VAR_16 >= VAR_2) {
  VAR_3 = VAR_0;
  return (-1);
 }
 VAR_15 = FUNC_2(VAR_13, VAR_1);
 if (VAR_15 == -1)
  return (-1);

 VAR_14 = FUNC_0(((void*)0), VAR_15, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
     VAR_10, VAR_11, VAR_12);
 if (VAR_14 == ((void*)0)) {
  FUNC_1(VAR_15);
  return (-1);
 }
 return (VAR_14->oid);
}
