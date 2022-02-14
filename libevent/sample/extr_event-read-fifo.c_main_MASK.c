
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct event_base {int dummy; } ;
struct event {int dummy; } ;
typedef int evutil_socket_t ;
typedef int HANDLE ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int VAR_12 ;
 int FUNC_3 (struct event*,int *) ;
 int FUNC_4 (struct event_base*) ;
 int FUNC_5 (struct event_base*) ;
 struct event_base* FUNC_6 () ;
 struct event* FUNC_7 (struct event_base*,int,int,int ,int ) ;
 int FUNC_8 () ;
 struct event* FUNC_9 (struct event_base*,int ,int ,struct event_base*) ;
 int FUNC_10 (int) ;
 int VAR_13 ;
 int FUNC_11 (int ,char*,char const*) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (char const*,struct stat*) ;
 int FUNC_14 (char const*,int) ;
 int FUNC_15 (char const*,int,int ) ;
 int FUNC_16 (char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_17 (char const*) ;

int
FUNC_18(int VAR_16, char **VAR_17)
{
 struct event *VAR_18;
 struct event_base* VAR_19;
 struct event *VAR_20;
 struct stat VAR_21;
 const char *VAR_22 = "event.fifo";
 int VAR_23;

 if (FUNC_13(VAR_22, &VAR_21) == 0) {
  if ((VAR_21.st_mode & VAR_10) == VAR_11) {
   VAR_12 = VAR_0;
   FUNC_16("lstat");
   FUNC_10(1);
  }
 }

 FUNC_17(VAR_22);
 if (FUNC_14(VAR_22, 0600) == -1) {
  FUNC_16("mkfifo");
  FUNC_10(1);
 }

 VAR_23 = FUNC_15(VAR_22, VAR_8 | VAR_7, 0);

 if (VAR_23 == -1) {
  FUNC_16("open");
  FUNC_10(1);
 }

 FUNC_11(VAR_15, "Write data to %s\n", VAR_22);


 VAR_19 = FUNC_6();







 VAR_20 = FUNC_9(VAR_19, VAR_9, VAR_14, VAR_19);
 FUNC_3(VAR_20, ((void*)0));

 VAR_18 = FUNC_7(VAR_19, VAR_23, VAR_2|VAR_1, VAR_13,
                           FUNC_8());



 FUNC_3(VAR_18, ((void*)0));

 FUNC_4(VAR_19);
 FUNC_5(VAR_19);



 FUNC_2(VAR_23);
 FUNC_17(VAR_22);

 FUNC_12();
 return (0);
}
