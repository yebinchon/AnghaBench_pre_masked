
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct binderfs_mount_opts {int max; int stats_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (char**,char*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(char *VAR_8,
         struct binderfs_mount_opts *VAR_9)
{
 char *VAR_10, *VAR_11;
 VAR_9->max = VAR_0;
 VAR_9->stats_mode = VAR_6;

 while ((VAR_10 = FUNC_7(&VAR_8, ",")) != ((void*)0)) {
  substring_t VAR_12[VAR_4];
  int VAR_13;
  int VAR_14;

  if (!*VAR_10)
   continue;

  VAR_13 = FUNC_4(VAR_10, VAR_7, VAR_12);
  switch (VAR_13) {
  case 129:
   if (FUNC_2(&VAR_12[0], &VAR_14) ||
       (VAR_14 < 0 ||
        (VAR_14 > VAR_0)))
    return -VAR_2;

   VAR_9->max = VAR_14;
   break;
  case 128:
   if (!FUNC_0(VAR_1))
    return -VAR_2;

   VAR_11 = FUNC_3(&VAR_12[0]);
   if (!VAR_11)
    return -VAR_3;

   if (FUNC_6(VAR_11, "global") != 0) {
    FUNC_1(VAR_11);
    return -VAR_2;
   }

   VAR_9->stats_mode = VAR_5;
   FUNC_1(VAR_11);
   break;
  default:
   FUNC_5("Invalid mount options\n");
   return -VAR_2;
  }
 }

 return 0;
}
