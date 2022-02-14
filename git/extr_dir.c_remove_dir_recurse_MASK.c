
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct stat {int st_mode; } ;
struct object_id {int dummy; } ;
struct dirent {int d_name; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,struct stat*) ;
 int * FUNC_4 (int ) ;
 struct dirent* FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,struct object_id*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct strbuf*,int ) ;
 int FUNC_9 (struct strbuf*,char) ;
 int FUNC_10 (struct strbuf*,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct strbuf *VAR_6, int VAR_7, int *VAR_8)
{
 DIR *VAR_9;
 struct dirent *VAR_10;
 int VAR_11 = 0, VAR_12 = VAR_6->len, VAR_13, VAR_14 = 0;
 int VAR_15 = (VAR_7 & VAR_2);
 int VAR_16 = (VAR_7 & VAR_4);
 struct object_id VAR_17;

 if ((VAR_7 & VAR_3) &&
     !FUNC_6(VAR_6->buf, "HEAD", &VAR_17)) {

  if (VAR_8)
   *VAR_8 = 1;
  return 0;
 }

 VAR_7 &= ~VAR_4;
 VAR_9 = FUNC_4(VAR_6->buf);
 if (!VAR_9) {
  if (VAR_5 == VAR_1)
   return VAR_16 ? -1 : 0;
  else if (VAR_5 == VAR_0 && !VAR_16)




   return FUNC_7(VAR_6->buf);
  else
   return -1;
 }
 FUNC_9(VAR_6, '/');

 VAR_13 = VAR_6->len;
 while ((VAR_10 = FUNC_5(VAR_9)) != ((void*)0)) {
  struct stat VAR_18;
  if (FUNC_2(VAR_10->d_name))
   continue;

  FUNC_10(VAR_6, VAR_13);
  FUNC_8(VAR_6, VAR_10->d_name);
  if (FUNC_3(VAR_6->buf, &VAR_18)) {
   if (VAR_5 == VAR_1)




    continue;

  } else if (FUNC_0(VAR_18.st_mode)) {
   if (!FUNC_12(VAR_6, VAR_7, &VAR_14))
    continue;
  } else if (!VAR_15 &&
      (!FUNC_11(VAR_6->buf) || VAR_5 == VAR_1)) {
   continue;
  }


  VAR_11 = -1;
  break;
 }
 FUNC_1(VAR_9);

 FUNC_10(VAR_6, VAR_12);
 if (!VAR_11 && !VAR_16 && !VAR_14)
  VAR_11 = (!FUNC_7(VAR_6->buf) || VAR_5 == VAR_1) ? 0 : -1;
 else if (VAR_8)




  *VAR_8 = !VAR_11;
 return VAR_11;
}
