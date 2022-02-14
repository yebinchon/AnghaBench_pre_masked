
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ics {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (unsigned int,int *,int ) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (int ,int,int,int*,unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct ics *VAR_8, unsigned int VAR_9)
{
 unsigned int VAR_10 = (unsigned int)FUNC_4(VAR_9);
 int VAR_11[2];
 int VAR_12;

 if (FUNC_0(VAR_10 == VAR_2 || VAR_10 == VAR_3))
  return -VAR_0;


 VAR_12 = FUNC_3(VAR_5, 1, 3, VAR_11, VAR_10);
 if (VAR_12)
  return -VAR_1;

 FUNC_1(VAR_9, &VAR_7, VAR_4);
 FUNC_2(VAR_9, &VAR_6);

 return 0;
}
