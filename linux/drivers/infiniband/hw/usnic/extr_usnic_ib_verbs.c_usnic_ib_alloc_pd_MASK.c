
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_ib_pd {void* umem_pd; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 struct usnic_ib_pd* FUNC_2 (struct ib_pd*) ;
 void* FUNC_3 () ;

int FUNC_4(struct ib_pd *VAR_1, struct ib_udata *VAR_2)
{
 struct usnic_ib_pd *VAR_3 = FUNC_2(VAR_1);
 void *VAR_4;

 VAR_4 = VAR_3->umem_pd = FUNC_3();
 if (FUNC_0(VAR_4)) {
  return VAR_4 ? FUNC_1(VAR_4) : -VAR_0;
 }

 return 0;
}
