
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*,...) ;

ssize_t FUNC_1(char *VAR_6, u64 VAR_7, u64 VAR_8)
{
 u64 VAR_9 = (VAR_7 & VAR_5) >> 8;
 u64 VAR_10 = (VAR_7 & VAR_1) >> 24;
 bool VAR_11 = (VAR_7 & VAR_2);
 bool VAR_12 = (VAR_7 & VAR_4);
 bool VAR_13 = (VAR_7 & VAR_0);
 bool VAR_14 = (VAR_7 & VAR_3);
 ssize_t VAR_15;





 VAR_15 = FUNC_0(VAR_6, "event=0x%02llx", VAR_8);

 if (VAR_9)
  VAR_15 += FUNC_0(VAR_6 + VAR_15, ",umask=0x%02llx", VAR_9);

 if (VAR_11)
  VAR_15 += FUNC_0(VAR_6 + VAR_15, ",edge");

 if (VAR_12)
  VAR_15 += FUNC_0(VAR_6 + VAR_15, ",pc");

 if (VAR_13)
  VAR_15 += FUNC_0(VAR_6 + VAR_15, ",any");

 if (VAR_14)
  VAR_15 += FUNC_0(VAR_6 + VAR_15, ",inv");

 if (VAR_10)
  VAR_15 += FUNC_0(VAR_6 + VAR_15, ",cmask=0x%02llx", VAR_10);

 VAR_15 += FUNC_0(VAR_6 + VAR_15, "\n");

 return VAR_15;
}
