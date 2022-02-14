
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int (*) (int,char*,int ),int ,char*,int ) ;
 int FUNC_1 (int (*) (int,char*,int ),int,char*,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int (*) (int,char*,int ),int,...) ;
 int FUNC_4 (int,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int VAR_9 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int,char*,int ) ;

int
FUNC_9(void)
{
 int VAR_10 = VAR_8;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 cap_rights_t VAR_17 = VAR_4 | VAR_6 | VAR_5 | VAR_2;
 cap_rights_t VAR_18;

 FUNC_5(VAR_12 = FUNC_7("/etc/", VAR_7));
 FUNC_3(VAR_9, VAR_12, &VAR_18);
 FUNC_2(VAR_18, VAR_1);

 FUNC_4(VAR_13, VAR_12, VAR_4);
 FUNC_4(VAR_14, VAR_12, VAR_4 | VAR_2);
 FUNC_4(VAR_15, VAR_12, VAR_17);
 FUNC_4(VAR_16, VAR_12, VAR_3);





 FUNC_3(FUNC_8, VAR_12, "/etc/passwd", VAR_7);
 FUNC_3(FUNC_8, VAR_0, "/etc/passwd", VAR_7);
 FUNC_3(FUNC_8, VAR_12, "passwd", VAR_7);
 FUNC_3(FUNC_8, VAR_12, "../etc/passwd", VAR_7);






 FUNC_3(FUNC_8, VAR_14, "passwd", VAR_7);
 FUNC_3(FUNC_8, VAR_15, "passwd", VAR_7);
 FUNC_3(FUNC_8, VAR_16, "passwd", VAR_7);

 FUNC_1(FUNC_8, VAR_14, "../etc/passwd", VAR_7);
 FUNC_1(FUNC_8, VAR_15, "../etc/passwd", VAR_7);






 FUNC_3(FUNC_8, VAR_16, "../etc/passwd", VAR_7);




 FUNC_3(VAR_9, VAR_15, &VAR_18);

 FUNC_5(VAR_11 = FUNC_8(VAR_15, "passwd", VAR_7));
 FUNC_3(VAR_9, VAR_11, &VAR_18);
 FUNC_2(VAR_18, VAR_17);




 FUNC_5(FUNC_6());





 FUNC_3(FUNC_8, VAR_12, "passwd", VAR_7);
 FUNC_3(FUNC_8, VAR_14, "passwd", VAR_7);
 FUNC_3(FUNC_8, VAR_15, "passwd", VAR_7);
 FUNC_3(FUNC_8, VAR_16, "passwd", VAR_7);




 FUNC_1(FUNC_8, VAR_13, "passwd", VAR_7);




 FUNC_0(FUNC_8, VAR_0, "/etc/passwd", VAR_7);
 FUNC_1(FUNC_8, VAR_12, "/etc/passwd", VAR_7);




 FUNC_1(FUNC_8, VAR_12, "../etc/passwd", VAR_7);
 FUNC_1(FUNC_8, VAR_14, "../etc/passwd", VAR_7);
 FUNC_1(FUNC_8, VAR_15, "../etc/passwd", VAR_7);

 FUNC_5(VAR_11 = FUNC_8(VAR_12, "passwd", VAR_7));
 FUNC_3(VAR_9, VAR_11, &VAR_18);




 FUNC_5(VAR_11 = FUNC_8(VAR_15, "passwd", VAR_7));
 FUNC_3(VAR_9, VAR_11, &VAR_18);
 FUNC_2(VAR_18, VAR_17);

 return VAR_10;
}
