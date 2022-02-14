
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct archive*,char*,int) ;
 char* VAR_2 ;
 scalar_t__ FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int,...) ;

__attribute__((used)) static int
FUNC_8(struct archive *VAR_5, char *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 ssize_t VAR_11;
 unsigned char *VAR_12, *VAR_13, *VAR_14;

 VAR_9 = VAR_1;
 VAR_10 = 0;
 VAR_8 = 0;


 for (int VAR_15 = 0; ; VAR_15++) {
  if (VAR_7 != VAR_0)
   if (VAR_4 && (VAR_15 % 4) == 0)
    FUNC_5(" %c\b\b", VAR_3[(VAR_15 / 4) % sizeof VAR_3]);

  VAR_11 = FUNC_2(VAR_5, VAR_2, sizeof VAR_2);

  if (VAR_11 < 0)
   FUNC_1(VAR_11);


  if (VAR_1 && VAR_8) {
   if (VAR_11 == 0 || VAR_2[0] != '\n')
    if (FUNC_7(VAR_7, "\r", 1) != 1)
     FUNC_4("write('%s')", VAR_6);
   VAR_8 = 0;
  }


  if (VAR_11 == 0)
   break;
  VAR_14 = VAR_2 + VAR_11;
  if (VAR_1 && VAR_15 == 0) {
   if (FUNC_3(VAR_2, VAR_11))
    VAR_9 = 0;
  }


  if (!VAR_1 || !VAR_9) {
   if (FUNC_7(VAR_7, VAR_2, VAR_11) != VAR_11)
    FUNC_4("write('%s')", VAR_6);
   continue;
  }


  for (VAR_12 = VAR_2; VAR_12 < VAR_14; VAR_12 = VAR_13 + 1) {
   for (VAR_13 = VAR_12; VAR_13 < VAR_14; VAR_13++) {
    if (!VAR_10 && FUNC_0(*VAR_13)) {
     FUNC_6("%s may be corrupted due"
         " to weak text file detection"
         " heuristic", VAR_6);
     VAR_10 = 1;
    }
    if (VAR_13[0] != '\r')
     continue;
    if (&VAR_13[1] == VAR_14) {
     VAR_8 = 1;
     break;
    }
    if (VAR_13[1] == '\n')
     break;
   }
   if (FUNC_7(VAR_7, VAR_12, VAR_13 - VAR_12) != VAR_13 - VAR_12)
    FUNC_4("write('%s')", VAR_6);
  }
 }

 return VAR_9;
}
