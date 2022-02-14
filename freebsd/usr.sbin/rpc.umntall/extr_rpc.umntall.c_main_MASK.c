
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct mtablist {char* mtab_host; scalar_t__ mtab_time; char* mtab_dirp; struct mtablist* mtab_next; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int,char**,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 struct mtablist* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 int FUNC_11 (scalar_t__*) ;
 int FUNC_12 () ;
 int VAR_4 ;
 int FUNC_13 (char*,char*,...) ;
 int FUNC_14 (int) ;

int
FUNC_15(int VAR_5, char **VAR_6) {
 int VAR_7, VAR_8, VAR_9, VAR_10;
 time_t VAR_11, VAR_12;
 char *VAR_13, *VAR_14;
 struct mtablist *VAR_15;

 VAR_11 = 0;
 VAR_13 = VAR_14 = ((void*)0);
 VAR_9 = VAR_8 = VAR_4 = 0;
 while ((VAR_7 = FUNC_7(VAR_5, VAR_6, "h:kp:ve:")) != -1)
  switch (VAR_7) {
  case 'h':
   VAR_13 = VAR_2;
   break;
  case 'e':
   VAR_11 = FUNC_0(VAR_2);
   break;
  case 'k':
   VAR_8 = 1;
   break;
  case 'p':
   VAR_14 = VAR_2;
   break;
  case 'v':
   VAR_4 = 1;
   break;
  case '?':
   FUNC_12();
  default:
   break;
  }
 VAR_5 -= VAR_3;
 VAR_6 += VAR_3;


 if (VAR_11 == 0)
  VAR_11 = 86400;
 FUNC_11(&VAR_12);


 if (!FUNC_9()) {
  if (VAR_4)
   FUNC_13("no mounttab entries (%s does not exist)",
       VAR_0);
  VAR_1 = ((void*)0);
 }

 if (VAR_13 == ((void*)0) && VAR_14 == ((void*)0)) {

  for (VAR_15 = VAR_1; VAR_15 != ((void*)0); VAR_15 = VAR_15->mtab_next) {
   if (*VAR_15->mtab_host == '\0')
    continue;
   if (VAR_15->mtab_time + VAR_11 < VAR_12) {

    if (VAR_4)
     FUNC_13("remove expired entry %s:%s",
         VAR_15->mtab_host, VAR_15->mtab_dirp);
    FUNC_1(VAR_15->mtab_host,
        sizeof(VAR_15->mtab_host));
    continue;
   }
   if (VAR_8 && FUNC_8(VAR_15->mtab_host,
       VAR_15->mtab_dirp)) {
    if (VAR_4)
     FUNC_13("skip entry %s:%s",
         VAR_15->mtab_host, VAR_15->mtab_dirp);
    continue;
   }
   if (FUNC_4(VAR_15->mtab_host, VAR_15->mtab_dirp)) {
    if (VAR_4)
     FUNC_13("umount RPC for %s:%s succeeded",
         VAR_15->mtab_host, VAR_15->mtab_dirp);

    FUNC_2(VAR_15->mtab_host, VAR_15->mtab_dirp,
        VAR_4);
   }
  }
  VAR_9 = 1;
 } else {
  if (VAR_13 == ((void*)0) && VAR_14 != ((void*)0))

   FUNC_12();
  if (VAR_14 == ((void*)0)) {

   VAR_9 = FUNC_3(VAR_13);
   if (VAR_4 && VAR_9)
    FUNC_13("umntall RPC for %s succeeded", VAR_13);
  } else {

   for (VAR_10 = FUNC_10(VAR_14);
       VAR_10 > 1 && VAR_14[VAR_10 - 1] == '/'; VAR_10--)
    VAR_14[VAR_10 - 1] = '\0';
   VAR_9 = FUNC_4(VAR_13, VAR_14);
   if (VAR_4 && VAR_9)
    FUNC_13("umount RPC for %s:%s succeeded", VAR_13,
        VAR_14);
  }

  if (VAR_9)
   FUNC_2(VAR_13, VAR_14, VAR_4);
 }

 if (VAR_9)
  VAR_9 = FUNC_14(VAR_4);
 FUNC_6();
 FUNC_5 (VAR_9 ? 0 : 1);
}
