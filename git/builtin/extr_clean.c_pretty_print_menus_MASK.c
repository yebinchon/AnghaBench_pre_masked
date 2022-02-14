
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct column_options {char* indent; int padding; } ;
typedef int copts ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct column_options*,int ,int) ;
 int FUNC_1 (struct string_list*,unsigned int,struct column_options*) ;

__attribute__((used)) static void FUNC_2(struct string_list *VAR_2)
{
 unsigned int VAR_3 = 0;
 struct column_options VAR_4;

 VAR_3 = VAR_0 | VAR_1;
 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.indent = "  ";
 VAR_4.padding = 2;
 FUNC_1(VAR_2, VAR_3, &VAR_4);
}
