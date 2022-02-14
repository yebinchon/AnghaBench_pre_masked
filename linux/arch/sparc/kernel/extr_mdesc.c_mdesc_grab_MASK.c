
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdesc_handle {int refcnt; } ;


 struct mdesc_handle* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct mdesc_handle *FUNC_3(void)
{
 struct mdesc_handle *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_1, VAR_3);
 VAR_2 = VAR_0;
 if (VAR_2)
  FUNC_0(&VAR_2->refcnt);
 FUNC_2(&VAR_1, VAR_3);

 return VAR_2;
}
