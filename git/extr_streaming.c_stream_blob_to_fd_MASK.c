
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_filter {int dummy; } ;
struct object_id {int dummy; } ;
struct git_istream {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ off_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct git_istream*) ;
 int FUNC_1 (struct stream_filter*) ;
 scalar_t__ FUNC_2 (int,int,int ) ;
 struct git_istream* FUNC_3 (struct object_id const*,int*,unsigned long*,struct stream_filter*) ;
 int FUNC_4 (struct git_istream*,char*,int) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int,char*,int) ;

int FUNC_7(int VAR_2, const struct object_id *VAR_3, struct stream_filter *VAR_4,
        int VAR_5)
{
 struct git_istream *VAR_6;
 enum object_type VAR_7;
 unsigned long VAR_8;
 ssize_t VAR_9 = 0;
 int VAR_10 = -1;

 VAR_6 = FUNC_3(VAR_3, &VAR_7, &VAR_8, VAR_4);
 if (!VAR_6) {
  if (VAR_4)
   FUNC_1(VAR_4);
  return VAR_10;
 }
 if (VAR_7 != VAR_0)
  goto close_and_exit;
 for (;;) {
  char VAR_11[1024 * 16];
  ssize_t VAR_12, VAR_13;
  ssize_t VAR_14 = FUNC_4(VAR_6, VAR_11, sizeof(VAR_11));

  if (VAR_14 < 0)
   goto close_and_exit;
  if (!VAR_14)
   break;
  if (VAR_5 && sizeof(VAR_11) == VAR_14) {
   for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
    if (VAR_11[VAR_13])
     break;
   if (VAR_14 == VAR_13) {
    VAR_9 += VAR_13;
    continue;
   }
  }

  if (VAR_9 && FUNC_2(VAR_2, VAR_9, VAR_1) == (off_t) -1)
   goto close_and_exit;
  else
   VAR_9 = 0;
  VAR_12 = FUNC_5(VAR_2, VAR_11, VAR_14);

  if (VAR_12 < 0)
   goto close_and_exit;
 }
 if (VAR_9 && (FUNC_2(VAR_2, VAR_9 - 1, VAR_1) == (off_t) -1 ||
       FUNC_6(VAR_2, "", 1) != 1))
  goto close_and_exit;
 VAR_10 = 0;

 close_and_exit:
 FUNC_0(VAR_6);
 return VAR_10;
}
