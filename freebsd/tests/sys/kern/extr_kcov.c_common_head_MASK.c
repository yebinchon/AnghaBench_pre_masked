
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int,int ,int) ;
 void* FUNC_2 (int *,int,int,int ,int,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void *
FUNC_4(int *VAR_7)
{
 void *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3();

 FUNC_0(FUNC_1(VAR_9, VAR_1,
     VAR_4 / VAR_0) == 0,
     "Unable to set the kcov buffer size");

 VAR_8 = FUNC_2(((void*)0), VAR_4, VAR_5 | VAR_6, VAR_3, VAR_9, 0);
 FUNC_0(VAR_8 != VAR_2, "Unable to mmap the kcov buffer");

 *VAR_7 = VAR_9;
 return (VAR_8);
}
