
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addr_req {int work; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,int *,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct addr_req *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = VAR_3 - VAR_1;
 if ((long)VAR_4 < 0)
  VAR_4 = 0;

 FUNC_0(VAR_0, &VAR_2->work, VAR_4);
}
