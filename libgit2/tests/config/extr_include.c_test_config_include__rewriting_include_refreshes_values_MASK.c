
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptr; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (char*) ;

void FUNC_7(void)
{
 FUNC_2("top-level", "[include]\npath = first\n[include]\npath = second");
 FUNC_2("first", "[first]\nfoo = bar");
 FUNC_2("second", "[second]\nfoo = bar");

 FUNC_3(FUNC_5(&VAR_1, "top-level"));
 FUNC_2("first", "[first]\nother = value");
 FUNC_1(FUNC_4(&VAR_0, VAR_1, "foo.bar"));
 FUNC_3(FUNC_4(&VAR_0, VAR_1, "first.other"));
 FUNC_0(VAR_0.ptr, "value");

 FUNC_3(FUNC_6("top-level"));
 FUNC_3(FUNC_6("first"));
 FUNC_3(FUNC_6("second"));
}
