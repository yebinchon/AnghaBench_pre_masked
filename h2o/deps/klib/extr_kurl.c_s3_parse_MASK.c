
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
struct TYPE_5__ {int auth; int date; int url; int member_1; int member_0; } ;
typedef TYPE_1__ s3aux_t ;
struct TYPE_6__ {int s; scalar_t__ l; scalar_t__ m; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ kstring_t ;


 int FUNC_0 (int *,struct tm*) ;
 int FUNC_1 (char const*,int,TYPE_2__*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int ,char*) ;
 int FUNC_4 (char*,int,char*,int ) ;
 int FUNC_5 (char const*) ;
 char const* FUNC_6 (char const*,char*) ;
 int FUNC_7 (int ) ;

s3aux_t FUNC_8(const char *VAR_0, const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 const char *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 char *VAR_8 = 0, VAR_9[64], VAR_10[29];
 time_t VAR_11;
 struct tm VAR_12;
 s3aux_t VAR_13 = {0,0};
 kstring_t VAR_14 = {0,0,0};

 if (FUNC_6(VAR_0, "s3://") != VAR_0) return VAR_13;
 VAR_6 = VAR_0 + 5;
 for (VAR_7 = VAR_6; *VAR_7 && *VAR_7 != '/'; ++VAR_7);
 if (*VAR_7 == 0) return VAR_13;

 if (VAR_1 == 0 || VAR_2 == 0) {
  VAR_8 = FUNC_2(VAR_3);
  if (VAR_8 == 0) return VAR_13;
  VAR_4 = VAR_8;
  VAR_5 = VAR_8 + FUNC_5(VAR_4) + 1;
 } else VAR_4 = VAR_1, VAR_5 = VAR_2;

 FUNC_1("https://", 8, &VAR_14);
 FUNC_1(VAR_6, VAR_7 - VAR_6, &VAR_14);
 FUNC_1(".s3.amazonaws.com", 17, &VAR_14);
 FUNC_1(VAR_7, FUNC_5(VAR_7), &VAR_14);
 VAR_13.url = VAR_14.s;

 VAR_14.l = VAR_14.m = 0; VAR_14.s = 0;
 VAR_11 = FUNC_7(0);
 FUNC_4(VAR_9, 64, "%a, %d %b %Y %H:%M:%S +0000", FUNC_0(&VAR_11, &VAR_12));
 FUNC_1("Date: ", 6, &VAR_14);
 FUNC_1(VAR_9, FUNC_5(VAR_9), &VAR_14);
 VAR_13.date = VAR_14.s;

 VAR_14.l = VAR_14.m = 0; VAR_14.s = 0;
 FUNC_1("GET\n\n\n", 6, &VAR_14);
 FUNC_1(VAR_9, FUNC_5(VAR_9), &VAR_14);
 FUNC_1("\n", 1, &VAR_14);
 FUNC_1(VAR_6-1, FUNC_5(VAR_6-1), &VAR_14);
 FUNC_3(VAR_5, VAR_14.s, VAR_10);

 VAR_14.l = 0;
 FUNC_1("Authorization: AWS ", 19, &VAR_14);
 FUNC_1(VAR_4, FUNC_5(VAR_4), &VAR_14);
 FUNC_1(":", 1, &VAR_14);
 FUNC_1(VAR_10, FUNC_5(VAR_10), &VAR_14);
 VAR_13.auth = VAR_14.s;

 return VAR_13;
}
