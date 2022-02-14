
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oidname {int dummy; } ;
struct oid {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,size_t,char*,size_t*) ;
 int FUNC_1 (int ,char*,char const*,size_t) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char**,char*) ;
 char* FUNC_7 (size_t) ;
 int FUNC_8 (struct oid*,char*) ;
 scalar_t__ FUNC_9 (struct oid*,struct oid*) ;
 int FUNC_10 (struct oid*) ;
 scalar_t__ FUNC_11 (struct oid*,struct oid*) ;
 int FUNC_12 (struct oid*,struct oidname*,int,int *) ;
 int FUNC_13 (struct oidname*) ;
 int * FUNC_14 (char**,size_t*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_15 (int ,char*,int) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int * VAR_4 ;
 int FUNC_17 () ;
 int FUNC_18 (int ,char*,size_t) ;

int
FUNC_19(int VAR_5, char *VAR_6[])
{
 struct oidname VAR_7;
 char *VAR_8;
 FILE *VAR_9;
 size_t VAR_10;
 int VAR_11;
 bool VAR_12, VAR_13, VAR_14;


 VAR_12 = VAR_13 = VAR_14 = 0;
 while ((VAR_11 = FUNC_6(VAR_5, VAR_6, "dgh")) != -1) {
  switch (VAR_11) {
  case 'd':
   VAR_14 = 1;
   break;
  case 'g':
   VAR_12 = 1;
   break;
  case 'h':
   VAR_13 = 1;
   break;
  default:
   FUNC_17();
  }
 }
 VAR_5 -= VAR_3;
 VAR_6 += VAR_3;


 if (VAR_13) {
  VAR_9 = FUNC_14(&VAR_8, &VAR_10);
  if (VAR_9 == ((void*)0))
   FUNC_2(1, "open_memstream");
 } else {
  VAR_9 = VAR_4;
 }

 FUNC_13(&VAR_7);
 if (VAR_5 == 0) {
  struct oid VAR_15;


  FUNC_10(&VAR_15);
  do {
   FUNC_12(&VAR_15, &VAR_7, VAR_14, VAR_9);
  } while (FUNC_9(&VAR_15, &VAR_15));
 } else {
  int VAR_16;


  for (VAR_16 = 0; VAR_16 < VAR_5; ++VAR_16) {
   struct oid VAR_17, VAR_18;

   FUNC_8(&VAR_18, VAR_6[VAR_16]);
   VAR_17 = VAR_18;
   do {
    FUNC_12(&VAR_17, &VAR_7, VAR_14, VAR_9);
   } while (FUNC_9(&VAR_17, &VAR_17) &&
       FUNC_11(&VAR_17, &VAR_18));
  }
 }

 if (VAR_13) {
  const char *VAR_19 = "";

  if (FUNC_4(VAR_9) || FUNC_3(VAR_9) != 0)
   FUNC_2(1, "Cannot generate output");


  if (VAR_12) {
   char *VAR_20;
   size_t VAR_21;

   VAR_21 = VAR_10;
   VAR_20 = FUNC_7(VAR_21);
   if (VAR_20 == ((void*)0))
    FUNC_2(1, "Cannot allocate compression buffer");
   if (FUNC_0(VAR_8, VAR_10, VAR_20, &VAR_21)) {
    VAR_19 = "Content-Encoding: gzip\r\n";
    FUNC_5(VAR_8);
    VAR_8 = VAR_20;
    VAR_10 = VAR_21;
   } else {
    FUNC_5(VAR_20);
   }
  }


  FUNC_1(VAR_2,
      "HTTP/1.1 200 OK\r\n"
      "Connection: close\r\n"
      "%s"
      "Content-Length: %zu\r\n"
      "Content-Type: text/plain; version=0.0.4\r\n"
      "\r\n",
      VAR_19, VAR_10);
  FUNC_18(VAR_2, VAR_8, VAR_10);
  FUNC_5(VAR_8);


  if (FUNC_16(VAR_1, VAR_0) == 0) {
   char VAR_22[1024];

   while (FUNC_15(VAR_1, VAR_22, sizeof(VAR_22)) > 0) {
   }
  }
 }
 return (0);
}
