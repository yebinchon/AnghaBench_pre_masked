
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct executable {int x_len; int x_buf; } ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,char const*) ;
 size_t FUNC_2 (int ,int ,int,int *) ;

__attribute__((used)) static void
FUNC_3(struct executable *VAR_0, FILE *VAR_1, const char *VAR_2)
{
 size_t VAR_3;

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));

 VAR_3 = FUNC_2(VAR_0->x_buf, VAR_0->x_len, 1, VAR_1);
 if (VAR_3 != 1)
  FUNC_1(1, "%s: fwrite", VAR_2);
}
