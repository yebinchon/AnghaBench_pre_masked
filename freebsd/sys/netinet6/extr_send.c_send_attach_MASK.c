
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socket {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct socket* VAR_4 ;
 int FUNC_2 (struct thread*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct socket*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_7, int VAR_8, struct thread *VAR_9)
{
 int VAR_10;

 FUNC_0();
 if (VAR_4 != ((void*)0)) {
  FUNC_1();
  return (VAR_0);
 }

 VAR_10 = FUNC_2(VAR_9, VAR_3);
 if (VAR_10) {
  FUNC_1();
  return(VAR_10);
 }

 if (VAR_8 != VAR_2) {
  FUNC_1();
  return (VAR_1);
 }
 VAR_10 = FUNC_3(VAR_7, VAR_6, VAR_5);
 if (VAR_10) {
  FUNC_1();
  return(VAR_10);
 }

 VAR_4 = VAR_7;
 FUNC_1();

 return (0);
}
