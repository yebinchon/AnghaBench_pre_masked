
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_cl_rb {scalar_t__ buf_idx; struct ishtp_cl* cl; int list; } ;
struct ishtp_cl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ishtp_cl_rb* FUNC_1 (int,int ) ;

struct ishtp_cl_rb *FUNC_2(struct ishtp_cl *VAR_1)
{
 struct ishtp_cl_rb *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct ishtp_cl_rb), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(&VAR_2->list);
 VAR_2->cl = VAR_1;
 VAR_2->buf_idx = 0;
 return VAR_2;
}
