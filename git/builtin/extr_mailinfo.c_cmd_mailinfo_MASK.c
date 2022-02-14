
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mailinfo {char const* metainfo_charset; int keep_subject; int keep_non_patch_brackets_in_subject; int add_message_id; int use_scissors; int output; int input; scalar_t__ use_inbody_headers; } ;


 int FUNC_0 (struct mailinfo*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 () ;
 int FUNC_3 (struct mailinfo*,char*,char*) ;
 int VAR_0 ;
 char* FUNC_4 (char const*,char const*) ;
 int FUNC_5 (struct mailinfo*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (int ) ;

int FUNC_9(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 const char *VAR_6;
 struct mailinfo VAR_7;
 int VAR_8;
 char *VAR_9, *VAR_10;

 FUNC_5(&VAR_7);

 VAR_6 = FUNC_2();
 VAR_7.metainfo_charset = VAR_6;

 while (1 < VAR_3 && VAR_4[1][0] == '-') {
  if (!FUNC_7(VAR_4[1], "-k"))
   VAR_7.keep_subject = 1;
  else if (!FUNC_7(VAR_4[1], "-b"))
   VAR_7.keep_non_patch_brackets_in_subject = 1;
  else if (!FUNC_7(VAR_4[1], "-m") || !FUNC_7(VAR_4[1], "--message-id"))
   VAR_7.add_message_id = 1;
  else if (!FUNC_7(VAR_4[1], "-u"))
   VAR_7.metainfo_charset = VAR_6;
  else if (!FUNC_7(VAR_4[1], "-n"))
   VAR_7.metainfo_charset = ((void*)0);
  else if (FUNC_6(VAR_4[1], "--encoding="))
   VAR_7.metainfo_charset = VAR_4[1] + 11;
  else if (!FUNC_7(VAR_4[1], "--scissors"))
   VAR_7.use_scissors = 1;
  else if (!FUNC_7(VAR_4[1], "--no-scissors"))
   VAR_7.use_scissors = 0;
  else if (!FUNC_7(VAR_4[1], "--no-inbody-headers"))
   VAR_7.use_inbody_headers = 0;
  else
   FUNC_8(VAR_0);
  VAR_3--; VAR_4++;
 }

 if (VAR_3 != 3)
  FUNC_8(VAR_0);

 VAR_7.input = VAR_1;
 VAR_7.output = VAR_2;

 VAR_9 = FUNC_4(VAR_5, VAR_4[1]);
 VAR_10 = FUNC_4(VAR_5, VAR_4[2]);

 VAR_8 = !!FUNC_3(&VAR_7, VAR_9, VAR_10);
 FUNC_0(&VAR_7);

 FUNC_1(VAR_9);
 FUNC_1(VAR_10);
 return VAR_8;
}
