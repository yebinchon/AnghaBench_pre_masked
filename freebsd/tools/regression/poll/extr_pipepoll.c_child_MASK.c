
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; int revents; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct pollfd*,int,int ) ;
 int VAR_8 ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int ,char*,int,int ,int,int) ;
 int VAR_9 ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(int VAR_10, int VAR_11)
{
 struct pollfd VAR_12;
 int VAR_13, VAR_14;
 char VAR_15[256];

 if (VAR_7 == VAR_1) {
  VAR_10 = FUNC_4(VAR_0, VAR_3 | VAR_2);
  if (VAR_10 < 0)
   FUNC_1(1, "open for read");
 }
 VAR_12.fd = VAR_10;
 VAR_12.events = VAR_5;

 if (VAR_7 == VAR_1) {
  if ((VAR_14 = FUNC_5(&VAR_12, 1, 0)) < 0)
   FUNC_1(1, "poll");
  FUNC_7(VAR_11++, "0", 0, VAR_12.revents, VAR_14, 0);
 }
 FUNC_3(VAR_8, VAR_6);

 FUNC_8(1);
 while (VAR_9 != 1)
  ;
 if (VAR_7 != VAR_1) {





  VAR_9 = 4;
  goto state4;
 }
 if ((VAR_14 = FUNC_5(&VAR_12, 1, 0)) < 0)
  FUNC_1(1, "poll");
 FUNC_7(VAR_11++, "1", 0, VAR_12.revents, VAR_14, 0);
 FUNC_3(VAR_8, VAR_6);

 FUNC_8(1);
 while (VAR_9 != 2)
  ;
 if ((VAR_14 = FUNC_5(&VAR_12, 1, 0)) < 0)
  FUNC_1(1, "poll");
 FUNC_7(VAR_11++, "2", VAR_5, VAR_12.revents, VAR_14, 1);
 if (FUNC_6(VAR_10, VAR_15, sizeof VAR_15) != 1)
  FUNC_1(1, "read");
 if ((VAR_14 = FUNC_5(&VAR_12, 1, 0)) < 0)
  FUNC_1(1, "poll");
 FUNC_7(VAR_11++, "2a", 0, VAR_12.revents, VAR_14, 0);
 FUNC_3(VAR_8, VAR_6);

 FUNC_8(1);
 while (VAR_9 != 3)
  ;
 if ((VAR_14 = FUNC_5(&VAR_12, 1, 0)) < 0)
  FUNC_1(1, "poll");
 FUNC_7(VAR_11++, "3", VAR_4, VAR_12.revents, VAR_14, 1);
 FUNC_3(VAR_8, VAR_6);







 FUNC_8(1);
 while (VAR_9 != 4)
  ;
state4:
 if ((VAR_14 = FUNC_5(&VAR_12, 1, 0)) < 0)
  FUNC_1(1, "poll");
 FUNC_7(VAR_11++, "4", 0, VAR_12.revents, VAR_14, 0);
 FUNC_3(VAR_8, VAR_6);

 FUNC_8(1);
 while (VAR_9 != 5)
  ;
 if ((VAR_14 = FUNC_5(&VAR_12, 1, 0)) < 0)
  FUNC_1(1, "poll");
 FUNC_7(VAR_11++, "5", VAR_5, VAR_12.revents, VAR_14, 1);
 FUNC_3(VAR_8, VAR_6);

 FUNC_8(1);
 while (VAR_9 != 6)
  ;
 if ((VAR_14 = FUNC_5(&VAR_12, 1, 0)) < 0)
  FUNC_1(1, "poll");
 FUNC_7(VAR_11++, "6", VAR_5 | VAR_4, VAR_12.revents, VAR_14, 1);
 if (FUNC_6(VAR_10, VAR_15, sizeof VAR_15) != 1)
  FUNC_1(1, "read");
 if ((VAR_14 = FUNC_5(&VAR_12, 1, 0)) < 0)
  FUNC_1(1, "poll");
 FUNC_7(VAR_11++, "6a", VAR_4, VAR_12.revents, VAR_14, 1);
 if (VAR_7 == VAR_1) {




  VAR_13 = FUNC_4(VAR_0, VAR_3 | VAR_2);
  if (VAR_13 < 0)
   FUNC_1(1, "open for read");
  VAR_12.fd = VAR_13;
  if ((VAR_14 = FUNC_5(&VAR_12, 1, 0)) < 0)
   FUNC_1(1, "poll");
  FUNC_7(VAR_11++, "6b", VAR_4, VAR_12.revents, VAR_14, 1);
  VAR_12.fd = VAR_10;
  if ((VAR_14 = FUNC_5(&VAR_12, 1, 0)) < 0)
   FUNC_1(1, "poll");
  FUNC_7(VAR_11++, "6c", VAR_4, VAR_12.revents, VAR_14, 1);
  FUNC_0(VAR_13);
  if ((VAR_14 = FUNC_5(&VAR_12, 1, 0)) < 0)
   FUNC_1(1, "poll");
  FUNC_7(VAR_11++, "6d", VAR_4, VAR_12.revents, VAR_14, 1);
 }
 FUNC_0(VAR_10);
 FUNC_3(VAR_8, VAR_6);

 FUNC_2(0);
}
