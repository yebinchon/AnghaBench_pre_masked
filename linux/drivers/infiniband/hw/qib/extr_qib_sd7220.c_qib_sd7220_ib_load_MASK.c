
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int dummy; } ;
struct firmware {int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct qib_devdata*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct qib_devdata *VAR_1, const struct firmware *VAR_2)
{
 return FUNC_0(VAR_1, VAR_0, VAR_2->data, VAR_2->size, 0);
}
