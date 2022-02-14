
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

void FUNC_7(void)
{
 FUNC_2(FUNC_4("empty_dir", 0777));
 FUNC_0(FUNC_3("empty_dir"));

 FUNC_1("empty_dir/content", "whatever\n");
 FUNC_0(!FUNC_3("empty_dir"));
 FUNC_0(!FUNC_3("empty_dir/content"));

 FUNC_2(FUNC_6("empty_dir/content"));

 FUNC_2(FUNC_4("empty_dir/content", 0777));
 FUNC_0(!FUNC_3("empty_dir"));
 FUNC_0(FUNC_3("empty_dir/content"));

 FUNC_2(FUNC_5("empty_dir/content"));

 FUNC_2(FUNC_5("empty_dir"));
}
