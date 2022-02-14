
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpt_mbox {unsigned long long data; int msg; } ;
struct cpt_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpt_device*,int,struct cpt_mbox*) ;

__attribute__((used)) static void FUNC_1(struct cpt_device *VAR_1, int VAR_2,
         struct cpt_mbox *VAR_3)
{
 VAR_3->data = 0ull;
 VAR_3->msg = VAR_0;
 FUNC_0(VAR_1, VAR_2, VAR_3);
}
