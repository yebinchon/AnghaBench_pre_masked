
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diffline {char* left; char div; char* right; } ;


 int FUNC_0 (int *,struct diffline*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 struct diffline* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(char *VAR_2, char VAR_3, char *VAR_4)
{
 struct diffline *VAR_5;

 if (!(VAR_5 = FUNC_2(sizeof(struct diffline))))
  FUNC_1(2, "enqueue");
 VAR_5->left = VAR_2;
 VAR_5->div = VAR_3;
 VAR_5->right = VAR_4;
 FUNC_0(&VAR_1, VAR_5, VAR_0);
}
