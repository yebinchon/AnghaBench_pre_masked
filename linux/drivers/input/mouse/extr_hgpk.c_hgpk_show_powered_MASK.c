
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct hgpk_data* private; } ;
struct hgpk_data {int powered; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct psmouse *VAR_0, void *VAR_1, char *VAR_2)
{
 struct hgpk_data *VAR_3 = VAR_0->private;

 return FUNC_0(VAR_2, "%d\n", VAR_3->powered);
}
