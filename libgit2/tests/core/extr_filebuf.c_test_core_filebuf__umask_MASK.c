
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int mode_t ;
struct TYPE_6__ {int * buffer; } ;
typedef TYPE_1__ git_filebuf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*,int ,int) ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;
 int FUNC_7 (char*,struct stat*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*) ;

void FUNC_10(void)
{
 git_filebuf VAR_1 = VAR_0;
 char VAR_2[] = "test";
 struct stat VAR_3;
 mode_t VAR_4, VAR_5;




 VAR_5 = 0777;


 FUNC_8(VAR_4 = FUNC_8(0));

 FUNC_0(VAR_1.buffer == ((void*)0));

 FUNC_2(FUNC_5(&VAR_1, VAR_2, 0, 0666));
 FUNC_0(VAR_1.buffer != ((void*)0));
 FUNC_2(FUNC_6(&VAR_1, "%s\n", "libgit2 rocks"));
 FUNC_0(VAR_1.buffer != ((void*)0));

 FUNC_2(FUNC_4(&VAR_1));
 FUNC_0(VAR_1.buffer == ((void*)0));

 FUNC_3(FUNC_7("test", &VAR_3));
 FUNC_1(VAR_3.st_mode & VAR_5, (0666 & ~VAR_4) & VAR_5);

 FUNC_3(FUNC_9(VAR_2));
}
