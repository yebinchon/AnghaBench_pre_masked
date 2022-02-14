
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_index ;
typedef int git_config ;
struct TYPE_10__ {char* ptr; int size; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int,int,int,int,size_t*,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*,char const*) ;
 char* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char) ;
 int FUNC_9 (TYPE_1__*,char) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **) ;
 int FUNC_13 (TYPE_1__*,char*) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int **,int ) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (char*,char*,int) ;

void FUNC_21(void)
{
 git_config *VAR_2;
 git_buf VAR_3 = VAR_0;
 const char *VAR_4;
 git_index *VAR_5;
 const char *VAR_6 =

  "diff --git a/songof7cities.txt b/songof7cities.txt\n"
  "index 378a7d9..3d0154e 100644\n"
  "--- a/songof7cities.txt\n"
  "+++ b/songof7cities.txt\n"
  "@@ -42,7 +42,7 @@ With peoples undefeated of the dark, enduring blood.\n"
  " \n"
  " To the sound of trumpets shall their seed restore my Cities\n"
  " Wealthy and well-weaponed, that once more may I behold\n"
  "-All the world go softly when it walks before my Cities,\n"
  "+#All the world go softly when it walks before my Cities,\n"
  " And the horses and the chariots fleeing from them as of old!\n"
  " \n"
  "   -- Rudyard Kipling\n"
  "\\ No newline at end of file\n";
 size_t VAR_7[3] = { 115, 119 + 115 + 114, 119 + 115 + 114 + 71 };

 VAR_1 = FUNC_4("renames");

 FUNC_2(FUNC_12(&VAR_2));
 FUNC_19(VAR_1, VAR_2);
 FUNC_11(VAR_2);

 FUNC_18(VAR_1, 0);

 FUNC_2(FUNC_13(&VAR_3, "renames/songof7cities.txt"));



 VAR_4 = FUNC_6(&VAR_3) + FUNC_8(&VAR_3, '\n') + 1;
 FUNC_5(&VAR_3, VAR_4);
 FUNC_3("renames/songof7cities.txt", VAR_3.ptr);

 FUNC_0(VAR_1, 1, 0, 1, 3, ((void*)0), ((void*)0));



 FUNC_10(&VAR_3);
 FUNC_3("renames/songof7cities.txt", VAR_3.ptr);

 FUNC_0(VAR_1, 2, 1, 2, 6, ((void*)0), ((void*)0));



 FUNC_2(FUNC_17(&VAR_5, VAR_1));
 FUNC_2(FUNC_14(VAR_5, "songof7cities.txt"));
 FUNC_2(FUNC_16(VAR_5));
 FUNC_15(VAR_5);

 FUNC_2(FUNC_9(&VAR_3, '\n'));
 FUNC_3("renames/songof7cities.txt", VAR_3.ptr);

 FUNC_0(VAR_1, 1, 1, 1, 3, ((void*)0), ((void*)0));



 {

  char *VAR_8 = VAR_3.ptr + VAR_3.size;
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < 5; ++VAR_9) {
   for (--VAR_8; VAR_8 > VAR_3.ptr && *VAR_8 != '\n'; --VAR_8)
                         ;
  }
  FUNC_1(VAR_8 > VAR_3.ptr);


  FUNC_20(VAR_8 + 1, VAR_8, VAR_3.size - (VAR_8 - VAR_3.ptr) - 1);

  VAR_8[1] = '#';
 }
 FUNC_3("renames/songof7cities.txt", VAR_3.ptr);

 FUNC_0(
  VAR_1, 1, 1, 1, 6, VAR_7, VAR_6);

 FUNC_7(&VAR_3);
}
