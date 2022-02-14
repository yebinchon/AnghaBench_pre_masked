
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct attribute {char* name; int mode; } ;
struct hw_stats_attribute {int index; struct attribute attr; int port_num; int * store; int show; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hw_stats_attribute* FUNC_0 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct attribute *FUNC_1(int VAR_3, u8 VAR_4, const char *VAR_5)
{
 struct hw_stats_attribute *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->attr.name = (char *)VAR_5;
 VAR_6->attr.mode = VAR_1;
 VAR_6->show = VAR_2;
 VAR_6->store = ((void*)0);
 VAR_6->index = VAR_3;
 VAR_6->port_num = VAR_4;

 return &VAR_6->attr;
}
