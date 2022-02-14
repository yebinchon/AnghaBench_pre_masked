
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct attribute {char* name; int mode; } ;
struct hw_stats_attribute {struct attribute attr; int port_num; scalar_t__ index; int store; int show; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hw_stats_attribute* FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct attribute *FUNC_1(char *VAR_5, u8 VAR_6)
{
 struct hw_stats_attribute *VAR_7;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->attr.name = VAR_5;
 VAR_7->attr.mode = VAR_2 | VAR_1;
 VAR_7->show = VAR_4;
 VAR_7->store = VAR_3;
 VAR_7->index = 0;
 VAR_7->port_num = VAR_6;

 return &VAR_7->attr;
}
