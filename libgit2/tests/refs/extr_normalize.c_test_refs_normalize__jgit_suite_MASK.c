
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,int,char*,char) ;

void FUNC_3(void)
{



 FUNC_0(
  VAR_0, "");
 FUNC_0(
  VAR_0, "/");


 FUNC_0(
  VAR_1, "master");
 FUNC_1(
  VAR_1, "heads/master", "heads/master");


 FUNC_1(
  VAR_0, "refs/heads/master", "refs/heads/master");
 FUNC_1(
  VAR_0, "refs/heads/pu", "refs/heads/pu");
 FUNC_1(
  VAR_0, "refs/heads/z", "refs/heads/z");
 FUNC_1(
  VAR_0, "refs/heads/FoO", "refs/heads/FoO");


 FUNC_1(
  VAR_0, "refs/tags/v1.0", "refs/tags/v1.0");


 FUNC_0(VAR_0, "refs/heads/master.lock");


 FUNC_0(
  VAR_0, "refs/heads/master/");


 FUNC_0(
  VAR_0, "refs/heads/i haz space");


 {
  char VAR_3;
  char VAR_4[VAR_2];
  for (VAR_3 = '\1'; VAR_3 < ' '; VAR_3++) {
   FUNC_2(VAR_4, sizeof(VAR_4), "refs/heads/mast%cer", VAR_3);
   FUNC_0(VAR_0, VAR_4);
  }
 }


 FUNC_0(
  VAR_0, "refs/heads/.");
 FUNC_0(
  VAR_0, "refs/heads/..");
 FUNC_0(
  VAR_0, "refs/heads/./master");
 FUNC_0(
  VAR_0, "refs/heads/../master");


 FUNC_0(
  VAR_0, ".");
 FUNC_0(
  VAR_0, "refs/heads/.bar");
 FUNC_0(
  VAR_0, "refs/heads/..bar");
 FUNC_0(
  VAR_0, "refs/heads/bar.");


 FUNC_1(
  VAR_0, "refs/heads/m.a.s.t.e.r", "refs/heads/m.a.s.t.e.r");
 FUNC_0(
  VAR_0, "refs/heads/master..pu");


 FUNC_0(
  VAR_0, "refs/heads/master^");
 FUNC_0(
  VAR_0, "refs/heads/^master");
 FUNC_0(
  VAR_0, "^refs/heads/master");

 FUNC_0(
  VAR_0, "refs/heads/master~");
 FUNC_0(
  VAR_0, "refs/heads/~master");
 FUNC_0(
  VAR_0, "~refs/heads/master");

 FUNC_0(
  VAR_0, "refs/heads/master:");
 FUNC_0(
  VAR_0, "refs/heads/:master");
 FUNC_0(
  VAR_0, ":refs/heads/master");


 FUNC_0(
  VAR_0, "refs/heads/master?");
 FUNC_0(
  VAR_0, "refs/heads/?master");
 FUNC_0(
  VAR_0, "?refs/heads/master");

 FUNC_0(
  VAR_0, "refs/heads/master[");
 FUNC_0(
  VAR_0, "refs/heads/[master");
 FUNC_0(
  VAR_0, "[refs/heads/master");

 FUNC_0(
  VAR_0, "refs/heads/master*");
 FUNC_0(
  VAR_0, "refs/heads/*master");
 FUNC_0(
  VAR_0, "*refs/heads/master");


 FUNC_1
  (VAR_0, "refs/heads/!", "refs/heads/!");
 FUNC_1(
  VAR_0, "refs/heads/\"", "refs/heads/\"");
 FUNC_1(
  VAR_0, "refs/heads/#", "refs/heads/#");
 FUNC_1(
  VAR_0, "refs/heads/$", "refs/heads/$");
 FUNC_1(
  VAR_0, "refs/heads/%", "refs/heads/%");
 FUNC_1(
  VAR_0, "refs/heads/&", "refs/heads/&");
 FUNC_1(
  VAR_0, "refs/heads/'", "refs/heads/'");
 FUNC_1(
  VAR_0, "refs/heads/(", "refs/heads/(");
 FUNC_1(
  VAR_0, "refs/heads/)", "refs/heads/)");
 FUNC_1(
  VAR_0, "refs/heads/+", "refs/heads/+");
 FUNC_1(
  VAR_0, "refs/heads/,", "refs/heads/,");
 FUNC_1(
  VAR_0, "refs/heads/-", "refs/heads/-");
 FUNC_1(
  VAR_0, "refs/heads/;", "refs/heads/;");
 FUNC_1(
  VAR_0, "refs/heads/<", "refs/heads/<");
 FUNC_1(
  VAR_0, "refs/heads/=", "refs/heads/=");
 FUNC_1(
  VAR_0, "refs/heads/>", "refs/heads/>");
 FUNC_1(
  VAR_0, "refs/heads/@", "refs/heads/@");
 FUNC_1(
  VAR_0, "refs/heads/]", "refs/heads/]");
 FUNC_1(
  VAR_0, "refs/heads/_", "refs/heads/_");
 FUNC_1(
  VAR_0, "refs/heads/`", "refs/heads/`");
 FUNC_1(
  VAR_0, "refs/heads/{", "refs/heads/{");
 FUNC_1(
  VAR_0, "refs/heads/|", "refs/heads/|");
 FUNC_1(
  VAR_0, "refs/heads/}", "refs/heads/}");





 FUNC_0(
  VAR_0, "refs/heads/\\");
 FUNC_0(
  VAR_0, "refs/heads/master@{1}");
 FUNC_0(
  VAR_0, "refs/heads/master@{1.hour.ago}");
}
