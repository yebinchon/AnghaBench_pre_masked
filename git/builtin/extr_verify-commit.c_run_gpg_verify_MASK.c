
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signature_check {int dummy; } ;
struct commit {int dummy; } ;
typedef int signature_check ;


 int FUNC_0 (struct commit*,struct signature_check*) ;
 int FUNC_1 (struct signature_check*,int ,int) ;
 int FUNC_2 (struct signature_check*,unsigned int) ;
 int FUNC_3 (struct signature_check*) ;

__attribute__((used)) static int FUNC_4(struct commit *VAR_0, unsigned VAR_1)
{
 struct signature_check VAR_2;
 int VAR_3;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));

 VAR_3 = FUNC_0(VAR_0, &VAR_2);
 FUNC_2(&VAR_2, VAR_1);

 FUNC_3(&VAR_2);
 return VAR_3;
}
