
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_blksize; int st_mode; } ;
struct dpv_file_node {int path; void* status; } ;
typedef int blksize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int * VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_6 (int,struct stat*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int * FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_9 (char*,int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_10 (int,char*) ;
 char* VAR_15 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (char*,int) ;

__attribute__((used)) static int
FUNC_13(struct dpv_file_node *VAR_16, int VAR_17)
{
 struct stat VAR_18;


 if (VAR_12 < 0) {
  if (VAR_13) {

   if (FUNC_10(VAR_16->path, VAR_15) == 0 ||
       (VAR_12 = FUNC_9(VAR_15, VAR_5)) < 0) {
    FUNC_12("%s", VAR_16->path);
    VAR_16->status = VAR_2;
    return (-1);
   }
  } else {






   VAR_12 = VAR_7;
   if (FUNC_7(VAR_12)) {
    VAR_12 = FUNC_9("/dev/stdin", VAR_5);
    FUNC_3(VAR_12--);
   }







   switch(VAR_14) {
   case 129:
    VAR_12 -= 1;
    break;
   case 128:
    VAR_12 -= 2;
    break;
   }
  }
 }


 if (VAR_11 == ((void*)0)) {

  if (VAR_17 >= 0) {
   if (FUNC_6(VAR_17, &VAR_18) != 0) {
    FUNC_12("%i", VAR_17);
    VAR_16->status = VAR_2;
    return (-1);
   }
   if (FUNC_2(VAR_18.st_mode)) {
    if (FUNC_11(VAR_9) >
        VAR_6)
     VAR_10 = FUNC_1(VAR_0, VAR_4 * 8);
    else
     VAR_10 = VAR_1;
   } else
    VAR_10 = FUNC_0(VAR_18.st_blksize,
        (blksize_t)FUNC_11(VAR_8));
  } else
   VAR_10 = FUNC_1(VAR_0, VAR_4 * 8);


  if ((VAR_11 = FUNC_8(VAR_10+1)) == ((void*)0)) {
   FUNC_4();
   FUNC_5(VAR_3, "Out of memory?!");
  }
 }

 return (0);
}
