
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fifolog_file {scalar_t__ fd; int * recbuf; } ;


 int FUNC_0 (struct fifolog_file const*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(const struct fifolog_file *VAR_1)
{

 FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_1->fd >= 0);
 FUNC_1(VAR_1->recbuf != ((void*)0));
}
