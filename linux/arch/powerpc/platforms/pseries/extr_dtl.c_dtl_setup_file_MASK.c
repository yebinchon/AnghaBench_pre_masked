
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtl {int cpu; int file; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,struct dtl*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct dtl *VAR_3)
{
 char VAR_4[10];

 FUNC_1(VAR_4, "cpu-%d", VAR_3->cpu);

 VAR_3->file = FUNC_0(VAR_4, 0400, VAR_1, VAR_3, &VAR_2);
 if (!VAR_3->file)
  return -VAR_0;

 return 0;
}
