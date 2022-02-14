
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct kevent {int dummy; } ;
typedef int ssize_t ;
typedef int ch ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kevent*,int,int ,int ,int ,int ,int *) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,char const*,char*) ;
 int FUNC_3 (char*,char const*,char*,char*) ;
 int FUNC_4 (int,struct kevent*,int,struct kevent*,int,struct timespec*) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static void
FUNC_7(int VAR_4, int VAR_5[2], const char *VAR_6)
{
 struct timespec VAR_7;
 struct kevent VAR_8;
 ssize_t VAR_9;
 char VAR_10;
 int VAR_11;

 FUNC_0(&VAR_8, VAR_5[0], VAR_0, VAR_1, 0, 0, ((void*)0));
 if (FUNC_4(VAR_4, &VAR_8, 1, ((void*)0), 0, ((void*)0)) == -1)
  FUNC_2(VAR_3, "kevent", VAR_6, "EVFILT_READ, EV_ADD");
 FUNC_1("EVFILT_READ, EV_ADD");




 VAR_7.tv_sec = 0;
 VAR_7.tv_nsec = 0;
 VAR_11 = FUNC_4(VAR_4, ((void*)0), 0, &VAR_8, 1, &VAR_7);
 if (VAR_11 == -1)
  FUNC_2(VAR_3, "kevent", VAR_6, "EVFILT_READ");
 FUNC_1("EVFILT_READ");
 if (VAR_11 != 0)
  FUNC_3("kevent", VAR_6, "EVFILT_READ",
      "empty socket unreadable");
 FUNC_1("empty socket unreadable");




 VAR_10 = 'a';
 VAR_9 = FUNC_6(VAR_5[1], &VAR_10, sizeof(VAR_10));
 if (VAR_9 == -1)
  FUNC_2(VAR_3, "write", VAR_6, ((void*)0));
 FUNC_1("write one byte");
 if (VAR_9 != sizeof(VAR_10))
  FUNC_3("write", VAR_6, ((void*)0), "write length");
 FUNC_1("write one byte length");




 VAR_7.tv_sec = 0;
 VAR_7.tv_nsec = 0;
 VAR_11 = FUNC_4(VAR_4, ((void*)0), 0, &VAR_8, 1, &VAR_7);
 if (VAR_11 == -1)
  FUNC_2(VAR_3, "kevent", VAR_6, "EVFILT_READ");
 FUNC_1("EVFILT_READ");
 if (VAR_11 != 1)
  FUNC_3("kevent", VAR_6, "EVFILT_READ",
      "non-empty socket unreadable");
 FUNC_1("non-empty socket unreadable");




 VAR_9 = FUNC_5(VAR_5[0], &VAR_10, sizeof(VAR_10));
 if (VAR_9 == -1)
  FUNC_2(VAR_3, "read", VAR_6, ((void*)0));
 FUNC_1("read one byte");
 if (VAR_9 != sizeof(VAR_10))
  FUNC_3("read", VAR_6, ((void*)0), "read length");
 FUNC_1("read one byte length");




 VAR_7.tv_sec = 0;
 VAR_7.tv_nsec = 0;
 VAR_11 = FUNC_4(VAR_4, ((void*)0), 0, &VAR_8, 1, &VAR_7);
 if (VAR_11 == -1)
  FUNC_2(VAR_3, "kevent", VAR_6, "EVFILT_READ");
 FUNC_1("EVFILT_READ");
 if (VAR_11 != 0)
  FUNC_3("kevent", VAR_6, "EVFILT_READ",
      "empty socket unreadable");
 FUNC_1("empty socket unreadable");

 FUNC_0(&VAR_8, VAR_5[0], VAR_0, VAR_2, 0, 0, ((void*)0));
 if (FUNC_4(VAR_4, &VAR_8, 1, ((void*)0), 0, ((void*)0)) == -1)
  FUNC_2(VAR_3, "kevent", VAR_6, "EVFILT_READ, EV_DELETE");
 FUNC_1("EVFILT_READ, EV_DELETE");
}
