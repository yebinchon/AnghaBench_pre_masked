
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct pblk*,int*,int*) ;
 int FUNC_1 (char*,int ,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct pblk *VAR_1, char *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_0(VAR_1, &VAR_3, &VAR_4);
 return FUNC_1(VAR_2, VAR_0, "gc_enabled=%d, gc_active=%d\n",
     VAR_3, VAR_4);
}
