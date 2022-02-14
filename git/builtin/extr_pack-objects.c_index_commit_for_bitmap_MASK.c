
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit {int dummy; } ;


 int FUNC_0 (struct commit**,int) ;
 struct commit** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct commit *VAR_3)
{
 if (VAR_2 >= VAR_1) {
  VAR_1 = (VAR_1 + 32) * 2;
  FUNC_0(VAR_0, VAR_1);
 }

 VAR_0[VAR_2++] = VAR_3;
}
