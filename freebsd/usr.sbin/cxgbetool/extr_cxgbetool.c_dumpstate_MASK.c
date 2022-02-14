
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_cudbg_dump {int len; int * data; int bitmap; scalar_t__ wr_flash; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct t4_cudbg_dump*) ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (char const*,int,int) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,int *,int) ;

__attribute__((used)) static int
FUNC_9(int VAR_11, const char *VAR_12[])
{
 int VAR_13, VAR_14;
 struct t4_cudbg_dump VAR_15 = {0};
 const char *VAR_16 = VAR_12[0];

 if (VAR_11 != 1) {
  FUNC_7("dumpstate: incorrect number of arguments.");
  return (VAR_1);
 }

 VAR_15.wr_flash = 0;
 FUNC_4(&VAR_15.bitmap, 0xff, sizeof(VAR_15.bitmap));
 VAR_15.len = 8 * 1024 * 1024;
 VAR_15.data = FUNC_3(VAR_15.len);
 if (VAR_15.data == ((void*)0)) {
  return (VAR_2);
 }

 VAR_13 = FUNC_1(VAR_0, &VAR_15);
 if (VAR_13 != 0)
  goto done;

 VAR_14 = FUNC_5(VAR_16, VAR_3 | VAR_5 | VAR_4 | VAR_6,
     VAR_9 | VAR_7 | VAR_8);
 if (VAR_14 < 0) {
  FUNC_6("open(%s)", VAR_16);
  VAR_13 = VAR_10;
  goto done;
 }
 FUNC_8(VAR_14, VAR_15.data, VAR_15.len);
 FUNC_0(VAR_14);
done:
 FUNC_2(VAR_15.data);
 return (VAR_13);
}
