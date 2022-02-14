
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct stat {int st_mtime; } ;
struct TYPE_2__ {int suffix; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_1 ;
 char* FUNC_1 (size_t) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (char*,char const*,size_t) ;
 int FUNC_8 (int ) ;
 char* FUNC_9 (char const*,char) ;
 int * VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_10(const char *VAR_7)
{
 struct stat VAR_8;
 const char *VAR_9;
 static unsigned int VAR_10 = 0;
 char *VAR_11;
 size_t VAR_12;
 time_t VAR_13;
 int VAR_14;

 if (VAR_10 == 0) {
  for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
   VAR_10 = FUNC_0(VAR_10,
       FUNC_8(VAR_4[VAR_14].suffix));
 }

 VAR_12 = VAR_1 + sizeof(".0") + VAR_10 + 1;
 VAR_11 = FUNC_1(VAR_12);

 if (VAR_3) {
  char *VAR_15;


  if (*VAR_2 == '/') {
   FUNC_7(VAR_11, VAR_2, VAR_12);
  } else {

   FUNC_7(VAR_11, VAR_7, VAR_12);
   if ((VAR_15 = FUNC_9(VAR_11, '/')) == ((void*)0))
    VAR_11[0] = '\0';
   else
    *(VAR_15 + 1) = '\0';
   FUNC_6(VAR_11, VAR_2, VAR_12);
  }

  FUNC_6(VAR_11, "/", VAR_12);


  if ((VAR_15 = FUNC_9(VAR_7, '/')) == ((void*)0))
   FUNC_6(VAR_11, VAR_7, VAR_12);
  else
   FUNC_6(VAR_11, VAR_15 + 1, VAR_12);
 } else {
  (void) FUNC_7(VAR_11, VAR_7, VAR_12);
 }

 if (VAR_5 != ((void*)0)) {
  VAR_13 = FUNC_3(VAR_11);
  if (VAR_13 == -1)
   return (-1);
 } else {
  FUNC_6(VAR_11, ".0", VAR_12);
  VAR_9 = FUNC_2(VAR_11);
  if (VAR_9 == ((void*)0))
   return (-1);
  (void) FUNC_6(VAR_11, VAR_9, VAR_12);
  if (FUNC_5(VAR_11, &VAR_8) < 0)
   return (-1);
  VAR_13 = VAR_8.st_mtime;
 }

 return ((int)(FUNC_4(VAR_6) - VAR_13 + 1800) / 3600);
}
