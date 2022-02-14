
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; char* host; int no_reconnect; char* retr; char* size_cmd; scalar_t__ seek_offset; int port; int type; } ;
typedef TYPE_1__ knetFile ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ FUNC_2 (char const*,char) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,int) ;
 char const* FUNC_6 (char const*,char*) ;

knetFile *FUNC_7(const char *VAR_1, const char *VAR_2)
{
 knetFile *VAR_3;
 char *VAR_4;
 int VAR_5;
 if (FUNC_6(VAR_1, "ftp://") != VAR_1) return 0;
 for (VAR_4 = (char*)VAR_1 + 6; *VAR_4 && *VAR_4 != '/'; ++VAR_4);
 if (*VAR_4 != '/') return 0;
 VAR_5 = VAR_4 - VAR_1 - 6;
 VAR_3 = (knetFile*)FUNC_0(1, sizeof(knetFile));
 VAR_3->type = VAR_0;
 VAR_3->fd = -1;


 VAR_3->port = FUNC_3("21");
 VAR_3->host = (char*)FUNC_0(VAR_5 + 1, 1);
 if (FUNC_2(VAR_2, 'c')) VAR_3->no_reconnect = 1;
 FUNC_5(VAR_3->host, VAR_1 + 6, VAR_5);
 VAR_3->retr = (char*)FUNC_0(FUNC_4(VAR_4) + 8, 1);
 FUNC_1(VAR_3->retr, "RETR %s\r\n", VAR_4);
    VAR_3->size_cmd = (char*)FUNC_0(FUNC_4(VAR_4) + 8, 1);
    FUNC_1(VAR_3->size_cmd, "SIZE %s\r\n", VAR_4);
 VAR_3->seek_offset = 0;
 return VAR_3;
}
