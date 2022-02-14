
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* esre1; } ;
struct esre_entry {TYPE_2__ esre; } ;
typedef int ssize_t ;
struct TYPE_3__ {int fw_class; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct esre_entry *VAR_0, char *VAR_1)
{
 char *VAR_2 = VAR_1;

 FUNC_0(&VAR_0->esre.esre1->fw_class, VAR_2);
 VAR_2 += FUNC_2(VAR_2);
 VAR_2 += FUNC_1(VAR_2, "\n");

 return VAR_2 - VAR_1;
}
