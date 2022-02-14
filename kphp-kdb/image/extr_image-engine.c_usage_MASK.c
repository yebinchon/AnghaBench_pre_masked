
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int,int,int) ;
 int VAR_3 ;

void FUNC_2 (void) {
  FUNC_1 ("usage: image-engine [-d] [-v] [-p<port>] [-u<username>] [-g<groupname>] [-c<max-conn>] [-l<log_name>] [-P<max-child-process-number>][-H<max-all-child-process-result>] [-n<nice>] [-N<nice>] [-A<area>] [-M<memory>]\n"
          "%s\n"
          "[-p<port>]\tTCP port number to listen on (default: %d)\n"
          "[-u<username>]\tassume identity of <username> (only when run as root)\n"
          "[-c<max_conn>]\tmax simultaneous connections, default is %d\n"
          "[-v]\t\tverbose\n"
          "[-h]\t\tprint this help and exit\n"
          "[-b<backlog>]\n"
          "[-l<log_name>]\tlog... about something\n"
          "[-P<max-child-process-number>]\t\n"
          "[-H<max-all-child-process-result>]\tdefault 16m\n"
          "[-n<nice>]\tset main process nice (range from -20 to 19)\n"
          "[-N<nice>]\tset job process nice (range from -20 to 19)\n"
          "[-M<memory>]\tset GraphicsMagick memory limit (default: 256m)\n"
          "[-R<memory>]\tset resident set size limit (default: 1g)\n"
          "[-A<area>]\tset max load image area in pixels\n"
          "[-T<threads>]\tset threads limit (default: %d)\n",
          VAR_0,
          VAR_2,
          VAR_1,
          VAR_3
         );
  FUNC_0 (2);
}
