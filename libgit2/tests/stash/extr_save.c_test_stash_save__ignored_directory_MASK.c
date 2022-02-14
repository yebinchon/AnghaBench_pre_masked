
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,int ,int *,int) ;
 int FUNC_7 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_8(void)
{
 FUNC_3(FUNC_7("stash/ignored_directory", 0777));
 FUNC_3(FUNC_7("stash/ignored_directory/sub", 0777));
 FUNC_2("stash/ignored_directory/sub/some_file", "stuff");

 FUNC_0(VAR_4, "ignored_directory/sub/some_file", VAR_3);
 FUNC_3(FUNC_4(VAR_4, "ignored_directory/"));
 FUNC_0(VAR_4, "ignored_directory/sub/some_file", VAR_2);

 FUNC_3(FUNC_6(&VAR_6, VAR_4, VAR_5, ((void*)0), VAR_1 | VAR_0));

 FUNC_1(!FUNC_5("stash/ignored_directory/sub/some_file"));
 FUNC_1(!FUNC_5("stash/ignored_directory/sub"));
 FUNC_1(!FUNC_5("stash/ignored_directory"));
}
