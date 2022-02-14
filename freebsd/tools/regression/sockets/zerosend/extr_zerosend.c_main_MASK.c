
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (char*,int*) ;
 int FUNC_2 (char*,int*) ;
 int FUNC_3 (char*,int*,scalar_t__) ;
 int FUNC_4 (char*,int*,scalar_t__,scalar_t__) ;
 int FUNC_5 (char*,int*) ;
 int FUNC_6 (char*,int*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int) ;

int
FUNC_9(void)
{
 int VAR_2[2];

 FUNC_4("udp_0send", VAR_2, VAR_0, VAR_1);
 FUNC_7("udp_0send", VAR_2[0]);
 FUNC_0(VAR_2);

 FUNC_4("udp_0write", VAR_2, VAR_0 + 10, VAR_1 + 10);
 FUNC_8("udp_0write", VAR_2[0]);
 FUNC_0(VAR_2);

 FUNC_3("tcp_0send", VAR_2, VAR_0);
 FUNC_7("tcp_0send", VAR_2[0]);
 FUNC_0(VAR_2);

 FUNC_3("tcp_0write", VAR_2, VAR_0 + 10);
 FUNC_8("tcp_0write", VAR_2[0]);
 FUNC_0(VAR_2);

 FUNC_6("udsstream_0send", VAR_2);
 FUNC_7("udsstream_0send", VAR_2[0]);
 FUNC_0(VAR_2);

 FUNC_6("udsstream_0write", VAR_2);
 FUNC_8("udsstream_0write", VAR_2[0]);
 FUNC_0(VAR_2);

 FUNC_5("udsdgram_0send", VAR_2);
 FUNC_7("udsdgram_0send", VAR_2[0]);
 FUNC_0(VAR_2);

 FUNC_5("udsdgram_0write", VAR_2);
 FUNC_8("udsdgram_0write", VAR_2[0]);
 FUNC_0(VAR_2);

 FUNC_2("pipe_0write", VAR_2);
 FUNC_8("pipd_0write", VAR_2[0]);
 FUNC_0(VAR_2);

 FUNC_1("fifo_0write", VAR_2);
 FUNC_8("fifo_0write", VAR_2[0]);
 FUNC_0(VAR_2);

 return (0);
}
