
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int,char*,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int ,int ,int ,int,int *,int ,int *,int *,int ,int *,int *,int ) ;
 int FUNC_5 (int,int) ;
 int VAR_5 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(int VAR_6, char **VAR_7)
{
 U8 VAR_8, VAR_9;
 int VAR_10, VAR_11;

 if (VAR_6 != 2) {
  FUNC_8("delete: volume required");
  return (VAR_0);
 }

 VAR_11 = FUNC_3(VAR_5);
 if (VAR_11 < 0) {
  VAR_10 = VAR_4;
  FUNC_6("mpt_open");
  return (VAR_10);
 }

 VAR_10 = FUNC_2(VAR_11, VAR_7[1], &VAR_8, &VAR_9);
 if (VAR_10) {
  FUNC_7(VAR_10, "Invalid volume %s", VAR_7[1]);
  FUNC_0(VAR_11);
  return (VAR_10);
 }

 if (FUNC_1(VAR_8, VAR_9) < 0) {
  FUNC_0(VAR_11);
  return (VAR_4);
 }

 VAR_10 = FUNC_4(VAR_11, VAR_3, VAR_8,
     VAR_9, 0, VAR_1 |
     VAR_2, ((void*)0), 0, ((void*)0), ((void*)0), 0, ((void*)0),
     ((void*)0), 0);
 if (VAR_10) {
  FUNC_7(VAR_10, "Failed to delete volume");
  FUNC_0(VAR_11);
  return (VAR_10);
 }

 FUNC_5(-1, -1);
 FUNC_0(VAR_11);

 return (0);
}
