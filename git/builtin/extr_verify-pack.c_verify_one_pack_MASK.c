
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct child_process {char const** argv; int git_cmd; } ;


 struct child_process VAR_0 ;
 struct strbuf VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct child_process*) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*) ;
 scalar_t__ FUNC_5 (struct strbuf*,char*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_4, unsigned int VAR_5)
{
 struct child_process VAR_6 = VAR_0;
 const char *VAR_7[] = {"index-pack", ((void*)0), ((void*)0), ((void*)0) };
 struct strbuf VAR_8 = VAR_1;
 int VAR_9 = VAR_5 & VAR_3;
 int VAR_10 = VAR_5 & VAR_2;
 int VAR_11;

 if (VAR_10)
  VAR_7[1] = "--verify-stat-only";
 else if (VAR_9)
  VAR_7[1] = "--verify-stat";
 else
  VAR_7[1] = "--verify";





 FUNC_3(&VAR_8, VAR_4);
 if (FUNC_5(&VAR_8, ".idx") ||
     !FUNC_0(VAR_8.buf, ".pack"))
  FUNC_3(&VAR_8, ".pack");
 VAR_7[2] = VAR_8.buf;

 VAR_6.argv = VAR_7;
 VAR_6.git_cmd = 1;

 VAR_11 = FUNC_2(&VAR_6);

 if (VAR_9 || VAR_10) {
  if (VAR_11)
   FUNC_1("%s: bad\n", VAR_8.buf);
  else {
   if (!VAR_10)
    FUNC_1("%s: ok\n", VAR_8.buf);
  }
 }
 FUNC_4(&VAR_8);

 return VAR_11;
}
