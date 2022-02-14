
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct hgpk_data* private; } ;
struct hgpk_data {size_t mode; } ;
typedef int ssize_t ;


 char** VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct psmouse *VAR_1, void *VAR_2, char *VAR_3)
{
 struct hgpk_data *VAR_4 = VAR_1->private;

 return FUNC_0(VAR_3, "%s\n", VAR_0[VAR_4->mode]);
}
