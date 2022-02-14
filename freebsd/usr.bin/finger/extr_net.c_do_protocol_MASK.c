
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
struct msghdr {size_t msg_iovlen; scalar_t__ msg_flags; scalar_t__ msg_controllen; scalar_t__ msg_control; struct iovec* msg_iov; int msg_namelen; void* msg_name; } ;
struct iovec {char* iov_base; int iov_len; } ;
struct addrinfo {int ai_addrlen; scalar_t__ ai_addr; int ai_protocol; int ai_socktype; int ai_family; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int,struct msghdr*,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 char* FUNC_13 (char const*) ;
 int FUNC_14 (char const*) ;
 int FUNC_15 (char*,...) ;

__attribute__((used)) static int
FUNC_16(const char *VAR_4, const struct addrinfo *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 FILE *VAR_9;
 wint_t VAR_10, VAR_11;
 struct iovec VAR_12[3];
 struct msghdr VAR_13;
 static char VAR_14[] = "/W ";
 static char VAR_15[] = "\r\n";

 VAR_8 = FUNC_12(VAR_5->ai_family, VAR_5->ai_socktype, VAR_5->ai_protocol);
 if (VAR_8 < 0) {
  FUNC_15("socket(%d, %d, %d)", VAR_5->ai_family, VAR_5->ai_socktype,
       VAR_5->ai_protocol);
  return -1;
 }

 VAR_13.msg_name = (void *)VAR_5->ai_addr;
 VAR_13.msg_namelen = VAR_5->ai_addrlen;
 VAR_13.msg_iov = VAR_12;
 VAR_13.msg_iovlen = 0;
 VAR_13.msg_control = 0;
 VAR_13.msg_controllen = 0;
 VAR_13.msg_flags = 0;


 if (VAR_3) {
  VAR_12[VAR_13.msg_iovlen].iov_base = VAR_14;
  VAR_12[VAR_13.msg_iovlen++].iov_len = 3;
 }

 VAR_12[VAR_13.msg_iovlen].iov_base = FUNC_13(VAR_4);
 VAR_12[VAR_13.msg_iovlen++].iov_len = FUNC_14(VAR_4);
 VAR_12[VAR_13.msg_iovlen].iov_base = VAR_15;
 VAR_12[VAR_13.msg_iovlen++].iov_len = 2;

 if (FUNC_1(VAR_8, VAR_5->ai_addr, VAR_5->ai_addrlen) < 0) {
  FUNC_15("connect");
  FUNC_0(VAR_8);
  return -1;
 }

 if (FUNC_11(VAR_8, &VAR_13, 0) < 0) {
  FUNC_15("sendmsg");
  FUNC_0(VAR_8);
  return -1;
 }
 VAR_11 = 0;
 if ((VAR_9 = FUNC_3(VAR_8, "r")) != ((void*)0)) {
  VAR_6 = 0;
  VAR_7 = 0;
  while ((VAR_10 = FUNC_5(VAR_9)) != VAR_0) {
   if (++VAR_6 > VAR_1) {
    FUNC_8("\n\n Output truncated at %d bytes...\n",
     VAR_6 - 1);
    break;
   }
   if (VAR_10 == 0x0d) {
    if (VAR_11 == '\r')
     continue;
    VAR_10 = '\n';
    VAR_11 = '\r';
   } else {
    if (!FUNC_6(VAR_10) && !FUNC_7(VAR_10)) {
     VAR_10 &= 0x7f;
     VAR_10 |= 0x40;
    }
    if (VAR_11 != '\r' || VAR_10 != '\n')
     VAR_11 = VAR_10;
    else {
     VAR_11 = '\n';
     continue;
    }
   }
   FUNC_10(VAR_10);
   if (VAR_10 != '\n' && ++VAR_7 > VAR_2) {
    FUNC_9('\\');
    FUNC_9('\n');
    VAR_11 = '\r';
   }
   if (VAR_11 == '\n' || VAR_11 == '\r')
    VAR_7 = 0;
  }
  if (FUNC_4(VAR_9)) {



   FUNC_15("reading from network");
  }
  if (VAR_11 != L'\n')
   FUNC_9('\n');

  FUNC_2(VAR_9);
 }
 return 0;
}
