
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int fd; char* size_cmd; char* response; long long file_size; scalar_t__ offset; char* retr; int is_ready; scalar_t__ no_reconnect; } ;
typedef TYPE_1__ knetFile ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,char*,long long) ;
 int FUNC_8 (char*,char*,long long*) ;
 int VAR_0 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 long long FUNC_11 (char const*) ;

int FUNC_12(knetFile *VAR_1)
{
 int VAR_2;
 long long VAR_3;
 if (VAR_1->fd != -1) {
  FUNC_6(VAR_1->fd);
  if (VAR_1->no_reconnect) FUNC_2(VAR_1);
 }
 FUNC_4(VAR_1);
    FUNC_5(VAR_1, VAR_1->size_cmd, 1);

    if ( FUNC_8(VAR_1->response,"%*d %lld", &VAR_3) != 1 )
    {
        FUNC_0(VAR_0,"[kftp_connect_file] %s\n", VAR_1->response);
        return -1;
    }






 VAR_1->file_size = VAR_3;
 if (VAR_1->offset>=0) {
  char VAR_4[32];

  FUNC_7(VAR_4, "REST %lld\r\n", (long long)VAR_1->offset);





  FUNC_5(VAR_1, VAR_4, 1);
 }
 FUNC_5(VAR_1, VAR_1->retr, 0);
 FUNC_3(VAR_1);
 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 != 150) {
  FUNC_0(VAR_0, "[kftp_connect_file] %s\n", VAR_1->response);
  FUNC_6(VAR_1->fd);
  VAR_1->fd = -1;
  return -1;
 }
 VAR_1->is_ready = 1;
 return 0;
}
