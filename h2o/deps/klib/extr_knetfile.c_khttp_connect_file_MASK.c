
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_3__ {int fd; char* path; char* http_host; scalar_t__ offset; int is_ready; int port; int host; } ;
typedef TYPE_1__ knetFile ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,char*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,char*,int) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (char*,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,char**,int ) ;

int FUNC_11(knetFile *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 char *VAR_4, *VAR_5;
 if (VAR_1->fd != -1) FUNC_4(VAR_1->fd);
 VAR_1->fd = FUNC_7(VAR_1->host, VAR_1->port);
 VAR_4 = (char*)FUNC_0(0x10000, 1);
 VAR_3 += FUNC_8(VAR_4 + VAR_3, "GET %s HTTP/1.0\r\nHost: %s\r\n", VAR_1->path, VAR_1->http_host);
    VAR_3 += FUNC_8(VAR_4 + VAR_3, "Range: bytes=%lld-\r\n", (long long)VAR_1->offset);
 VAR_3 += FUNC_8(VAR_4 + VAR_3, "\r\n");
 FUNC_6(VAR_1->fd, VAR_4, VAR_3);
 VAR_3 = 0;
 while (FUNC_5(VAR_1->fd, VAR_4 + VAR_3, 1)) {
  if (VAR_4[VAR_3] == '\n' && VAR_3 >= 3)
   if (FUNC_9(VAR_4 + VAR_3 - 3, "\r\n\r\n", 4) == 0) break;
  ++VAR_3;
 }
 VAR_4[VAR_3] = 0;
 if (VAR_3 < 14) {
  FUNC_4(VAR_1->fd);
  VAR_1->fd = -1;
  return -1;
 }
 VAR_2 = FUNC_10(VAR_4 + 8, &VAR_5, 0);
 if (VAR_2 == 200 && VAR_1->offset>0) {
  off_t VAR_6 = VAR_1->offset;
  while (VAR_6) {
   off_t VAR_7 = VAR_6 < 0x10000? VAR_6 : 0x10000;
   VAR_6 -= FUNC_3(VAR_1->fd, VAR_4, VAR_7);
  }
 } else if (VAR_2 != 206 && VAR_2 != 200) {
  FUNC_2(VAR_4);
  FUNC_1(VAR_0, "[khttp_connect_file] fail to open file (HTTP code: %d).\n", VAR_2);
  FUNC_4(VAR_1->fd);
  VAR_1->fd = -1;
  return -1;
 }
 FUNC_2(VAR_4);
 VAR_1->is_ready = 1;
 return 0;
}
