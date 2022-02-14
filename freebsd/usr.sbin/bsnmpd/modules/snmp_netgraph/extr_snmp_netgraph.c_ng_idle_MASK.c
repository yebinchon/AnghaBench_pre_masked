
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csock_buf {int path; int mesg; } ;


 struct csock_buf* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct csock_buf*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct csock_buf *VAR_2;


 while ((VAR_2 = FUNC_0(&VAR_0)) != ((void*)0)) {
  FUNC_1(&VAR_0, VAR_1);
  FUNC_2(VAR_2->mesg, VAR_2->path);
  FUNC_3(VAR_2);
 }
}
