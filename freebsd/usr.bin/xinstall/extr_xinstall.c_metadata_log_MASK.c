
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct flock {int l_type; int l_whence; scalar_t__ l_len; scalar_t__ l_start; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char const* VAR_7 ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,int ,struct flock*) ;
 char* VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char,int ) ;
 int FUNC_5 (char*) ;
 char* VAR_11 ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* VAR_15 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,char const*,size_t) ;
 int FUNC_10 (char*,char const*,int ,char const*) ;
 char* VAR_16 ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,int ) ;

__attribute__((used)) static void
FUNC_13(const char *VAR_17, const char *VAR_18, struct timespec *VAR_19,
 const char *VAR_20, const char *VAR_21, off_t VAR_22)
{
 static const char VAR_23[] = { ' ', '\t', '\n', '\\', '#', '\0' };
 const char *VAR_24;
 char *VAR_25;
 size_t VAR_26;
 struct flock VAR_27;

 if (!VAR_13)
  return;

 VAR_25 = (char *)FUNC_6(4 * FUNC_8(VAR_17) + 1);
 if (VAR_25 == ((void*)0)) {
  FUNC_12("%s", FUNC_7(VAR_0));
  return;
 }


 VAR_27.l_start = 0;
 VAR_27.l_len = 0;
 VAR_27.l_whence = VAR_4;
 VAR_27.l_type = VAR_3;
 if (FUNC_0(FUNC_2(VAR_13), VAR_1, &VAR_27) == -1) {
  FUNC_11("can't lock %s", VAR_12);
  FUNC_5(VAR_25);
  return;
 }


 VAR_24 = VAR_17;
 if (VAR_7) {
  VAR_26 = FUNC_8(VAR_7);
  if (FUNC_9(VAR_24, VAR_7, VAR_26) == 0 &&
      (VAR_24[VAR_26] == '/' || VAR_24[VAR_26] == '\0'))
   VAR_24 += VAR_26;
 }
 while (*VAR_24 && *VAR_24 == '/')
  VAR_24++;
 FUNC_10(VAR_25, VAR_24, VAR_6, VAR_23);
 VAR_24 = VAR_25;

 FUNC_3(VAR_13, ".%s%s type=%s", *VAR_24 ? "/" : "", VAR_24, VAR_18);
 if (VAR_15)
  FUNC_3(VAR_13, " uname=%s", VAR_15);
 if (VAR_11)
  FUNC_3(VAR_13, " gname=%s", VAR_11);
 FUNC_3(VAR_13, " mode=%#o", VAR_14);
 if (VAR_20) {
  FUNC_10(VAR_25, VAR_20, VAR_5, VAR_23);
  FUNC_3(VAR_13, " link=%s", VAR_25);
 }
 if (*VAR_18 == 'f')
  FUNC_3(VAR_13, " size=%lld", (long long)VAR_22);
 if (VAR_19 != ((void*)0) && VAR_9)
  FUNC_3(VAR_13, " time=%lld.%09d",
   (long long)VAR_19[1].tv_sec, VAR_19[1].tv_nsec);
 if (VAR_21 && VAR_8)
  FUNC_3(VAR_13, " %s=%s", VAR_8, VAR_21);
 if (VAR_10)
  FUNC_3(VAR_13, " flags=%s", VAR_10);
 if (VAR_16)
  FUNC_3(VAR_13, " tags=%s", VAR_16);
 FUNC_4('\n', VAR_13);

 FUNC_1(VAR_13);


 VAR_27.l_type = VAR_2;
 if (FUNC_0(FUNC_2(VAR_13), VAR_1, &VAR_27) == -1)
  FUNC_11("can't unlock %s", VAR_12);
 FUNC_5(VAR_25);
}
