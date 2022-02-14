
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct attribute {char* name; int mode; } ;
struct TYPE_2__ {struct attribute attr; int show; } ;
struct dev_ext_attribute {char* var; TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dev_ext_attribute* FUNC_0 (int,int ) ;
 int FUNC_1 (struct attribute*) ;

__attribute__((used)) static struct attribute *FUNC_2(char *VAR_2, char *VAR_3)
{
 struct dev_ext_attribute *VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);

 if (!VAR_4)
  return ((void*)0);

 FUNC_1(&VAR_4->attr.attr);

 VAR_4->var = VAR_3;
 VAR_4->attr.attr.name = VAR_2;
 VAR_4->attr.attr.mode = 0444;
 VAR_4->attr.show = VAR_1;

 return &VAR_4->attr.attr;
}
