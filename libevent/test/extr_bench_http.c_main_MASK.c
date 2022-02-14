
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_0; int member_1; } ;
struct evhttp {int dummy; } ;
struct event_config {int dummy; } ;
struct event_base {int dummy; } ;
typedef int ev_uint16_t ;
typedef int WSADATA ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int *) ;
 int* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct event_base*) ;
 char* FUNC_3 (struct event_base*) ;
 int FUNC_4 (struct event_base*,struct timeval*) ;
 struct event_base* FUNC_5 (struct event_config*) ;
 struct event_config* FUNC_6 () ;
 int FUNC_7 (struct event_config*,int ) ;
 int FUNC_8 (struct evhttp*,char*,int) ;
 struct evhttp* FUNC_9 (struct event_base*) ;
 int FUNC_10 (struct evhttp*,char*,int ,int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int* FUNC_14 (scalar_t__) ;
 int FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_17 (char*,char**,int) ;

int
FUNC_18(int VAR_10, char **VAR_11)
{
 struct event_config *VAR_12 = FUNC_6();
 struct event_base *VAR_13;
 struct evhttp *VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17 = 0;
 ev_uint16_t VAR_18 = 8080;
 char *VAR_19 = ((void*)0);





 if (FUNC_16(VAR_1, VAR_3) == VAR_2)
  return (1);


 FUNC_15(VAR_9, ((void*)0));
 FUNC_15(VAR_8, ((void*)0));

 for (VAR_15 = 1; VAR_15 < VAR_10; ++VAR_15) {
  if (*VAR_11[VAR_15] != '-')
   continue;

  VAR_16 = VAR_11[VAR_15][1];

  if ((VAR_16 == 'p' || VAR_16 == 'l') && VAR_15 + 1 >= VAR_10) {
   FUNC_13(VAR_8, "-%c requires argument.\n", VAR_16);
   FUNC_12(1);
  }

  switch (VAR_16) {
  case 'p':
   if (VAR_15+1 >= VAR_10 || !VAR_11[VAR_15+1]) {
    FUNC_13(VAR_8, "Missing port\n");
    FUNC_12(1);
   }
   VAR_18 = (int)FUNC_17(VAR_11[VAR_15+1], &VAR_19, 10);
   if (*VAR_19 != '\0') {
    FUNC_13(VAR_8, "Bad port\n");
    FUNC_12(1);
   }
   break;
  case 'l':
   if (VAR_15+1 >= VAR_10 || !VAR_11[VAR_15+1]) {
    FUNC_13(VAR_8, "Missing content length\n");
    FUNC_12(1);
   }
   VAR_5 = (size_t)FUNC_17(VAR_11[VAR_15+1], &VAR_19, 10);
   if (*VAR_19 != '\0' || VAR_5 == 0) {
    FUNC_13(VAR_8, "Bad content length\n");
    FUNC_12(1);
   }
   break;
  default:
   FUNC_13(VAR_8, "Illegal argument \"%c\"\n", VAR_16);
   FUNC_12(1);
  }
 }

 VAR_13 = FUNC_5(VAR_12);
 if (!VAR_13) {
  FUNC_13(VAR_8, "creating event_base failed. Exiting.\n");
  return 1;
 }

 VAR_14 = FUNC_9(VAR_13);

 VAR_4 = FUNC_14(VAR_5);
 if (VAR_4 == ((void*)0)) {
  FUNC_13(VAR_8, "Cannot allocate content\n");
  FUNC_12(1);
 } else {
  int VAR_20 = 0;
  for (VAR_20 = 0; VAR_20 < (int)VAR_5; ++VAR_20)
   VAR_4[VAR_20] = (VAR_20 & 255);
 }

 FUNC_10(VAR_14, "/ind", VAR_6, ((void*)0));
 FUNC_13(VAR_8, "/ind - basic content (memory copy)\n");

 FUNC_10(VAR_14, "/ref", VAR_7, ((void*)0));
 FUNC_13(VAR_8, "/ref - basic content (reference)\n");

 FUNC_13(VAR_8, "Serving %d bytes on port %d using %s\n",
     (int)VAR_5, VAR_18,
     VAR_17? "IOCP" : FUNC_3(VAR_13));

 FUNC_8(VAR_14, "0.0.0.0", VAR_18);







 FUNC_2(VAR_13);






 return (0);
}
