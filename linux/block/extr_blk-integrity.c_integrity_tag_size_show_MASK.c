
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_integrity {int tag_size; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct blk_integrity *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_1, "%u\n", VAR_0->tag_size);
}
