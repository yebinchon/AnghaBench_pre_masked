
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {scalar_t__* statusp; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_1(struct qib_pportdata *VAR_2, char *VAR_3)
{
 ssize_t VAR_4;

 if (!VAR_2->statusp)
  VAR_4 = -VAR_0;
 else
  VAR_4 = FUNC_0(VAR_3, VAR_1, "0x%llx\n",
    (unsigned long long) *(VAR_2->statusp));
 return VAR_4;
}
