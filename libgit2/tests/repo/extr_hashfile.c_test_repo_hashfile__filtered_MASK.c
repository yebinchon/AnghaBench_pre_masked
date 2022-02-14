
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ,char*,int ,char*) ;

void FUNC_10(void)
{
 git_oid VAR_3, VAR_4;

 FUNC_6(VAR_2, "core.autocrlf", 1);

 FUNC_2("status/.gitattributes", "*.txt text\n*.bin binary\n\n");


 FUNC_4("status/testfile.txt", "content\r\n");
 FUNC_4("status/testfile.bin", "other\r\nstuff\r\n");


 FUNC_5(FUNC_7(&VAR_3, "status/testfile.txt", VAR_1));
 FUNC_5(FUNC_9(&VAR_4, VAR_2, "testfile.txt", VAR_1, ((void*)0)));
 FUNC_0(FUNC_8(&VAR_3, &VAR_4));


 FUNC_5(FUNC_7(&VAR_3, "status/testfile.bin", VAR_1));
 FUNC_5(FUNC_9(&VAR_4, VAR_2, "testfile.bin", VAR_1, ((void*)0)));
 FUNC_1(&VAR_3, &VAR_4);


 FUNC_5(FUNC_7(&VAR_3, "status/testfile.txt", VAR_1));
 FUNC_5(FUNC_9(&VAR_4, VAR_2, "testfile.txt", VAR_1, "foo.bin"));
 FUNC_1(&VAR_3, &VAR_4);


 FUNC_5(FUNC_7(&VAR_3, "status/testfile.bin", VAR_1));
 FUNC_5(FUNC_9(&VAR_4, VAR_2, "testfile.bin", VAR_1, "foo.txt"));
 FUNC_0(FUNC_8(&VAR_3, &VAR_4));


 FUNC_5(FUNC_7(&VAR_3, "status/testfile.txt", VAR_1));
 FUNC_5(FUNC_9(&VAR_4, VAR_2, "testfile.txt", VAR_1, ""));
 FUNC_1(&VAR_3, &VAR_4);

 FUNC_5(FUNC_7(&VAR_3, "status/testfile.bin", VAR_1));
 FUNC_5(FUNC_9(&VAR_4, VAR_2, "testfile.bin", VAR_1, ""));
 FUNC_1(&VAR_3, &VAR_4);


 FUNC_3(FUNC_7(&VAR_3, "status/testfile.txt", 0));
 FUNC_3(FUNC_9(&VAR_4, VAR_2, "testfile.txt", VAR_0, ((void*)0)));
}
