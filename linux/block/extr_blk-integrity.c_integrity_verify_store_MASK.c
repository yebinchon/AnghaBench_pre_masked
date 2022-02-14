
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_integrity {int flags; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (char*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct blk_integrity *VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 char *VAR_4 = (char *) VAR_2;
 unsigned long VAR_5 = FUNC_0(VAR_4, &VAR_4, 10);

 if (VAR_5)
  VAR_1->flags |= VAR_0;
 else
  VAR_1->flags &= ~VAR_0;

 return VAR_3;
}
