
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeh_pe {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct eeh_pe*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct eeh_pe*,int ,int *) ;
 int FUNC_2 (struct eeh_pe*,int) ;
 int FUNC_3 (struct eeh_pe*,int,int) ;
 int FUNC_4 (struct eeh_pe*,int) ;

int FUNC_5(struct eeh_pe *VAR_3)
{
 int VAR_4;


 if (VAR_3->state & VAR_0)
  return 0;


 FUNC_4(VAR_3, VAR_0);


 FUNC_1(VAR_3, VAR_2, ((void*)0));


 VAR_4 = FUNC_2(VAR_3, 1);
 if (VAR_4) {
  FUNC_3(VAR_3, VAR_0, 1);
  return VAR_4;
 }


 VAR_4 = FUNC_0(VAR_3, 1);
 if (VAR_4) {
  FUNC_3(VAR_3, VAR_0, 1);
  return VAR_4;
 }


 FUNC_1(VAR_3, VAR_1, ((void*)0));


 FUNC_3(VAR_3, VAR_0, 1);

 return 0;
}
