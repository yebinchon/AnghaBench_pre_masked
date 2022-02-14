
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int file; } ;


 int VAR_0 ;
 struct fd FUNC_0 (int) ;
 int FUNC_1 (struct fd) ;
 int FUNC_2 (int ,int,void*,int*) ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2, void *VAR_3, int *VAR_4)
{
 struct fd VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_1);
 if (!VAR_5.file)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_5.file, VAR_2, VAR_3, VAR_4);

 FUNC_1(VAR_5);
 return VAR_6;
}
