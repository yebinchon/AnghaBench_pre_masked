
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curl_infotype ;
typedef int CURL ;
 int FUNC_0 (char const*,unsigned char*,size_t) ;
 int FUNC_1 (char const*,unsigned char*,size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,char*) ;

__attribute__((used)) static int FUNC_3(CURL *VAR_2, curl_infotype VAR_3, char *VAR_4, size_t VAR_5, void *VAR_6)
{
 const char *VAR_7;
 enum { NO_FILTER = 0, DO_FILTER = 1 };

 switch (VAR_3) {
 case 128:
  FUNC_2(&VAR_0, "== Info: %s", VAR_4);
  break;
 case 131:
  VAR_7 = "=> Send header";
  FUNC_1(VAR_7, (unsigned char *)VAR_4, VAR_5, DO_FILTER);
  break;
 case 133:
  if (VAR_1) {
   VAR_7 = "=> Send data";
   FUNC_0(VAR_7, (unsigned char *)VAR_4, VAR_5);
  }
  break;
 case 129:
  if (VAR_1) {
   VAR_7 = "=> Send SSL data";
   FUNC_0(VAR_7, (unsigned char *)VAR_4, VAR_5);
  }
  break;
 case 132:
  VAR_7 = "<= Recv header";
  FUNC_1(VAR_7, (unsigned char *)VAR_4, VAR_5, NO_FILTER);
  break;
 case 134:
  if (VAR_1) {
   VAR_7 = "<= Recv data";
   FUNC_0(VAR_7, (unsigned char *)VAR_4, VAR_5);
  }
  break;
 case 130:
  if (VAR_1) {
   VAR_7 = "<= Recv SSL data";
   FUNC_0(VAR_7, (unsigned char *)VAR_4, VAR_5);
  }
  break;

 default:
  return 0;
 }
 return 0;
}
