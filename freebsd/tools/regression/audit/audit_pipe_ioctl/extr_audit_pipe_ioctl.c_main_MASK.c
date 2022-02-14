
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
typedef scalar_t__ u_int ;
typedef scalar_t__ int64_t ;


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
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int,int ,scalar_t__*) ;
 int FUNC_3 (char*,int ) ;

int
FUNC_4(int VAR_10, char *VAR_11[])
{
 u_int VAR_12, VAR_13, VAR_14;
 u_int64_t VAR_15;
 int VAR_16;

 VAR_16 = FUNC_3("/dev/auditpipe", VAR_9);
 if (VAR_16 < 0)
  FUNC_0(-1, "/dev/auditpipe");





 VAR_12 = (u_int)(-1);
 if (FUNC_2(VAR_16, VAR_2, &VAR_12) < 0)
  FUNC_0(-1, "AUDITPIPE_GET_QLEN");
 if (VAR_12 == (u_int)(-1))
  FUNC_1(-1, "AUDITPIPE_GET_QLEN: unchanged");

 VAR_13 = (u_int)(-1);
 if (FUNC_2(VAR_16, VAR_5, &VAR_13) < 0)
  FUNC_0(-1, "AUDITPIPE_GET_QLIMIT_MIN");
 if (VAR_13 == (u_int)(-1))
  FUNC_1(-1, "AUDITPIPE_GET_QLIMIT_MIN: unchanged");

 VAR_14 = (u_int)(-1);
 if (FUNC_2(VAR_16, VAR_4, &VAR_14) < 0)
  FUNC_0(-1, "AUDITPIPE_GET_QLIMIT_MAX");
 if (VAR_14 == (u_int)(-1))
  FUNC_1(-1, "AUDITPIPE_GET_QLIMIT_MAX: unchanged");

 VAR_12 = (u_int)(-1);
 if (FUNC_2(VAR_16, VAR_3, &VAR_12) < 0)
  FUNC_0(-1, "AUDITPIPE_GET_QLIMIT");
 if (VAR_12 == (u_int)(-1))
  FUNC_1(-1, "AUDITPIPE_GET_QLIMIT: unchanged");

 if (!(VAR_12 >= VAR_13))
  FUNC_1(-1, "queue length < minlen");

 if (!(VAR_12 <= VAR_14))
  FUNC_1(-1, "queue length > maxlen");





 VAR_12 = VAR_13;
 if (FUNC_2(VAR_16, VAR_8, &VAR_12) < 0)
  FUNC_0(-1, "AUDITPIPE_SET_QLIMIT(min)");

 if (FUNC_2(VAR_16, VAR_3, &VAR_12) < 0)
  FUNC_0(-1, "AUDITPIPE_GET_QLIMIT");

 if (VAR_12 != VAR_13)
  FUNC_1(-1, "set to minlen didn't work");

 VAR_12 = VAR_14;
 if (FUNC_2(VAR_16, VAR_8, &VAR_12) < 0)
  FUNC_0(-1, "AUDITPIPE_SET_QLIMIT(max)");

 if (FUNC_2(VAR_16, VAR_3, &VAR_12) < 0)
  FUNC_0(-1, "AUDITPIPE_GETQLIMIT");

 if (VAR_12 != VAR_14)
  FUNC_1(-1, "set to maxlen didn't work");





 VAR_15 = (u_int64_t)(int64_t)(-1);
 if (FUNC_2(VAR_16, VAR_1, &VAR_15) < 0)
  FUNC_0(-1, "AUDITPIPE_GET_INSERTS");
 if (VAR_15 == (u_int64_t)(int64_t)(-1))
  FUNC_1(-1, "AUDITPIPE_GET_INSERTS: unchanged");

 VAR_15 = (u_int64_t)(int64_t)(-1);
 if (FUNC_2(VAR_16, VAR_6, &VAR_15) < 0)
  FUNC_0(-1, "AUDITPIPE_GET_READS");
 if (VAR_15 == (u_int64_t)(int64_t)(-1))
  FUNC_1(-1, "AUDITPIPE_GET_READS: unchanged");

 VAR_15 = (u_int64_t)(int64_t)(-1);
 if (FUNC_2(VAR_16, VAR_0, &VAR_15) < 0)
  FUNC_0(-1, "AUDITPIPE_GET_DROPS");
 if (VAR_15 == (u_int64_t)(int64_t)(-1))
  FUNC_1(-1, "AUDITPIPE_GET_DROPS: unchanged");

 VAR_15 = (u_int64_t)(int64_t)(-1);
 if (FUNC_2(VAR_16, VAR_7, &VAR_15) < 0)
  FUNC_0(-1, "AUDITPIPE_GET_TRUNCATES");
 if (VAR_15 == (u_int64_t)(int64_t)(-1))
  FUNC_1(-1, "AUDITPIPE_GET_TRUNCATES: unchanged");

 return (0);
}
