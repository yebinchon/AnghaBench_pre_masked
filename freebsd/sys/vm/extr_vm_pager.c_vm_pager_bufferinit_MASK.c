
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int,int ,int ,int ,int *,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;

void
FUNC_2(void)
{


 VAR_8 = FUNC_0("pbuf", sizeof(struct buf),
     VAR_5, VAR_6, VAR_7, ((void*)0), VAR_1,
     VAR_3 | VAR_2);

 VAR_4 += FUNC_1(VAR_8, VAR_0);
}
