
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnet {int dummy; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct mtuex_arg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct vnet*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,void (*) (void*),void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,struct mtuex_arg*) ;
 int FUNC_4 (struct timeval*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_5)
{
 FUNC_1((struct vnet *) VAR_5);
 struct timeval VAR_6;
 struct mtuex_arg VAR_7;

 FUNC_3(VAR_0, VAR_4, VAR_3, &VAR_7);

 VAR_6.tv_sec = VAR_1;
 VAR_6.tv_usec = 0;
 FUNC_2(&VAR_2, FUNC_4(&VAR_6), FUNC_5, VAR_5);
 FUNC_0();
}
