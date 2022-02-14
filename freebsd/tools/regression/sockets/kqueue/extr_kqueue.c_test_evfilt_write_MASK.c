
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct kevent {int dummy; } ;
typedef int ssize_t ;
typedef int ch ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kevent*,int,int ,int ,int ,int ,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__,char*,char const*,char*) ;
 int FUNC_3 (char*,char const*,char*,char*) ;
 int FUNC_4 (int,struct kevent*,int,struct kevent*,int,struct timespec*) ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void
FUNC_6(int VAR_6, int VAR_7[2], const char *VAR_8)
{
 struct timespec VAR_9;
 struct kevent VAR_10;
 ssize_t VAR_11;
 char VAR_12;
 int VAR_13;

 FUNC_0(&VAR_10, VAR_7[0], VAR_2, VAR_3, 0, 0, ((void*)0));
 if (FUNC_4(VAR_6, &VAR_10, 1, ((void*)0), 0, ((void*)0)) == -1)
  FUNC_2(VAR_5, "kevent", VAR_8, "EVFILT_WRITE, EV_ADD");
 FUNC_1("EVFILE_WRITE, EV_ADD");




 VAR_9.tv_sec = 0;
 VAR_9.tv_nsec = 0;
 VAR_13 = FUNC_4(VAR_6, ((void*)0), 0, &VAR_10, 1, &VAR_9);
 if (VAR_13 == -1)
  FUNC_2(VAR_5, "kevent", VAR_8, "EVFILT_WRITE");
 FUNC_1("EVFILE_WRITE");
 if (VAR_13 != 1)
  FUNC_3("kevent", VAR_8, "EVFILT_WRITE",
      "empty socket unwritable");
 FUNC_1("empty socket unwritable");




 VAR_12 = 'a';
 while ((VAR_11 = FUNC_5(VAR_7[0], &VAR_12, sizeof(VAR_12))) == sizeof(VAR_12)) {};
 if (VAR_11 == -1 && VAR_5 != VAR_0 && VAR_5 != VAR_1)
  FUNC_2(VAR_5, "write", VAR_8, ((void*)0));
 FUNC_1("write");
 if (VAR_11 != -1 && VAR_11 != sizeof(VAR_12))
  FUNC_3("write", VAR_8, ((void*)0), "write length");
 FUNC_1("write length");




 VAR_9.tv_sec = 0;
 VAR_9.tv_nsec = 0;
 VAR_13 = FUNC_4(VAR_6, ((void*)0), 0, &VAR_10, 1, &VAR_9);
 if (VAR_13 == -1)
  FUNC_2(VAR_5, "kevent", VAR_8, "EVFILT_WRITE");
 FUNC_1("EVFILT_WRITE");
 if (VAR_13 != 0)
  FUNC_3("kevent", VAR_8, "EVFILT_WRITE",
      "full socket writable");
 FUNC_1("full socket writable");

 FUNC_0(&VAR_10, VAR_7[0], VAR_2, VAR_4, 0, 0, ((void*)0));
 if (FUNC_4(VAR_6, &VAR_10, 1, ((void*)0), 0, ((void*)0)) == -1)
  FUNC_2(VAR_5, "kevent", VAR_8, "EVFILT_WRITE, EV_DELETE");
 FUNC_1("EVFILT_WRITE, EV_DELETE");
}
