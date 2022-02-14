
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char**,size_t*,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct node*,char*,int *,int *,char const*,int) ;
 char* FUNC_4 (char*,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct node *VAR_2, const char *VAR_3)
{
 char *VAR_4 = ((void*)0), *VAR_5;
 size_t VAR_6 = 0;
 ssize_t VAR_7;

 VAR_0 = 1;

 for (;;) {
  VAR_7 = FUNC_1(&VAR_4, &VAR_6, VAR_1);
  if (VAR_7 < 0) {



   break;
  }
  if (VAR_7 <= 1) {



   continue;
  }




  VAR_5 = FUNC_4(VAR_4, VAR_7 - 1);

  FUNC_2("adding key \"%s\"", VAR_5);
  FUNC_3(VAR_2, VAR_5, ((void*)0), ((void*)0), VAR_3, VAR_0);
  VAR_0++;
 }
 FUNC_0(VAR_4);
}
