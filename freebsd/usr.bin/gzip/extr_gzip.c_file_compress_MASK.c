
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uintmax_t ;
typedef int uint32_t ;
struct TYPE_4__ {scalar_t__* zipped; } ;
typedef TYPE_1__ suffixes_t ;
struct stat {int st_size; int st_nlink; scalar_t__ st_mtime; } ;
typedef int off_t ;
struct TYPE_5__ {char* ziplen; int zipped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,struct stat*,char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (int,struct stat*) ;
 int FUNC_7 (int,int,int*,int ,int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,char*,...) ;
 int FUNC_11 (char*,int ,char*) ;
 int FUNC_12 (char*,int,...) ;
 char* VAR_7 ;
 scalar_t__ FUNC_13 (char*,size_t,char*,char*,int ) ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,struct stat*) ;

__attribute__((used)) static off_t
FUNC_16(char *VAR_10, char *VAR_11, size_t VAR_12)
{
 int VAR_13;
 int VAR_14;
 off_t VAR_15, VAR_16;

 struct stat VAR_17, VAR_18;
 const suffixes_t *VAR_19;


 VAR_13 = FUNC_12(VAR_10, VAR_2);
 if (VAR_13 == -1) {
  FUNC_9("can't open %s", VAR_10);
  return (-1);
 }


 if (FUNC_6(VAR_13, &VAR_17) != 0) {
  FUNC_9("couldn't stat: %s", VAR_10);
  FUNC_3(VAR_13);
  return (-1);
 }



 if (FUNC_6(VAR_13, &VAR_17) != 0) {
  FUNC_3(VAR_13);
  FUNC_9("can't stat %s", VAR_10);
  return -1;
 }
 FUNC_8(VAR_10, VAR_17.st_size);


 if (VAR_5 == 0) {

  if (VAR_17.st_nlink > 1 && VAR_6 == 0) {
   FUNC_10("%s has %ju other link%s -- "
        "skipping", VAR_10,
        (uintmax_t)VAR_17.st_nlink - 1,
        VAR_17.st_nlink == 1 ? "" : "s");
   FUNC_3(VAR_13);
   return -1;
  }

  if (VAR_6 == 0 && (VAR_19 = FUNC_2(VAR_10, 0)) &&
      VAR_19->zipped[0] != 0) {
   FUNC_10("%s already has %s suffix -- unchanged",
       VAR_10, VAR_19->zipped);
   FUNC_3(VAR_13);
   return (-1);
  }



  if ((size_t)FUNC_13(VAR_11, VAR_12, "%s%s",
      VAR_10, VAR_9[0].zipped) >= VAR_12)
   FUNC_11(VAR_11 + VAR_12 - VAR_9[0].ziplen - 1,
       VAR_9[0].zipped, VAR_9[0].ziplen + 1);


  if (FUNC_1(VAR_11) == 0) {
   FUNC_3(VAR_13);
   return (-1);
  }

 }

 if (VAR_5 == 0) {
  VAR_14 = FUNC_12(VAR_11, VAR_3 | VAR_0 | VAR_1, 0600);
  if (VAR_14 == -1) {
   FUNC_9("could not create output: %s", VAR_11);
   FUNC_5(VAR_8);
   return (-1);
  }

  VAR_7 = VAR_11;

 } else
  VAR_14 = VAR_4;

 VAR_16 = FUNC_7(VAR_13, VAR_14, &VAR_15, FUNC_0(VAR_10), (uint32_t)VAR_17.st_mtime);

 (void)FUNC_3(VAR_13);
 if (VAR_5 != 0)
  return VAR_16 == -1 ? -1 : VAR_15;


 if (FUNC_6(VAR_14, &VAR_18) != 0) {
  FUNC_9("couldn't stat: %s", VAR_11);
  goto bad_outfile;
 }

 if (VAR_18.st_size != VAR_15) {
  FUNC_10("output file: %s wrong size (%ju != %ju), deleting",
      VAR_11, (uintmax_t)VAR_18.st_size, (uintmax_t)VAR_15);
  goto bad_outfile;
 }

 FUNC_4(VAR_14, &VAR_17, VAR_11);
 VAR_7 = ((void*)0);

 if (FUNC_3(VAR_14) == -1)
  FUNC_9("couldn't close output");


 FUNC_15(VAR_10, &VAR_17);
 return (VAR_15);


    bad_outfile:
 if (FUNC_3(VAR_14) == -1)
  FUNC_9("couldn't close output");

 FUNC_10("leaving original %s", VAR_10);
 FUNC_14(VAR_11);
 return (VAR_15);

}
