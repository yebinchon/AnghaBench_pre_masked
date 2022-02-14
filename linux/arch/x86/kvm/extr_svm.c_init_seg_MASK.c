
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcb_seg {int attrib; int limit; scalar_t__ base; scalar_t__ selector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct vmcb_seg *VAR_3)
{
 VAR_3->selector = 0;
 VAR_3->attrib = VAR_0 | VAR_1 |
        VAR_2;
 VAR_3->limit = 0xffff;
 VAR_3->base = 0;
}
