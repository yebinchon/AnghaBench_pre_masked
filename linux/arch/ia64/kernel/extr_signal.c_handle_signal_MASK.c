
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigscratch {int dummy; } ;
struct ksignal {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ksignal*,int ,struct sigscratch*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,struct ksignal*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static long
FUNC_4 (struct ksignal *VAR_1, struct sigscratch *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1, FUNC_1(), VAR_2);

 if (!VAR_3)
  FUNC_2(VAR_3, VAR_1, FUNC_3(VAR_0));

 return VAR_3;
}
