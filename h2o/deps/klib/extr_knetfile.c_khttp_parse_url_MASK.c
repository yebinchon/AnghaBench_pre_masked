
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* http_host; char* host; int ctrl_fd; int fd; scalar_t__ seek_offset; int type; void* path; void* port; } ;
typedef TYPE_1__ knetFile ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 char* FUNC_1 (char*) ;
 void* FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char const*,char*) ;

knetFile *FUNC_5(const char *VAR_1, const char *VAR_2)
{
 knetFile *VAR_3;
 char *VAR_4, *VAR_5, *VAR_6;
 int VAR_7;
 if (FUNC_4(VAR_1, "http://") != VAR_1) return 0;

 for (VAR_4 = (char*)VAR_1 + 7; *VAR_4 && *VAR_4 != '/'; ++VAR_4);
 VAR_7 = VAR_4 - VAR_1 - 7;
 VAR_3 = (knetFile*)FUNC_0(1, sizeof(knetFile));
 VAR_3->http_host = (char*)FUNC_0(VAR_7 + 1, 1);
 FUNC_3(VAR_3->http_host, VAR_1 + 7, VAR_7);
 VAR_3->http_host[VAR_7] = 0;
 for (VAR_6 = VAR_3->http_host; *VAR_6 && *VAR_6 != ':'; ++VAR_6);
 if (*VAR_6 == ':') *VAR_6++ = 0;

 VAR_5 = FUNC_1("http_proxy");

 if (VAR_5 == 0) {
  VAR_3->host = FUNC_2(VAR_3->http_host);
  VAR_3->port = FUNC_2(*VAR_6? VAR_6 : "80");
  VAR_3->path = FUNC_2(*VAR_4? VAR_4 : "/");
 } else {
  VAR_3->host = (FUNC_4(VAR_5, "http://") == VAR_5)? FUNC_2(VAR_5 + 7) : FUNC_2(VAR_5);
  for (VAR_6 = VAR_3->host; *VAR_6 && *VAR_6 != ':'; ++VAR_6);
  if (*VAR_6 == ':') *VAR_6++ = 0;
  VAR_3->port = FUNC_2(*VAR_6? VAR_6 : "80");
  VAR_3->path = FUNC_2(VAR_1);
 }
 VAR_3->type = VAR_0;
 VAR_3->ctrl_fd = VAR_3->fd = -1;
 VAR_3->seek_offset = 0;
 return VAR_3;
}
