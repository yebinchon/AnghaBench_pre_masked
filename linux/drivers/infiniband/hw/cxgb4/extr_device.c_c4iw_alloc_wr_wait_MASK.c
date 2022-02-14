
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c4iw_wr_wait {int kref; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct c4iw_wr_wait* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,struct c4iw_wr_wait*) ;

struct c4iw_wr_wait *FUNC_3(gfp_t VAR_0)
{
 struct c4iw_wr_wait *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);
 if (VAR_1) {
  FUNC_0(&VAR_1->kref);
  FUNC_2("wr_wait %p\n", VAR_1);
 }
 return VAR_1;
}
