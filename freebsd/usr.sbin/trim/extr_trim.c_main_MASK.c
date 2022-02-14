
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,char**,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,scalar_t__,scalar_t__,int,int) ;
 int FUNC_6 (char*) ;

int
FUNC_7(int VAR_5, char **VAR_6)
{
 off_t VAR_7, VAR_8;
 uint64_t VAR_9;
 int VAR_10, VAR_11;
 bool VAR_12, VAR_13;
 char *VAR_14, *VAR_15;

 VAR_11 = 0;
 VAR_8 = VAR_7 = 0;
 VAR_15 = VAR_6[0];
 VAR_12 = VAR_13 = 1;

 while ((VAR_10 = FUNC_2(VAR_5, VAR_6, "Nfl:o:qr:v")) != -1)
  switch (VAR_10) {
  case 'N':
   VAR_12 = 1;
   VAR_13 = 1;
   break;
  case 'f':
   VAR_12 = 0;
   break;
  case 'l':
  case 'o':
   if (FUNC_1(VAR_3, &VAR_9) == -1 ||
     (off_t)VAR_9 < 0 || (VAR_9 == 0 && VAR_10 == 'l'))
    FUNC_0(VAR_2,
     "invalid %s of the region: %s",
     VAR_10 == 'o' ? "offset" : "length",
     VAR_3);
   if (VAR_10 == 'o')
    VAR_7 = (off_t)VAR_9;
   else
    VAR_8 = (off_t)VAR_9;
   break;
  case 'q':
   VAR_13 = 0;
   break;
  case 'r':
   if ((VAR_8 = FUNC_3(VAR_3)) == 0)
    FUNC_0(VAR_2,
     "invalid zero length reference file"
     " for the region: %s", VAR_3);
   break;
  case 'v':
   VAR_13 = 1;
   break;
  default:
   FUNC_6(VAR_15);

  }
 if (FUNC_4(VAR_6[VAR_4-1], "--") != 0) {
  for (VAR_10 = VAR_4; VAR_10 < VAR_5; VAR_10++)
   if (VAR_6[VAR_10][0] == '-')
    FUNC_6(VAR_15);
 }

 VAR_6 += VAR_4;
 VAR_5 -= VAR_4;

 if (VAR_5 < 1)
  FUNC_6(VAR_15);

 while ((VAR_14 = *VAR_6++) != ((void*)0))
  if (FUNC_5(VAR_14, VAR_7, VAR_8, VAR_12, VAR_13) < 0)
   VAR_11++;

 return (VAR_11 ? VAR_0 : VAR_1);
}
