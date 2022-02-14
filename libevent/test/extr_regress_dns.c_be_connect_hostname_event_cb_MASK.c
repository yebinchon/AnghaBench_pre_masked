
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;
struct be_conn_hostname_result {short what; int dnserr; } ;


 short VAR_0 ;
 short VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (struct bufferevent*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_5(struct bufferevent *VAR_7, short VAR_8, void *VAR_9)
{
 struct be_conn_hostname_result *VAR_10 = VAR_9;

 if (VAR_10->what) {
  FUNC_1(("Two events on one bufferevent. %d,%d",
   VAR_10->what, (int)VAR_8));
 }

 FUNC_0(("Got a bufferevent event %d", VAR_8));
 VAR_10->what = VAR_8;

 if ((VAR_8 & VAR_0) || (VAR_8 & VAR_1)) {
  int VAR_11 = 3;
  int VAR_12 = FUNC_2(VAR_7);

  if (VAR_12) {
   VAR_10->dnserr = VAR_12;
   FUNC_0(("DNS error %d: %s", VAR_12,
       FUNC_4(VAR_12)));
  }
  ++VAR_5;
  FUNC_0(("Got %d connections or errors.", VAR_5));


  if (VAR_4 == VAR_2) {
   VAR_11 = 0;
  }

  if (VAR_6 >= VAR_11 && VAR_5 >= 5)
   FUNC_3(VAR_3,
       ((void*)0));
 }
}
