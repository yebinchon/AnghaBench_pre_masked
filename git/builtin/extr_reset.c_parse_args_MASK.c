
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int dummy; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,struct object_id*) ;
 int FUNC_3 (char const*,struct object_id*) ;
 int FUNC_4 (struct pathspec*,int ,int,char const*,char const**) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*,char const*,int) ;
 int FUNC_8 (char const*,char const*) ;

__attribute__((used)) static void FUNC_9(struct pathspec *VAR_2,
         const char **VAR_3, const char *VAR_4,
         int VAR_5,
         const char **VAR_6)
{
 const char *VAR_7 = "HEAD";
 struct object_id VAR_8;
 if (VAR_3[0]) {
  if (!FUNC_6(VAR_3[0], "--")) {
   VAR_3++;
  } else if (VAR_3[1] && !FUNC_6(VAR_3[1], "--")) {
   VAR_7 = VAR_3[0];
   VAR_3 += 2;
  }





  else if ((!VAR_3[1] && !FUNC_2(VAR_3[0], &VAR_8)) ||
    (VAR_3[1] && !FUNC_3(VAR_3[0], &VAR_8))) {




   FUNC_8(VAR_4, VAR_3[0]);
   VAR_7 = *VAR_3++;
  } else {

   FUNC_7(VAR_4, VAR_3[0], 1);
  }
 }
 *VAR_6 = VAR_7;

 if (FUNC_5() < 0)
  FUNC_1(FUNC_0("index file corrupt"));

 FUNC_4(VAR_2, 0,
         VAR_0 |
         (VAR_5 ? VAR_1 : 0),
         VAR_4, VAR_3);
}
