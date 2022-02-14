
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs {int fs_volname; } ;
typedef int FILE ;



 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct fs**,int ) ;
 int FUNC_2 (char*,int ,size_t) ;

int
FUNC_3(FILE *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct fs *VAR_4;

 switch (FUNC_1(FUNC_0(VAR_1), &VAR_4, VAR_0)) {
 case 0:
  FUNC_2(VAR_2, VAR_4->fs_volname, VAR_3);
  return (0);
 case 128:

  return (1);
 default:

  return (1);
 }
}
