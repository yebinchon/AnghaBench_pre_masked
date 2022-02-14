
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct conf_printer {int (* print_comment ) (int *,char*,void*) ;} ;
typedef int buf ;
struct TYPE_4__ {TYPE_1__* prompt; } ;
struct TYPE_3__ {char* text; } ;
typedef int FILE ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (char*,int,char*,char*) ;
 int FUNC_1 (int *,char*,void*) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_1, struct conf_printer *VAR_2, void *VAR_3)
{
 char VAR_4[256];

 FUNC_0(VAR_4, sizeof(VAR_4),
     "\n"
     "Automatically generated file; DO NOT EDIT.\n"
     "%s\n",
     VAR_0.prompt->text);

 VAR_2->print_comment(VAR_1, VAR_4, VAR_3);
}
