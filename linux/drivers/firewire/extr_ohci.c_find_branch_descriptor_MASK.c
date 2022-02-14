
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct descriptor {int control; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static struct descriptor *FUNC_1(struct descriptor *VAR_1, int VAR_2)
{
 __le16 VAR_3;

 VAR_3 = VAR_1->control & FUNC_0(VAR_0);


 if (VAR_2 == 2 && VAR_3 == FUNC_0(VAR_0))
  return VAR_1;
 else
  return VAR_1 + VAR_2 - 1;
}
