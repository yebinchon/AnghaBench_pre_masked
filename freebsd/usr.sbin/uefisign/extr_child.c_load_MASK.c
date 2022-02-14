
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;
struct executable {char* x_buf; size_t x_len; int x_path; int x_fp; } ;


 int FUNC_0 (int,char*,int ,...) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (char*,size_t,int,int ) ;
 int FUNC_4 (int,struct stat*) ;
 char* FUNC_5 (size_t) ;

__attribute__((used)) static void
FUNC_6(struct executable *VAR_0)
{
 int VAR_1, VAR_2;
 struct stat VAR_3;
 char *VAR_4;
 size_t VAR_5, VAR_6;

 VAR_2 = FUNC_2(VAR_0->x_fp);

 VAR_1 = FUNC_4(VAR_2, &VAR_3);
 if (VAR_1 != 0)
  FUNC_0(1, "%s: fstat", VAR_0->x_path);

 VAR_6 = VAR_3.st_size;
 if (VAR_6 <= 0)
  FUNC_1(1, "%s: file is empty", VAR_0->x_path);

 VAR_4 = FUNC_5(VAR_6);
 if (VAR_4 == ((void*)0))
  FUNC_0(1, "%s: cannot malloc %zd bytes", VAR_0->x_path, VAR_6);

 VAR_5 = FUNC_3(VAR_4, VAR_6, 1, VAR_0->x_fp);
 if (VAR_5 != 1)
  FUNC_0(1, "%s: fread", VAR_0->x_path);

 VAR_0->x_buf = VAR_4;
 VAR_0->x_len = VAR_6;
}
