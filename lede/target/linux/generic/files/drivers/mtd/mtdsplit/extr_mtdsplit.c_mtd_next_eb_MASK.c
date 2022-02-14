
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {scalar_t__ erasesize; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (size_t,struct mtd_info*) ;

__attribute__((used)) static ssize_t FUNC_1(struct mtd_info *VAR_0, size_t VAR_1)
{
 return FUNC_0(VAR_1, VAR_0) + VAR_0->erasesize;
}
