
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_isdst; int tm_sec; } ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (struct tm*) ;
 char* FUNC_3 (char const*,char) ;
 char* FUNC_4 (char const*,char const*,struct tm*) ;
 int FUNC_5 (struct tm*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_0, struct timespec *VAR_1)
{
 struct tm VAR_2 = { .tm_sec = 0 };
 const char *VAR_3, *VAR_4;
 char *VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_1[0].tv_nsec = 0;
 VAR_2.tm_isdst = -1;
 VAR_4 = FUNC_3(VAR_0, ':');
 if (VAR_4 == ((void*)0) || FUNC_3(VAR_4 + 1, ':') == ((void*)0))
  goto bad;
 VAR_3 = FUNC_3(VAR_0, 'T') != ((void*)0) ? "%Y-%m-%dT%H:%M:%S" :
     "%Y-%m-%d %H:%M:%S";
 VAR_5 = FUNC_4(VAR_0, VAR_3, &VAR_2);
 if (VAR_5 == ((void*)0))
  goto bad;

 if ((*VAR_5 == '.' || *VAR_5 == ',') && FUNC_1((unsigned char)VAR_5[1])) {
  VAR_5++;
  VAR_6 = 100000000;
  while (FUNC_1((unsigned char)*VAR_5)) {
   VAR_1[0].tv_nsec += VAR_6 * (*VAR_5 - '0');
   VAR_5++;
   VAR_6 /= 10;
  }
 }
 if (*VAR_5 == 'Z') {
  VAR_7 = 1;
  VAR_5++;
 }
 if (*VAR_5 != '\0')
  goto bad;

 VAR_1[0].tv_sec = VAR_7 ? FUNC_5(&VAR_2) : FUNC_2(&VAR_2);

 VAR_1[1] = VAR_1[0];
 return;

bad:
 FUNC_0(1, "out of range or illegal time specification: YYYY-MM-DDThh:mm:SS[.frac][tz]");
}
