
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image {int line_allocated; int buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct image*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct image *VAR_0)
{
 FUNC_0(VAR_0->buf);
 FUNC_0(VAR_0->line_allocated);
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
