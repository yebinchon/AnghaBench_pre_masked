
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int quicly_stream_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char*,int,char const*) ;

__attribute__((used)) static void FUNC_2(quicly_stream_t *VAR_0, int VAR_1, int VAR_2, const char *VAR_3)
{
    char VAR_4[256];

    if (!VAR_1)
        return;

    FUNC_1(VAR_4, "HTTP/1.1 %03d OK\r\nConnection: close\r\nContent-Type: %s\r\n\r\n", VAR_2, VAR_3);
    FUNC_0(VAR_0, VAR_4);
}
